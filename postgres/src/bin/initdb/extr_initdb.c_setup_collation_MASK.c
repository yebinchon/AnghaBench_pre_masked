
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_3)
{





 FUNC_0("INSERT INTO pg_collation (oid, collname, collnamespace, collowner, collprovider, collisdeterministic, collencoding, collcollate, collctype)"
       "VALUES (pg_nextoid('pg_catalog.pg_collation', 'oid', 'pg_catalog.pg_collation_oid_index'), 'ucs_basic', 'pg_catalog'::regnamespace, %u, '%c', true, %d, 'C', 'C');\n\n",
       VAR_0, VAR_1, VAR_2);


 FUNC_1("SELECT pg_import_system_collations('pg_catalog');\n\n");
}
