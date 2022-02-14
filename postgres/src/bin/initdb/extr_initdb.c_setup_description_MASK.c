
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_2)
{
 FUNC_1("CREATE TEMP TABLE tmp_pg_description ( "
    "	objoid oid, "
    "	classname name, "
    "	objsubid int4, "
    "	description text);\n\n");

 FUNC_0("COPY tmp_pg_description FROM E'%s';\n\n",
       FUNC_2(VAR_0));

 FUNC_1("INSERT INTO pg_description "
    " SELECT t.objoid, c.oid, t.objsubid, t.description "
    "  FROM tmp_pg_description t, pg_class c "
    "    WHERE c.relname = t.classname;\n\n");

 FUNC_1("CREATE TEMP TABLE tmp_pg_shdescription ( "
    " objoid oid, "
    " classname name, "
    " description text);\n\n");

 FUNC_0("COPY tmp_pg_shdescription FROM E'%s';\n\n",
       FUNC_2(VAR_1));

 FUNC_1("INSERT INTO pg_shdescription "
    " SELECT t.objoid, c.oid, t.description "
    "  FROM tmp_pg_shdescription t, pg_class c "
    "   WHERE c.relname = t.classname;\n\n");


 FUNC_1("WITH funcdescs AS ( "
    "SELECT p.oid as p_oid, o.oid as o_oid, oprname "
    "FROM pg_proc p JOIN pg_operator o ON oprcode = p.oid ) "
    "INSERT INTO pg_description "
    "  SELECT p_oid, 'pg_proc'::regclass, 0, "
    "    'implementation of ' || oprname || ' operator' "
    "  FROM funcdescs "
    "  WHERE NOT EXISTS (SELECT 1 FROM pg_description "
    "   WHERE objoid = p_oid AND classoid = 'pg_proc'::regclass) "
    "  AND NOT EXISTS (SELECT 1 FROM pg_description "
    "   WHERE objoid = o_oid AND classoid = 'pg_operator'::regclass"
    "         AND description LIKE 'deprecated%');\n\n");





 FUNC_1("DROP TABLE tmp_pg_description;\n\n");
 FUNC_1("DROP TABLE tmp_pg_shdescription;\n\n");
}
