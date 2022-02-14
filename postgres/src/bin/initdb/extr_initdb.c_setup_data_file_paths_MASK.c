
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int ) ;
 char* VAR_7 ;
 int FUNC_2 (int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_3 (char**,char*) ;
 char* VAR_12 ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;

void
FUNC_4(void)
{
 FUNC_3(&VAR_2, "postgres.bki");
 FUNC_3(&VAR_5, "postgres.description");
 FUNC_3(&VAR_13, "postgres.shdescription");
 FUNC_3(&VAR_8, "pg_hba.conf.sample");
 FUNC_3(&VAR_9, "pg_ident.conf.sample");
 FUNC_3(&VAR_3, "postgresql.conf.sample");
 FUNC_3(&VAR_6, "snowball_create.sql");
 FUNC_3(&VAR_10, "information_schema.sql");
 FUNC_3(&VAR_7, "sql_features.txt");
 FUNC_3(&VAR_16, "system_views.sql");

 if (VAR_14 || VAR_4)
 {
  FUNC_2(VAR_15,
    "VERSION=%s\n"
    "PGDATA=%s\nshare_path=%s\nPGPATH=%s\n"
    "POSTGRES_SUPERUSERNAME=%s\nPOSTGRES_BKI=%s\n"
    "POSTGRES_DESCR=%s\nPOSTGRES_SHDESCR=%s\n"
    "POSTGRESQL_CONF_SAMPLE=%s\n"
    "PG_HBA_SAMPLE=%s\nPG_IDENT_SAMPLE=%s\n",
    VAR_0,
    VAR_11, VAR_12, VAR_1,
    VAR_17, VAR_2,
    VAR_5, VAR_13,
    VAR_3,
    VAR_8, VAR_9);
  if (VAR_14)
   FUNC_1(0);
 }

 FUNC_0(VAR_2);
 FUNC_0(VAR_5);
 FUNC_0(VAR_13);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_3);
 FUNC_0(VAR_6);
 FUNC_0(VAR_10);
 FUNC_0(VAR_7);
 FUNC_0(VAR_16);
}
