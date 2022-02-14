
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_12__ {scalar_t__ oid; scalar_t__ rolsuper; int rolname; } ;
struct TYPE_11__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_authid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (char const*) ;
 int VAR_10 ;
 char const* FUNC_9 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_14 ;
 TYPE_1__* FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_15 ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,...) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_24 (TYPE_1__*,int ,int *,int*,int*) ;
 int VAR_16 ;
 scalar_t__ FUNC_25 (char const*,char*,int) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;

ObjectAddress
FUNC_29(const char *VAR_17, const char *VAR_18)
{
 HeapTuple VAR_19,
    VAR_20;
 TupleDesc VAR_21;
 Relation VAR_22;
 Datum VAR_23;
 bool VAR_24;
 Datum VAR_25[VAR_11];
 bool VAR_26[VAR_11];
 bool VAR_27[VAR_11];
 int VAR_28;
 Oid VAR_29;
 ObjectAddress VAR_30;
 Form_pg_authid VAR_31;

 VAR_22 = FUNC_28(VAR_3, VAR_14);
 VAR_21 = FUNC_11(VAR_22);

 VAR_19 = FUNC_13(VAR_0, FUNC_0(VAR_17));
 if (!FUNC_6(VAR_19))
  FUNC_17(VAR_9,
    (FUNC_18(VAR_8),
     FUNC_20("role \"%s\" does not exist", VAR_17)));
 VAR_31 = (Form_pg_authid) FUNC_3(VAR_19);
 VAR_29 = VAR_31->oid;

 if (VAR_29 == FUNC_5())
  FUNC_17(VAR_9,
    (FUNC_18(VAR_5),
     FUNC_20("session user cannot be renamed")));
 if (VAR_29 == FUNC_4())
  FUNC_17(VAR_9,
    (FUNC_18(VAR_5),
     FUNC_20("current user cannot be renamed")));





 if (FUNC_8(FUNC_9(VAR_31->rolname)))
  FUNC_17(VAR_9,
    (FUNC_18(VAR_7),
     FUNC_20("role name \"%s\" is reserved",
      FUNC_9(VAR_31->rolname)),
     FUNC_19("Role names starting with \"pg_\" are reserved.")));

 if (FUNC_8(VAR_18))
  FUNC_17(VAR_9,
    (FUNC_18(VAR_7),
     FUNC_20("role name \"%s\" is reserved",
      VAR_18),
     FUNC_19("Role names starting with \"pg_\" are reserved.")));
 if (FUNC_14(VAR_0, FUNC_0(VAR_18)))
  FUNC_17(VAR_9,
    (FUNC_18(VAR_4),
     FUNC_20("role \"%s\" already exists", VAR_18)));




 if (((Form_pg_authid) FUNC_3(VAR_19))->rolsuper)
 {
  if (!FUNC_26())
   FUNC_17(VAR_9,
     (FUNC_18(VAR_6),
      FUNC_20("must be superuser to rename superusers")));
 }
 else
 {
  if (!FUNC_22())
   FUNC_17(VAR_9,
     (FUNC_18(VAR_6),
      FUNC_20("permission denied to rename role")));
 }


 for (VAR_28 = 0; VAR_28 < VAR_11; VAR_28++)
  VAR_27[VAR_28] = 0;

 VAR_27[VAR_1 - 1] = 1;
 VAR_25[VAR_1 - 1] = FUNC_2(VAR_16,
                  FUNC_0(VAR_18));
 VAR_26[VAR_1 - 1] = 0;

 VAR_23 = FUNC_23(VAR_19, VAR_2, VAR_21, &VAR_24);

 if (!VAR_24 && FUNC_21(FUNC_15(VAR_23)) == VAR_13)
 {

  VAR_27[VAR_2 - 1] = 1;
  VAR_26[VAR_2 - 1] = 1;

  FUNC_17(VAR_10,
    (FUNC_20("MD5 password cleared because of role rename")));
 }

 VAR_20 = FUNC_24(VAR_19, VAR_21, VAR_25, VAR_26, VAR_27);
 FUNC_1(VAR_22, &VAR_19->t_self, VAR_20);

 FUNC_7(VAR_3, VAR_29, 0);

 FUNC_10(VAR_30, VAR_3, VAR_29);

 FUNC_12(VAR_19);




 FUNC_27(VAR_22, VAR_12);

 return VAR_30;
}
