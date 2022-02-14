
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * rd_indcollation; } ;
struct TYPE_13__ {TYPE_2__* bt_columns; } ;
struct TYPE_12__ {TYPE_7__* bd_index; TYPE_1__* bd_tupdesc; } ;
struct TYPE_11__ {int natts; } ;
typedef int MemoryContext ;
typedef int FmgrInfo ;
typedef TYPE_2__ BrinValues ;
typedef int BrinTuple ;
typedef TYPE_3__ BrinMemTuple ;
typedef TYPE_2__ BrinDesc ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int *,int *) ;
 int * FUNC_6 (TYPE_7__*,int,int ) ;

__attribute__((used)) static void
FUNC_7(BrinDesc *VAR_3, BrinMemTuple *VAR_4, BrinTuple *VAR_5)
{
 int VAR_6;
 BrinMemTuple *VAR_7;
 MemoryContext VAR_8;
 MemoryContext VAR_9;


 VAR_8 = FUNC_0(VAR_2,
        "brin union",
        VAR_0);
 VAR_9 = FUNC_3(VAR_8);
 VAR_7 = FUNC_5(VAR_3, VAR_5, ((void*)0));
 FUNC_3(VAR_9);

 for (VAR_6 = 0; VAR_6 < VAR_3->bd_tupdesc->natts; VAR_6++)
 {
  FmgrInfo *VAR_10;
  BrinValues *VAR_11 = &VAR_4->bt_columns[VAR_6];
  BrinValues *VAR_12 = &VAR_7->bt_columns[VAR_6];

  VAR_10 = FUNC_6(VAR_3->bd_index, VAR_6 + 1,
         VAR_1);
  FUNC_1(VAR_10,
        VAR_3->bd_index->rd_indcollation[VAR_6],
        FUNC_4(VAR_3),
        FUNC_4(VAR_11),
        FUNC_4(VAR_12));
 }

 FUNC_2(VAR_8);
}
