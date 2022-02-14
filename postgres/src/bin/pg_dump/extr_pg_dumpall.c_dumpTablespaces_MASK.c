
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int *,int *,char*,char*,char*,char*,char*,int,TYPE_1__*) ;
 int FUNC_9 (int *,char*,int ,char*,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int *,char*) ;
 int FUNC_13 (int) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_17 (char*,char*,char*) ;
 char* FUNC_18 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_19(PGconn *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 if (VAR_3 >= 90600)
  VAR_6 = FUNC_12(VAR_5, "SELECT oid, spcname, "
         "pg_catalog.pg_get_userbyid(spcowner) AS spcowner, "
         "pg_catalog.pg_tablespace_location(oid), "
         "(SELECT array_agg(acl ORDER BY row_n) FROM "
         "  (SELECT acl, row_n FROM "
         "     unnest(coalesce(spcacl,acldefault('t',spcowner))) "
         "     WITH ORDINALITY AS perm(acl,row_n) "
         "   WHERE NOT EXISTS ( "
         "     SELECT 1 "
         "     FROM unnest(acldefault('t',spcowner)) "
         "       AS init(init_acl) "
         "     WHERE acl = init_acl)) AS spcacls) "
         " AS spcacl, "
         "(SELECT array_agg(acl ORDER BY row_n) FROM "
         "  (SELECT acl, row_n FROM "
         "     unnest(acldefault('t',spcowner)) "
         "     WITH ORDINALITY AS initp(acl,row_n) "
         "   WHERE NOT EXISTS ( "
         "     SELECT 1 "
         "     FROM unnest(coalesce(spcacl,acldefault('t',spcowner))) "
         "       AS permp(orig_acl) "
         "     WHERE acl = orig_acl)) AS rspcacls) "
         " AS rspcacl, "
         "array_to_string(spcoptions, ', '),"
         "pg_catalog.shobj_description(oid, 'pg_tablespace') "
         "FROM pg_catalog.pg_tablespace "
         "WHERE spcname !~ '^pg_' "
         "ORDER BY 1");
 else if (VAR_3 >= 90200)
  VAR_6 = FUNC_12(VAR_5, "SELECT oid, spcname, "
         "pg_catalog.pg_get_userbyid(spcowner) AS spcowner, "
         "pg_catalog.pg_tablespace_location(oid), "
         "spcacl, '' as rspcacl, "
         "array_to_string(spcoptions, ', '),"
         "pg_catalog.shobj_description(oid, 'pg_tablespace') "
         "FROM pg_catalog.pg_tablespace "
         "WHERE spcname !~ '^pg_' "
         "ORDER BY 1");
 else if (VAR_3 >= 90000)
  VAR_6 = FUNC_12(VAR_5, "SELECT oid, spcname, "
         "pg_catalog.pg_get_userbyid(spcowner) AS spcowner, "
         "spclocation, spcacl, '' as rspcacl, "
         "array_to_string(spcoptions, ', '),"
         "pg_catalog.shobj_description(oid, 'pg_tablespace') "
         "FROM pg_catalog.pg_tablespace "
         "WHERE spcname !~ '^pg_' "
         "ORDER BY 1");
 else if (VAR_3 >= 80200)
  VAR_6 = FUNC_12(VAR_5, "SELECT oid, spcname, "
         "pg_catalog.pg_get_userbyid(spcowner) AS spcowner, "
         "spclocation, spcacl, '' as rspcacl, null, "
         "pg_catalog.shobj_description(oid, 'pg_tablespace') "
         "FROM pg_catalog.pg_tablespace "
         "WHERE spcname !~ '^pg_' "
         "ORDER BY 1");
 else
  VAR_6 = FUNC_12(VAR_5, "SELECT oid, spcname, "
         "pg_catalog.pg_get_userbyid(spcowner) AS spcowner, "
         "spclocation, spcacl, '' as rspcacl, "
         "null, null "
         "FROM pg_catalog.pg_tablespace "
         "WHERE spcname !~ '^pg_' "
         "ORDER BY 1");

 if (FUNC_3(VAR_6) > 0)
  FUNC_15(VAR_0, "--\n-- Tablespaces\n--\n\n");

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_6); VAR_7++)
 {
  PQExpBuffer VAR_8 = FUNC_10();
  Oid VAR_9 = FUNC_7(FUNC_2(VAR_6, VAR_7, 0));
  char *VAR_10 = FUNC_2(VAR_6, VAR_7, 1);
  char *VAR_11 = FUNC_2(VAR_6, VAR_7, 2);
  char *VAR_12 = FUNC_2(VAR_6, VAR_7, 3);
  char *VAR_13 = FUNC_2(VAR_6, VAR_7, 4);
  char *VAR_14 = FUNC_2(VAR_6, VAR_7, 5);
  char *VAR_15 = FUNC_2(VAR_6, VAR_7, 6);
  char *VAR_16 = FUNC_2(VAR_6, VAR_7, 7);
  char *VAR_17;


  VAR_17 = FUNC_18(FUNC_14(VAR_10));

  FUNC_4(VAR_8, "CREATE TABLESPACE %s", VAR_17);
  FUNC_4(VAR_8, " OWNER %s", FUNC_14(VAR_11));

  FUNC_5(VAR_8, " LOCATION ");
  FUNC_6(VAR_8, VAR_12, VAR_5);
  FUNC_5(VAR_8, ";\n");

  if (VAR_15 && VAR_15[0] != '\0')
   FUNC_4(VAR_8, "ALTER TABLESPACE %s SET (%s);\n",
         VAR_17, VAR_15);

  if (!VAR_4 &&
   !FUNC_8(VAR_17, ((void*)0), ((void*)0), "TABLESPACE",
         VAR_13, VAR_14,
         VAR_11, "", VAR_3, VAR_8))
  {
   FUNC_17("could not parse ACL list (%s) for tablespace \"%s\"",
       VAR_13, VAR_10);
   FUNC_1(VAR_5);
   FUNC_13(1);
  }

  if (!VAR_1 && VAR_16 && VAR_16[0] != '\0')
  {
   FUNC_4(VAR_8, "COMMENT ON TABLESPACE %s IS ", VAR_17);
   FUNC_6(VAR_8, VAR_16, VAR_5);
   FUNC_5(VAR_8, ";\n");
  }

  if (!VAR_2 && VAR_3 >= 90200)
   FUNC_9(VAR_5, "pg_tablespace", VAR_9,
        "TABLESPACE", VAR_10,
        VAR_8);

  FUNC_15(VAR_0, "%s", VAR_8->data);

  FUNC_16(VAR_17);
  FUNC_11(VAR_8);
 }

 FUNC_0(VAR_6);
 FUNC_15(VAR_0, "\n\n");
}
