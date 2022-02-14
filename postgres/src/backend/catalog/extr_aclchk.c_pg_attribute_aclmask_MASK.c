
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ attisdropped; } ;
struct TYPE_3__ {int relowner; } ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;
typedef int AttrNumber ;
typedef int AclMode ;
typedef int AclMaskHow ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (int *) ;

AclMode
FUNC_15(Oid VAR_5, AttrNumber VAR_6, Oid VAR_7,
      AclMode VAR_8, AclMaskHow VAR_9)
{
 AclMode VAR_10;
 HeapTuple VAR_11;
 HeapTuple VAR_12;
 Form_pg_class VAR_13;
 Form_pg_attribute VAR_14;
 Datum VAR_15;
 bool VAR_16;
 Acl *VAR_17;
 Oid VAR_18;




 VAR_12 = FUNC_8(VAR_0,
          FUNC_5(VAR_5),
          FUNC_4(VAR_6));
 if (!FUNC_3(VAR_12))
  FUNC_11(VAR_3,
    (FUNC_12(VAR_2),
     FUNC_13("attribute %d of relation with OID %u does not exist",
      VAR_6, VAR_5)));
 VAR_14 = (Form_pg_attribute) FUNC_2(VAR_12);


 if (VAR_14->attisdropped)
  FUNC_11(VAR_3,
    (FUNC_12(VAR_2),
     FUNC_13("attribute %d of relation with OID %u does not exist",
      VAR_6, VAR_5)));

 VAR_15 = FUNC_9(VAR_0, VAR_12, VAR_1,
          &VAR_16);






 if (VAR_16)
 {
  FUNC_6(VAR_12);
  return 0;
 }
 VAR_11 = FUNC_7(VAR_4, FUNC_5(VAR_5));
 if (!FUNC_3(VAR_11))
 {
  FUNC_6(VAR_12);
  return 0;
 }
 VAR_13 = (Form_pg_class) FUNC_2(VAR_11);

 VAR_18 = VAR_13->relowner;

 FUNC_6(VAR_11);


 VAR_17 = FUNC_0(VAR_15);

 VAR_10 = FUNC_10(VAR_17, VAR_7, VAR_18, VAR_8, VAR_9);


 if (VAR_17 && (Pointer) VAR_17 != FUNC_1(VAR_15))
  FUNC_14(VAR_17);

 FUNC_6(VAR_12);

 return VAR_10;
}
