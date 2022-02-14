
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
struct TYPE_22__ {int oid; } ;
struct TYPE_21__ {int t_self; } ;
struct TYPE_20__ {int objtype; int roleid; int nspid; int grantees; int behavior; int grant_option; int is_grant; int all_privs; int privileges; } ;
struct TYPE_19__ {scalar_t__ objectSubId; int objectId; void* classId; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ InternalDefaultACL ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_default_acl ;
typedef int Datum ;
typedef int AclMode ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int FUNC_2 (char) ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int * FUNC_3 (int) ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (int*,int,int) ;
 void* VAR_23 ;
 int VAR_24 ;





 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int VAR_25 ;
 TYPE_3__* FUNC_15 (int ,int,int,int) ;
 int FUNC_16 (int ,TYPE_3__*,int,int*) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int,int ) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int **) ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*) ;
 TYPE_3__* FUNC_26 (int ,int*,int*) ;
 TYPE_3__* FUNC_27 (TYPE_3__*,int ,int*,int*,int*) ;
 int * FUNC_28 () ;
 int * FUNC_29 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_30 (TYPE_1__*,int ,int ) ;
 int FUNC_31 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_32 (void*,int ,int ) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (void*,int ) ;
 int FUNC_35 (void*,int ,int ,int ,int,int *,int,int *) ;

