
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spcowner; } ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_tablespace ;
typedef scalar_t__ Datum ;
typedef int AclMode ;
typedef int AclMaskHow ;
typedef int Acl ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int*) ;
 int VAR_4 ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

AclMode
FUNC_15(Oid VAR_5, Oid VAR_6,
       AclMode VAR_7, AclMaskHow VAR_8)
{
 AclMode VAR_9;
 HeapTuple VAR_10;
 Datum VAR_11;
 bool VAR_12;
 Acl *VAR_13;
 Oid VAR_14;


 if (FUNC_14(VAR_6))
  return VAR_7;




 VAR_10 = FUNC_6(VAR_4, FUNC_4(VAR_5));
 if (!FUNC_3(VAR_10))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("tablespace with OID %u does not exist", VAR_5)));

 VAR_14 = ((Form_pg_tablespace) FUNC_2(VAR_10))->spcowner;

 VAR_11 = FUNC_7(VAR_4, VAR_10,
          VAR_0,
          &VAR_12);

 if (VAR_12)
 {

  VAR_13 = FUNC_8(VAR_3, VAR_14);
  VAR_11 = (Datum) 0;
 }
 else
 {

  VAR_13 = FUNC_0(VAR_11);
 }

 VAR_9 = FUNC_9(VAR_13, VAR_6, VAR_14, VAR_7, VAR_8);


 if (VAR_13 && (Pointer) VAR_13 != FUNC_1(VAR_11))
  FUNC_13(VAR_13);

 FUNC_5(VAR_10);

 return VAR_9;
}
