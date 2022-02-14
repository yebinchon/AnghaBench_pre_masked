
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct selabel_handle {int dummy; } ;
typedef int security_context_t ;
struct TYPE_14__ {int attnum; int attrelid; int attname; } ;
struct TYPE_13__ {int relnamespace; int oid; int relname; int relkind; } ;
struct TYPE_12__ {int oid; int datname; } ;
struct TYPE_11__ {int oid; int nspname; } ;
struct TYPE_10__ {int pronamespace; int oid; int proname; } ;
struct TYPE_9__ {int classId; int objectSubId; int objectId; } ;
typedef int SysScanDesc ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef TYPE_3__* Form_pg_namespace ;
typedef TYPE_4__* Form_pg_database ;
typedef TYPE_5__* Form_pg_class ;
typedef TYPE_6__* Form_pg_attribute ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int ) ;

 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_19 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ VAR_20 ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;
 char* FUNC_13 (int) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_19 (struct selabel_handle*,int *,char*,int) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (int ,int ,int,int *,int ,int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int,int ) ;

__attribute__((used)) static void
FUNC_26(struct selabel_handle *VAR_21, Oid VAR_22)
{
 Relation VAR_23;
 SysScanDesc VAR_24;
 HeapTuple VAR_25;
 char *VAR_26 = FUNC_12(VAR_5);
 char *VAR_27;
 Oid VAR_28;
 char *VAR_29;





 VAR_23 = FUNC_25(VAR_22, VAR_0);

 VAR_24 = FUNC_21(VAR_23, VAR_4, 0,
          ((void*)0), 0, ((void*)0));
 while (FUNC_1(VAR_25 = FUNC_23(VAR_24)))
 {
  Form_pg_database VAR_30;
  Form_pg_namespace VAR_31;
  Form_pg_class VAR_32;
  Form_pg_attribute VAR_33;
  Form_pg_proc VAR_34;
  char *VAR_35;
  int VAR_36 = 1234;
  ObjectAddress VAR_37;
  security_context_t VAR_38;





  switch (VAR_22)
  {
   case 131:
    VAR_30 = (Form_pg_database) FUNC_0(VAR_25);

    VAR_36 = VAR_12;

    VAR_35 = FUNC_18(FUNC_2(VAR_30->datname),
           ((void*)0), ((void*)0), ((void*)0));

    VAR_37.classId = 131;
    VAR_37.objectId = VAR_30->oid;
    VAR_37.objectSubId = 0;
    break;

   case 130:
    VAR_31 = (Form_pg_namespace) FUNC_0(VAR_25);

    VAR_36 = VAR_14;

    VAR_35 = FUNC_18(VAR_26,
           FUNC_2(VAR_31->nspname),
           ((void*)0), ((void*)0));

    VAR_37.classId = 130;
    VAR_37.objectId = VAR_31->oid;
    VAR_37.objectSubId = 0;
    break;

   case 128:
    VAR_32 = (Form_pg_class) FUNC_0(VAR_25);

    if (VAR_32->relkind == VAR_8 ||
     VAR_32->relkind == VAR_7)
     VAR_36 = VAR_16;
    else if (VAR_32->relkind == VAR_9)
     VAR_36 = VAR_15;
    else if (VAR_32->relkind == VAR_10)
     VAR_36 = VAR_17;
    else
     continue;

    VAR_27 = FUNC_13(VAR_32->relnamespace);
    VAR_35 = FUNC_18(VAR_26,
           VAR_27,
           FUNC_2(VAR_32->relname),
           ((void*)0));
    FUNC_17(VAR_27);

    VAR_37.classId = 128;
    VAR_37.objectId = VAR_32->oid;
    VAR_37.objectSubId = 0;
    break;

   case 132:
    VAR_33 = (Form_pg_attribute) FUNC_0(VAR_25);

    if (FUNC_16(VAR_33->attrelid) != VAR_8 &&
     FUNC_16(VAR_33->attrelid) != VAR_7)
     continue;

    VAR_36 = VAR_11;

    VAR_28 = FUNC_15(VAR_33->attrelid);
    VAR_27 = FUNC_13(VAR_28);
    VAR_29 = FUNC_14(VAR_33->attrelid);
    VAR_35 = FUNC_18(VAR_26,
           VAR_27,
           VAR_29,
           FUNC_2(VAR_33->attname));
    FUNC_17(VAR_27);
    FUNC_17(VAR_29);

    VAR_37.classId = 128;
    VAR_37.objectId = VAR_33->attrelid;
    VAR_37.objectSubId = VAR_33->attnum;
    break;

   case 129:
    VAR_34 = (Form_pg_proc) FUNC_0(VAR_25);

    VAR_36 = VAR_13;

    VAR_27 = FUNC_13(VAR_34->pronamespace);
    VAR_35 = FUNC_18(VAR_26,
           VAR_27,
           FUNC_2(VAR_34->proname),
           ((void*)0));
    FUNC_17(VAR_27);

    VAR_37.classId = 129;
    VAR_37.objectId = VAR_34->oid;
    VAR_37.objectSubId = 0;
    break;

   default:
    FUNC_7(VAR_3, "unexpected catalog id: %u", VAR_22);
    VAR_35 = ((void*)0);
    break;
  }

  if (FUNC_19(VAR_21, &VAR_38, VAR_35, VAR_36) == 0)
  {
   FUNC_5();
   {




    FUNC_20(&VAR_37, VAR_38);

    FUNC_6(&VAR_37, VAR_18, VAR_38);
   }
   FUNC_4();
   {
    FUNC_11(VAR_38);
   }
   FUNC_3();
  }
  else if (VAR_20 == VAR_1)
   FUNC_8(VAR_19,
     (FUNC_10("SELinux: no initial label assigned for %s (type=%d), skipping",
       VAR_35, VAR_36)));
  else
   FUNC_8(VAR_3,
     (FUNC_9(VAR_2),
      FUNC_10("SELinux: could not determine initial security label for %s (type=%d): %m", VAR_35, VAR_36)));

  FUNC_17(VAR_35);
 }
 FUNC_22(VAR_24);

 FUNC_24(VAR_23, VAR_6);
}
