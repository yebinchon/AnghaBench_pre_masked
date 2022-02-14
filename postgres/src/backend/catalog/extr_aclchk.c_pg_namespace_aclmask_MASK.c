
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nspowner; } ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_namespace ;
typedef scalar_t__ Datum ;
typedef int AclMode ;
typedef int AclMaskHow ;
typedef int Acl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int*) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int ,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;

AclMode
FUNC_17(Oid VAR_10, Oid VAR_11,
      AclMode VAR_12, AclMaskHow VAR_13)
{
 AclMode VAR_14;
 HeapTuple VAR_15;
 Datum VAR_16;
 bool VAR_17;
 Acl *VAR_18;
 Oid VAR_19;


 if (FUNC_16(VAR_11))
  return VAR_12;
 if (FUNC_13(VAR_10))
 {
  if (FUNC_15(VAR_7, VAR_11,
         VAR_2) == VAR_0)
   return VAR_12 & VAR_1;
  else
   return VAR_12 & VAR_3;
 }




 VAR_15 = FUNC_6(VAR_8, FUNC_4(VAR_10));
 if (!FUNC_3(VAR_15))
  FUNC_10(VAR_6,
    (FUNC_11(VAR_5),
     FUNC_12("schema with OID %u does not exist", VAR_10)));

 VAR_19 = ((Form_pg_namespace) FUNC_2(VAR_15))->nspowner;

 VAR_16 = FUNC_7(VAR_8, VAR_15, VAR_4,
          &VAR_17);
 if (VAR_17)
 {

  VAR_18 = FUNC_8(VAR_9, VAR_19);
  VAR_16 = (Datum) 0;
 }
 else
 {

  VAR_18 = FUNC_0(VAR_16);
 }

 VAR_14 = FUNC_9(VAR_18, VAR_11, VAR_19, VAR_12, VAR_13);


 if (VAR_18 && (Pointer) VAR_18 != FUNC_1(VAR_16))
  FUNC_14(VAR_18);

 FUNC_5(VAR_15);

 return VAR_14;
}
