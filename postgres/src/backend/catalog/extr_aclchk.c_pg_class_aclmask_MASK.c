
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relkind; int relowner; } ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef scalar_t__ Datum ;
typedef int AclMode ;
typedef int AclMaskHow ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;

 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ,int ,int,int ) ;
 int VAR_13 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;

AclMode
FUNC_17(Oid VAR_14, Oid VAR_15,
     AclMode VAR_16, AclMaskHow VAR_17)
{
 AclMode VAR_18;
 HeapTuple VAR_19;
 Form_pg_class VAR_20;
 Datum VAR_21;
 bool VAR_22;
 Acl *VAR_23;
 Oid VAR_24;




 VAR_19 = FUNC_7(VAR_12, FUNC_5(VAR_14));
 if (!FUNC_3(VAR_19))
  FUNC_12(VAR_8,
    (FUNC_13(VAR_7),
     FUNC_14("relation with OID %u does not exist",
      VAR_14)));
 VAR_20 = (Form_pg_class) FUNC_2(VAR_19);
 if ((VAR_16 & (VAR_1 | VAR_3 | VAR_0 | VAR_2 | VAR_4)) &&
  FUNC_4(VAR_14, VAR_20) &&
  VAR_20->relkind != VAR_11 &&
  !FUNC_16(VAR_15) &&
  !VAR_13)
 {



  VAR_16 &= ~(VAR_1 | VAR_3 | VAR_0 | VAR_2 | VAR_4);
 }




 if (FUNC_16(VAR_15))
 {



  FUNC_6(VAR_19);
  return VAR_16;
 }




 VAR_24 = VAR_20->relowner;

 VAR_21 = FUNC_8(VAR_12, VAR_19, VAR_5,
          &VAR_22);
 if (VAR_22)
 {

  switch (VAR_20->relkind)
  {
   case 128:
    VAR_23 = FUNC_9(VAR_9, VAR_24);
    break;
   default:
    VAR_23 = FUNC_9(VAR_10, VAR_24);
    break;
  }
  VAR_21 = (Datum) 0;
 }
 else
 {

  VAR_23 = FUNC_0(VAR_21);
 }

 VAR_18 = FUNC_10(VAR_23, VAR_15, VAR_24, VAR_16, VAR_17);


 if (VAR_23 && (Pointer) VAR_23 != FUNC_1(VAR_21))
  FUNC_15(VAR_23);

 FUNC_6(VAR_19);

 return VAR_18;
}
