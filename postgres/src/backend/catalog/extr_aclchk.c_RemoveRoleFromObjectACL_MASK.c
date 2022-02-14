
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int defaclobjtype; int defaclnamespace; int defaclrole; } ;
struct TYPE_7__ {int is_grant; int all_privs; int grant_option; void* behavior; void* grantees; void* privileges; void* objtype; int nspid; int roleid; } ;
struct TYPE_6__ {int is_grant; int all_privs; int grant_option; void* behavior; void* grantees; int col_privs; void* privileges; void* objects; void* objtype; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ InternalGrant ;
typedef TYPE_2__ InternalDefaultACL ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_default_acl ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 void* VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_8 ;


 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_9 ;

 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_3 (int) ;


 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;


 int FUNC_6 (int ,char*,int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int ) ;

void
FUNC_13(Oid VAR_22, Oid VAR_23, Oid VAR_24)
{
 if (VAR_23 == VAR_6)
 {
  InternalDefaultACL VAR_25;
  Form_pg_default_acl VAR_26;
  Relation VAR_27;
  ScanKeyData VAR_28[1];
  SysScanDesc VAR_29;
  HeapTuple VAR_30;


  VAR_27 = FUNC_12(VAR_6, VAR_1);

  FUNC_4(&VAR_28[0],
     VAR_2,
     VAR_3, VAR_8,
     FUNC_3(VAR_24));

  VAR_29 = FUNC_8(VAR_27, VAR_5, 1,
          ((void*)0), 1, VAR_28);

  VAR_30 = FUNC_10(VAR_29);

  if (!FUNC_2(VAR_30))
   FUNC_6(VAR_7, "could not find tuple for default ACL %u", VAR_24);

  VAR_26 = (Form_pg_default_acl) FUNC_1(VAR_30);

  VAR_25.roleid = VAR_26->defaclrole;
  VAR_25.nspid = VAR_26->defaclnamespace;

  switch (VAR_26->defaclobjtype)
  {
   case 140:
    VAR_25.objtype = VAR_19;
    break;
   case 139:
    VAR_25.objtype = VAR_18;
    break;
   case 142:
    VAR_25.objtype = VAR_13;
    break;
   case 138:
    VAR_25.objtype = VAR_21;
    break;
   case 141:
    VAR_25.objtype = VAR_17;
    break;
   default:

    FUNC_6(VAR_7, "unexpected default ACL type: %d",
      (int) VAR_26->defaclobjtype);
    break;
  }

  FUNC_9(VAR_29);
  FUNC_11(VAR_27, VAR_1);

  VAR_25.is_grant = 0;
  VAR_25.all_privs = 1;
  VAR_25.privileges = VAR_0;
  VAR_25.grantees = FUNC_7(VAR_22);
  VAR_25.grant_option = 0;
  VAR_25.behavior = VAR_4;


  FUNC_5(&VAR_25);
 }
 else
 {
  InternalGrant VAR_31;

  switch (VAR_23)
  {
   case 130:

    VAR_31.objtype = VAR_19;
    break;
   case 137:
    VAR_31.objtype = VAR_10;
    break;
   case 128:
    VAR_31.objtype = VAR_21;
    break;
   case 131:
    VAR_31.objtype = VAR_16;
    break;
   case 134:
    VAR_31.objtype = VAR_14;
    break;
   case 133:
    VAR_31.objtype = VAR_15;
    break;
   case 132:
    VAR_31.objtype = VAR_17;
    break;
   case 129:
    VAR_31.objtype = VAR_20;
    break;
   case 135:
    VAR_31.objtype = VAR_12;
    break;
   case 136:
    VAR_31.objtype = VAR_11;
    break;
   default:
    FUNC_6(VAR_7, "unexpected object class %u", VAR_23);
    break;
  }
  VAR_31.is_grant = 0;
  VAR_31.objects = FUNC_7(VAR_24);
  VAR_31.all_privs = 1;
  VAR_31.privileges = VAR_0;
  VAR_31.col_privs = VAR_9;
  VAR_31.grantees = FUNC_7(VAR_22);
  VAR_31.grant_option = 0;
  VAR_31.behavior = VAR_4;

  FUNC_0(&VAR_31);
 }
}
