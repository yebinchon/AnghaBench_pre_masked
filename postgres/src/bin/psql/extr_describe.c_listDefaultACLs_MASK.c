
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_11__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int,int,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,char*,...) ;
 int FUNC_12 (int ,TYPE_2__*,char const*,int,int,int *,char*,char*,int *) ;
 TYPE_4__ VAR_5 ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(const char *VAR_6)
{
 PQExpBufferData VAR_7;
 PGresult *VAR_8;
 printQueryOpt VAR_9 = VAR_5.popt;
 static const bool VAR_10[] = {0, 0, 1, 0};

 if (VAR_5.sversion < 90000)
 {
  char VAR_11[32];

  FUNC_8("The server (version %s) does not support altering default privileges.",
      FUNC_4(VAR_5.sversion, 0,
             VAR_11, sizeof(VAR_11)));
  return 1;
 }

 FUNC_6(&VAR_7);

 FUNC_11(&VAR_7,
       "SELECT pg_catalog.pg_get_userbyid(d.defaclrole) AS \"%s\",\n"
       "  n.nspname AS \"%s\",\n"
       "  CASE d.defaclobjtype WHEN '%c' THEN '%s' WHEN '%c' THEN '%s' WHEN '%c' THEN '%s' WHEN '%c' THEN '%s' WHEN '%c' THEN '%s' END AS \"%s\",\n"
       "  ",
       FUNC_5("Owner"),
       FUNC_5("Schema"),
       VAR_2,
       FUNC_5("table"),
       VAR_3,
       FUNC_5("sequence"),
       VAR_0,
       FUNC_5("function"),
       VAR_4,
       FUNC_5("type"),
       VAR_1,
       FUNC_5("schema"),
       FUNC_5("Type"));

 FUNC_9(&VAR_7, "d.defaclacl");

 FUNC_3(&VAR_7, "\nFROM pg_catalog.pg_default_acl d\n"
       "     LEFT JOIN pg_catalog.pg_namespace n ON n.oid = d.defaclnamespace\n");

 FUNC_12(VAR_5.db, &VAR_7, VAR_6, 0, 0,
        ((void*)0),
        "n.nspname",
        "pg_catalog.pg_get_userbyid(d.defaclrole)",
        ((void*)0));

 FUNC_3(&VAR_7, "ORDER BY 1, 2, 3;");

 VAR_8 = FUNC_1(VAR_7.data);
 if (!VAR_8)
 {
  FUNC_13(&VAR_7);
  return 0;
 }

 VAR_9.nullPrint = ((void*)0);
 FUNC_11(&VAR_7, FUNC_2("Default access privileges"));
 VAR_9.title = VAR_7.data;
 VAR_9.translate_header = 1;
 VAR_9.translate_columns = VAR_10;
 VAR_9.n_translate_columns = FUNC_7(VAR_10);

 FUNC_10(VAR_8, &VAR_9, VAR_5.queryFout, 0, VAR_5.logfile);

 FUNC_13(&VAR_7);
 FUNC_0(VAR_8);
 return 1;
}
