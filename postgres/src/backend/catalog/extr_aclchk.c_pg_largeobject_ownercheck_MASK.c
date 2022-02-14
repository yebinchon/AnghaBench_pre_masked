
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lomowner; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_largeobject_metadata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int *,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

bool
FUNC_14(Oid VAR_8, Oid VAR_9)
{
 Relation VAR_10;
 ScanKeyData VAR_11[1];
 SysScanDesc VAR_12;
 HeapTuple VAR_13;
 Oid VAR_14;


 if (FUNC_8(VAR_9))
  return 1;


 VAR_10 = FUNC_13(VAR_7,
       VAR_0);

 FUNC_3(&VAR_11[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_8));

 VAR_12 = FUNC_9(VAR_10,
         VAR_6, 1,
         ((void*)0), 1, VAR_11);

 VAR_13 = FUNC_11(VAR_12);
 if (!FUNC_1(VAR_13))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("large object %u does not exist", VAR_8)));

 VAR_14 = ((Form_pg_largeobject_metadata) FUNC_0(VAR_13))->lomowner;

 FUNC_10(VAR_12);
 FUNC_12(VAR_10, VAR_0);

 return FUNC_7(VAR_9, VAR_14);
}
