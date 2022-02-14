
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(PQExpBuffer VAR_0, PQExpBuffer VAR_1,
    PQExpBuffer VAR_2, PQExpBuffer VAR_3,
    const char *VAR_4, const char *VAR_5,
    const char *VAR_6, bool VAR_7)
{
 FUNC_0(VAR_0,
       "(SELECT pg_catalog.array_agg(acl ORDER BY row_n) FROM "
       "(SELECT acl, row_n FROM "
       "pg_catalog.unnest(coalesce(%s,pg_catalog.acldefault(%s,%s))) "
       "WITH ORDINALITY AS perm(acl,row_n) "
       "WHERE NOT EXISTS ( "
       "SELECT 1 FROM "
       "pg_catalog.unnest(coalesce(pip.initprivs,pg_catalog.acldefault(%s,%s))) "
       "AS init(init_acl) WHERE acl = init_acl)) as foo)",
       VAR_4,
       VAR_6,
       VAR_5,
       VAR_6,
       VAR_5);

 FUNC_0(VAR_1,
       "(SELECT pg_catalog.array_agg(acl ORDER BY row_n) FROM "
       "(SELECT acl, row_n FROM "
       "pg_catalog.unnest(coalesce(pip.initprivs,pg_catalog.acldefault(%s,%s))) "
       "WITH ORDINALITY AS initp(acl,row_n) "
       "WHERE NOT EXISTS ( "
       "SELECT 1 FROM "
       "pg_catalog.unnest(coalesce(%s,pg_catalog.acldefault(%s,%s))) "
       "AS permp(orig_acl) WHERE acl = orig_acl)) as foo)",
       VAR_6,
       VAR_5,
       VAR_4,
       VAR_6,
       VAR_5);
 if (VAR_7)
 {
  FUNC_0(VAR_2,
        "CASE WHEN privtype = 'e' THEN "
        "(SELECT pg_catalog.array_agg(acl ORDER BY row_n) FROM "
        "(SELECT acl, row_n FROM pg_catalog.unnest(pip.initprivs) "
        "WITH ORDINALITY AS initp(acl,row_n) "
        "WHERE NOT EXISTS ( "
        "SELECT 1 FROM "
        "pg_catalog.unnest(pg_catalog.acldefault(%s,%s)) "
        "AS privm(orig_acl) WHERE acl = orig_acl)) as foo) END",
        VAR_6,
        VAR_5);

  FUNC_0(VAR_3,
        "CASE WHEN privtype = 'e' THEN "
        "(SELECT pg_catalog.array_agg(acl) FROM "
        "(SELECT acl, row_n FROM "
        "pg_catalog.unnest(pg_catalog.acldefault(%s,%s)) "
        "WITH ORDINALITY AS privp(acl,row_n) "
        "WHERE NOT EXISTS ( "
        "SELECT 1 FROM pg_catalog.unnest(pip.initprivs) "
        "AS initp(init_acl) WHERE acl = init_acl)) as foo) END",
        VAR_6,
        VAR_5);
 }
 else
 {
  FUNC_0(VAR_2, "NULL");
  FUNC_0(VAR_3, "NULL");
 }
}
