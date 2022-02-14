
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;
typedef char* Oid ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int *) ;
 char* FUNC_8 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int *,char*,char*,char*,char const*,TYPE_1__*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *,char*) ;
 char* FUNC_14 (char const*) ;
 int FUNC_15 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (TYPE_1__*,char*,...) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_21(PGconn *VAR_7)
{
 PQExpBuffer VAR_8 = FUNC_10();
 PGresult *VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12,
    VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17,
    VAR_18,
    VAR_19,
    VAR_20,
    VAR_21,
    VAR_22,
    VAR_23;
 int VAR_24;


 if (VAR_6 >= 90600)
  FUNC_17(VAR_8,
        "SELECT oid, rolname, rolsuper, rolinherit, "
        "rolcreaterole, rolcreatedb, "
        "rolcanlogin, rolconnlimit, rolpassword, "
        "rolvaliduntil, rolreplication, rolbypassrls, "
        "pg_catalog.shobj_description(oid, '%s') as rolcomment, "
        "rolname = current_user AS is_current_user "
        "FROM %s "
        "WHERE rolname !~ '^pg_' "
        "ORDER BY 2", VAR_5, VAR_5);
 else if (VAR_6 >= 90500)
  FUNC_17(VAR_8,
        "SELECT oid, rolname, rolsuper, rolinherit, "
        "rolcreaterole, rolcreatedb, "
        "rolcanlogin, rolconnlimit, rolpassword, "
        "rolvaliduntil, rolreplication, rolbypassrls, "
        "pg_catalog.shobj_description(oid, '%s') as rolcomment, "
        "rolname = current_user AS is_current_user "
        "FROM %s "
        "ORDER BY 2", VAR_5, VAR_5);
 else if (VAR_6 >= 90100)
  FUNC_17(VAR_8,
        "SELECT oid, rolname, rolsuper, rolinherit, "
        "rolcreaterole, rolcreatedb, "
        "rolcanlogin, rolconnlimit, rolpassword, "
        "rolvaliduntil, rolreplication, "
        "false as rolbypassrls, "
        "pg_catalog.shobj_description(oid, '%s') as rolcomment, "
        "rolname = current_user AS is_current_user "
        "FROM %s "
        "ORDER BY 2", VAR_5, VAR_5);
 else if (VAR_6 >= 80200)
  FUNC_17(VAR_8,
        "SELECT oid, rolname, rolsuper, rolinherit, "
        "rolcreaterole, rolcreatedb, "
        "rolcanlogin, rolconnlimit, rolpassword, "
        "rolvaliduntil, false as rolreplication, "
        "false as rolbypassrls, "
        "pg_catalog.shobj_description(oid, '%s') as rolcomment, "
        "rolname = current_user AS is_current_user "
        "FROM %s "
        "ORDER BY 2", VAR_5, VAR_5);
 else if (VAR_6 >= 80100)
  FUNC_17(VAR_8,
        "SELECT oid, rolname, rolsuper, rolinherit, "
        "rolcreaterole, rolcreatedb, "
        "rolcanlogin, rolconnlimit, rolpassword, "
        "rolvaliduntil, false as rolreplication, "
        "false as rolbypassrls, "
        "null as rolcomment, "
        "rolname = current_user AS is_current_user "
        "FROM %s "
        "ORDER BY 2", VAR_5);
 else
  FUNC_17(VAR_8,
        "SELECT 0 as oid, usename as rolname, "
        "usesuper as rolsuper, "
        "true as rolinherit, "
        "usesuper as rolcreaterole, "
        "usecreatedb as rolcreatedb, "
        "true as rolcanlogin, "
        "-1 as rolconnlimit, "
        "passwd as rolpassword, "
        "valuntil as rolvaliduntil, "
        "false as rolreplication, "
        "false as rolbypassrls, "
        "null as rolcomment, "
        "usename = current_user AS is_current_user "
        "FROM pg_shadow "
        "UNION ALL "
        "SELECT 0 as oid, groname as rolname, "
        "false as rolsuper, "
        "true as rolinherit, "
        "false as rolcreaterole, "
        "false as rolcreatedb, "
        "false as rolcanlogin, "
        "-1 as rolconnlimit, "
        "null::text as rolpassword, "
        "null::timestamptz as rolvaliduntil, "
        "false as rolreplication, "
        "false as rolbypassrls, "
        "null as rolcomment, "
        "false AS is_current_user "
        "FROM pg_group "
        "WHERE NOT EXISTS (SELECT 1 FROM pg_shadow "
        " WHERE usename = groname) "
        "ORDER BY 2");

 VAR_9 = FUNC_13(VAR_7, VAR_8->data);

 VAR_10 = FUNC_1(VAR_9, "oid");
 VAR_11 = FUNC_1(VAR_9, "rolname");
 VAR_12 = FUNC_1(VAR_9, "rolsuper");
 VAR_13 = FUNC_1(VAR_9, "rolinherit");
 VAR_14 = FUNC_1(VAR_9, "rolcreaterole");
 VAR_15 = FUNC_1(VAR_9, "rolcreatedb");
 VAR_16 = FUNC_1(VAR_9, "rolcanlogin");
 VAR_17 = FUNC_1(VAR_9, "rolconnlimit");
 VAR_18 = FUNC_1(VAR_9, "rolpassword");
 VAR_19 = FUNC_1(VAR_9, "rolvaliduntil");
 VAR_20 = FUNC_1(VAR_9, "rolreplication");
 VAR_21 = FUNC_1(VAR_9, "rolbypassrls");
 VAR_22 = FUNC_1(VAR_9, "rolcomment");
 VAR_23 = FUNC_1(VAR_9, "is_current_user");

 if (FUNC_4(VAR_9) > 0)
  FUNC_15(VAR_0, "--\n-- Roles\n--\n\n");

 for (VAR_24 = 0; VAR_24 < FUNC_4(VAR_9); VAR_24++)
 {
  const char *VAR_25;
  Oid VAR_26;

  VAR_26 = FUNC_8(FUNC_3(VAR_9, VAR_24, VAR_10));
  VAR_25 = FUNC_3(VAR_9, VAR_24, VAR_11);

  if (FUNC_20(VAR_25, "pg_", 3) == 0)
  {
   FUNC_16("role name starting with \"pg_\" skipped (%s)",
         VAR_25);
   continue;
  }

  FUNC_18(VAR_8);

  if (VAR_1)
  {
   FUNC_6(VAR_8, "\n-- For binary upgrade, must preserve pg_authid.oid\n");
   FUNC_5(VAR_8,
         "SELECT pg_catalog.binary_upgrade_set_next_pg_authid_oid('%u'::pg_catalog.oid);\n\n",
         VAR_26);
  }
  if (!VAR_1 ||
   FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_23), "f") == 0)
   FUNC_5(VAR_8, "CREATE ROLE %s;\n", FUNC_14(VAR_25));
  FUNC_5(VAR_8, "ALTER ROLE %s WITH", FUNC_14(VAR_25));

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_12), "t") == 0)
   FUNC_6(VAR_8, " SUPERUSER");
  else
   FUNC_6(VAR_8, " NOSUPERUSER");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_13), "t") == 0)
   FUNC_6(VAR_8, " INHERIT");
  else
   FUNC_6(VAR_8, " NOINHERIT");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_14), "t") == 0)
   FUNC_6(VAR_8, " CREATEROLE");
  else
   FUNC_6(VAR_8, " NOCREATEROLE");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_15), "t") == 0)
   FUNC_6(VAR_8, " CREATEDB");
  else
   FUNC_6(VAR_8, " NOCREATEDB");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_16), "t") == 0)
   FUNC_6(VAR_8, " LOGIN");
  else
   FUNC_6(VAR_8, " NOLOGIN");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_20), "t") == 0)
   FUNC_6(VAR_8, " REPLICATION");
  else
   FUNC_6(VAR_8, " NOREPLICATION");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_21), "t") == 0)
   FUNC_6(VAR_8, " BYPASSRLS");
  else
   FUNC_6(VAR_8, " NOBYPASSRLS");

  if (FUNC_19(FUNC_3(VAR_9, VAR_24, VAR_17), "-1") != 0)
   FUNC_5(VAR_8, " CONNECTION LIMIT %s",
         FUNC_3(VAR_9, VAR_24, VAR_17));


  if (!FUNC_2(VAR_9, VAR_24, VAR_18) && !VAR_3)
  {
   FUNC_6(VAR_8, " PASSWORD ");
   FUNC_7(VAR_8, FUNC_3(VAR_9, VAR_24, VAR_18), VAR_7);
  }

  if (!FUNC_2(VAR_9, VAR_24, VAR_19))
   FUNC_5(VAR_8, " VALID UNTIL '%s'",
         FUNC_3(VAR_9, VAR_24, VAR_19));

  FUNC_6(VAR_8, ";\n");

  if (!VAR_2 && !FUNC_2(VAR_9, VAR_24, VAR_22))
  {
   FUNC_5(VAR_8, "COMMENT ON ROLE %s IS ", FUNC_14(VAR_25));
   FUNC_7(VAR_8, FUNC_3(VAR_9, VAR_24, VAR_22), VAR_7);
   FUNC_6(VAR_8, ";\n");
  }

  if (!VAR_4 && VAR_6 >= 90200)
   FUNC_9(VAR_7, "pg_authid", VAR_26,
        "ROLE", VAR_25,
        VAR_8);

  FUNC_15(VAR_0, "%s", VAR_8->data);
 }






 for (VAR_24 = 0; VAR_24 < FUNC_4(VAR_9); VAR_24++)
  FUNC_12(VAR_7, FUNC_3(VAR_9, VAR_24, VAR_11));

 FUNC_0(VAR_9);

 FUNC_15(VAR_0, "\n\n");

 FUNC_11(VAR_8);
}
