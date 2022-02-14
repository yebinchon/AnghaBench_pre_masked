
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int bytea ;
struct TYPE_7__ {scalar_t__ pageno; } ;
struct TYPE_6__ {int snapshot; int id; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_1__ LargeObjectDesc ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_largeobject ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_2__*,int **,int*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static uint64
FUNC_14(LargeObjectDesc *VAR_8)
{
 uint64 VAR_9 = 0;
 ScanKeyData VAR_10[1];
 SysScanDesc VAR_11;
 HeapTuple VAR_12;

 FUNC_0(FUNC_5(VAR_8));

 FUNC_9();

 FUNC_6(&VAR_10[0],
    VAR_0,
    VAR_1, VAR_4,
    FUNC_4(VAR_8->id));

 VAR_11 = FUNC_11(VAR_6, VAR_7,
         VAR_8->snapshot, 1, VAR_10);







 VAR_12 = FUNC_13(VAR_11, VAR_2);
 if (FUNC_3(VAR_12))
 {
  Form_pg_largeobject VAR_13;
  bytea *VAR_14;
  int VAR_15;
  bool VAR_16;

  if (FUNC_2(VAR_12))
   FUNC_7(VAR_3, "null field found in pg_largeobject");
  VAR_13 = (Form_pg_largeobject) FUNC_1(VAR_12);
  FUNC_8(VAR_13, &VAR_14, &VAR_15, &VAR_16);
  VAR_9 = (uint64) VAR_13->pageno * VAR_5 + VAR_15;
  if (VAR_16)
   FUNC_10(VAR_14);
 }

 FUNC_12(VAR_11);

 return VAR_9;
}