__attribute__((used)) static void
FUNC_36(InternalDefaultACL *VAR_26)
{
 AclMode VAR_27 = VAR_26->privileges;
 char VAR_28;
 Relation VAR_29;
 HeapTuple VAR_30;
 bool VAR_31;
 Acl *VAR_32;
 Acl *VAR_33;
 Acl *VAR_34;
 HeapTuple VAR_35;
 Datum VAR_36[VAR_24];
 bool VAR_37[VAR_24];
 bool VAR_38[VAR_24];
 int VAR_39;
 int VAR_40;
 Oid *VAR_41;
 Oid *VAR_42;

 VAR_29 = FUNC_34(VAR_20, VAR_25);







 if (!FUNC_11(VAR_26->nspid))
  VAR_32 = FUNC_18(VAR_26->objtype, VAR_26->roleid);
 else
  VAR_32 = FUNC_28();





 switch (VAR_26->objtype)
 {
  case 129:
   VAR_28 = VAR_13;
   if (VAR_26->all_privs && VAR_27 == VAR_5)
    VAR_27 = VAR_1;
   break;

  case 130:
   VAR_28 = VAR_14;
   if (VAR_26->all_privs && VAR_27 == VAR_5)
    VAR_27 = VAR_3;
   break;

  case 132:
   VAR_28 = VAR_11;
   if (VAR_26->all_privs && VAR_27 == VAR_5)
    VAR_27 = VAR_0;
   break;

  case 128:
   VAR_28 = VAR_15;
   if (VAR_26->all_privs && VAR_27 == VAR_5)
    VAR_27 = VAR_4;
   break;

  case 131:
   if (FUNC_11(VAR_26->nspid))
    FUNC_23(VAR_22,
      (FUNC_24(VAR_21),
       FUNC_25("cannot use IN SCHEMA clause when using GRANT/REVOKE ON SCHEMAS")));
   VAR_28 = VAR_12;
   if (VAR_26->all_privs && VAR_27 == VAR_5)
    VAR_27 = VAR_2;
   break;

  default:
   FUNC_22(VAR_22, "unrecognized objtype: %d",
     (int) VAR_26->objtype);
   VAR_28 = 0;
   break;
 }


 VAR_30 = FUNC_15(VAR_16,
       FUNC_10(VAR_26->roleid),
       FUNC_10(VAR_26->nspid),
       FUNC_2(VAR_28));

 if (FUNC_6(VAR_30))
 {
  Datum VAR_43;
  bool VAR_44;

  VAR_43 = FUNC_16(VAR_16, VAR_30,
           VAR_6,
           &VAR_44);
  if (!VAR_44)
   VAR_33 = FUNC_3(VAR_43);
  else
   VAR_33 = ((void*)0);
  VAR_31 = 0;
 }
 else
 {
  VAR_33 = ((void*)0);
  VAR_31 = 1;
 }

 if (VAR_33 != ((void*)0))
 {





  VAR_39 = FUNC_21(VAR_33, &VAR_41);
 }
 else
 {

  VAR_33 = FUNC_17(VAR_32);

  VAR_39 = 0;
  VAR_41 = ((void*)0);
 }





 VAR_34 = FUNC_29(VAR_33,
           VAR_26->is_grant,
           VAR_26->grant_option,
           VAR_26->behavior,
           VAR_26->grantees,
           VAR_27,
           VAR_26->roleid,
           VAR_26->roleid);






 FUNC_20(VAR_34);
 FUNC_20(VAR_32);
 if (FUNC_19(VAR_34, VAR_32))
 {

  if (!VAR_31)
  {
   ObjectAddress VAR_45;






   VAR_45.classId = VAR_20;
   VAR_45.objectId = ((Form_pg_default_acl) FUNC_4(VAR_30))->oid;
   VAR_45.objectSubId = 0;

   FUNC_30(&VAR_45, VAR_18, 0);
  }
 }
 else
 {
  Oid VAR_46;


  FUNC_9(VAR_36, 0, sizeof(VAR_36));
  FUNC_9(VAR_37, 0, sizeof(VAR_37));
  FUNC_9(VAR_38, 0, sizeof(VAR_38));

  if (VAR_31)
  {

   VAR_46 = FUNC_5(VAR_29, VAR_19,
             VAR_10);
   VAR_36[VAR_10 - 1] = FUNC_10(VAR_46);
   VAR_36[VAR_9 - 1] = FUNC_10(VAR_26->roleid);
   VAR_36[VAR_7 - 1] = FUNC_10(VAR_26->nspid);
   VAR_36[VAR_8 - 1] = FUNC_2(VAR_28);
   VAR_36[VAR_6 - 1] = FUNC_12(VAR_34);

   VAR_35 = FUNC_26(FUNC_13(VAR_29), VAR_36, VAR_37);
   FUNC_0(VAR_29, VAR_35);
  }
  else
  {
   VAR_46 = ((Form_pg_default_acl) FUNC_4(VAR_30))->oid;


   VAR_36[VAR_6 - 1] = FUNC_12(VAR_34);
   VAR_38[VAR_6 - 1] = 1;

   VAR_35 = FUNC_27(VAR_30, FUNC_13(VAR_29),
           VAR_36, VAR_37, VAR_38);
   FUNC_1(VAR_29, &VAR_35->t_self, VAR_35);
  }


  if (VAR_31)
  {

   FUNC_32(VAR_20, VAR_46,
         VAR_26->roleid);


   if (FUNC_11(VAR_26->nspid))
   {
    ObjectAddress VAR_47,
       VAR_48;

    VAR_47.classId = VAR_20;
    VAR_47.objectId = VAR_46;
    VAR_47.objectSubId = 0;

    VAR_48.classId = VAR_23;
    VAR_48.objectId = VAR_26->nspid;
    VAR_48.objectSubId = 0;

    FUNC_31(&VAR_47, &VAR_48, VAR_17);
   }
  }




  VAR_40 = FUNC_21(VAR_34, &VAR_42);

  FUNC_35(VAR_20,
         VAR_46, 0,
         VAR_26->roleid,
         VAR_39, VAR_41,
         VAR_40, VAR_42);

  if (VAR_31)
   FUNC_8(VAR_20, VAR_46, 0);
  else
   FUNC_7(VAR_20, VAR_46, 0);
 }

 if (FUNC_6(VAR_30))
  FUNC_14(VAR_30);

 FUNC_33(VAR_29, VAR_25);
}
