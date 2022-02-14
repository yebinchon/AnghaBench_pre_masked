
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lomowner; } ;
typedef int SysScanDesc ;
typedef int Snapshot ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_largeobject_metadata ;
typedef scalar_t__ Datum ;
typedef int AclMode ;
typedef int AclMaskHow ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int,int ,int,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

AclMode
FUNC_20(Oid VAR_10, Oid VAR_11,
        AclMode VAR_12, AclMaskHow VAR_13,
        Snapshot VAR_14)
{
 AclMode VAR_15;
 Relation VAR_16;
 ScanKeyData VAR_17[1];
 SysScanDesc VAR_18;
 HeapTuple VAR_19;
 Datum VAR_20;
 bool VAR_21;
 Acl *VAR_22;
 Oid VAR_23;


 if (FUNC_14(VAR_11))
  return VAR_12;




 VAR_16 = FUNC_19(VAR_8,
       VAR_0);

 FUNC_6(&VAR_17[0],
    VAR_2,
    VAR_3, VAR_6,
    FUNC_4(VAR_10));

 VAR_18 = FUNC_15(VAR_16,
         VAR_7, 1,
         VAR_14, 1, VAR_17);

 VAR_19 = FUNC_17(VAR_18);
 if (!FUNC_3(VAR_19))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("large object %u does not exist", VAR_10)));

 VAR_23 = ((Form_pg_largeobject_metadata) FUNC_2(VAR_19))->lomowner;

 VAR_20 = FUNC_12(VAR_19, VAR_1,
       FUNC_5(VAR_16), &VAR_21);

 if (VAR_21)
 {

  VAR_22 = FUNC_7(VAR_9, VAR_23);
  VAR_20 = (Datum) 0;
 }
 else
 {

  VAR_22 = FUNC_0(VAR_20);
 }

 VAR_15 = FUNC_8(VAR_22, VAR_11, VAR_23, VAR_12, VAR_13);


 if (VAR_22 && (Pointer) VAR_22 != FUNC_1(VAR_20))
  FUNC_13(VAR_22);

 FUNC_16(VAR_18);

 FUNC_18(VAR_16, VAR_0);

 return VAR_15;
}
