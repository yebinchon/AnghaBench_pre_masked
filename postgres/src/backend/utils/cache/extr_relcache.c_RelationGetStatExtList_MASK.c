
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int oid; } ;
struct TYPE_8__ {int rd_statvalid; int * rd_statlist; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_statistic_ext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_14 (int ,int ) ;

List *
FUNC_15(Relation VAR_9)
{
 Relation VAR_10;
 SysScanDesc VAR_11;
 ScanKeyData VAR_12;
 HeapTuple VAR_13;
 List *VAR_14;
 List *VAR_15;
 MemoryContext VAR_16;


 if (VAR_9->rd_statvalid != 0)
  return FUNC_7(VAR_9->rd_statlist);







 VAR_14 = VAR_5;





 FUNC_5(&VAR_12,
    VAR_1,
    VAR_2, VAR_4,
    FUNC_3(FUNC_4(VAR_9)));

 VAR_10 = FUNC_14(VAR_6, VAR_0);
 VAR_11 = FUNC_10(VAR_10, VAR_7, 1,
         ((void*)0), 1, &VAR_12);

 while (FUNC_1(VAR_13 = FUNC_12(VAR_11)))
 {
  Oid VAR_17 = ((Form_pg_statistic_ext) FUNC_0(VAR_13))->oid;

  VAR_14 = FUNC_6(VAR_14, VAR_17);
 }

 FUNC_11(VAR_11);

 FUNC_13(VAR_10, VAR_0);


 FUNC_9(VAR_14, VAR_8);


 VAR_16 = FUNC_2(VAR_3);
 VAR_15 = VAR_9->rd_statlist;
 VAR_9->rd_statlist = FUNC_7(VAR_14);

 VAR_9->rd_statvalid = 1;
 FUNC_2(VAR_16);


 FUNC_8(VAR_15);

 return VAR_14;
}
