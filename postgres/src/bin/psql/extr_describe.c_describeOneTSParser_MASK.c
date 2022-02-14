
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int default_footer; } ;
struct TYPE_10__ {int translate_header; int const* translate_columns; scalar_t__ n_translate_columns; TYPE_1__ topt; int * footers; int title; int * nullPrint; } ;
typedef TYPE_2__ printQueryOpt ;
struct TYPE_12__ {int logfile; int queryFout; TYPE_2__ popt; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_3__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,TYPE_2__*,int ,int,int ) ;
 int FUNC_7 (TYPE_3__*,char*,char const*,...) ;
 TYPE_5__ VAR_0 ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_9(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 PQExpBufferData VAR_6;
 printQueryOpt VAR_7 = VAR_0.popt;
 static const bool VAR_8[] = {1, 0, 0};

 FUNC_4(&VAR_4);

 FUNC_7(&VAR_4,
       "SELECT '%s' AS \"%s\",\n"
       "   p.prsstart::pg_catalog.regproc AS \"%s\",\n"
       "   pg_catalog.obj_description(p.prsstart, 'pg_proc') as \"%s\"\n"
       " FROM pg_catalog.pg_ts_parser p\n"
       " WHERE p.oid = '%s'\n"
       "UNION ALL\n"
       "SELECT '%s',\n"
       "   p.prstoken::pg_catalog.regproc,\n"
       "   pg_catalog.obj_description(p.prstoken, 'pg_proc')\n"
       " FROM pg_catalog.pg_ts_parser p\n"
       " WHERE p.oid = '%s'\n"
       "UNION ALL\n"
       "SELECT '%s',\n"
       "   p.prsend::pg_catalog.regproc,\n"
       "   pg_catalog.obj_description(p.prsend, 'pg_proc')\n"
       " FROM pg_catalog.pg_ts_parser p\n"
       " WHERE p.oid = '%s'\n"
       "UNION ALL\n"
       "SELECT '%s',\n"
       "   p.prsheadline::pg_catalog.regproc,\n"
       "   pg_catalog.obj_description(p.prsheadline, 'pg_proc')\n"
       " FROM pg_catalog.pg_ts_parser p\n"
       " WHERE p.oid = '%s'\n"
       "UNION ALL\n"
       "SELECT '%s',\n"
       "   p.prslextype::pg_catalog.regproc,\n"
       "   pg_catalog.obj_description(p.prslextype, 'pg_proc')\n"
       " FROM pg_catalog.pg_ts_parser p\n"
       " WHERE p.oid = '%s';",
       FUNC_3("Start parse"),
       FUNC_3("Method"),
       FUNC_3("Function"),
       FUNC_3("Description"),
       VAR_1,
       FUNC_3("Get next token"),
       VAR_1,
       FUNC_3("End parse"),
       VAR_1,
       FUNC_3("Get headline"),
       VAR_1,
       FUNC_3("Get token types"),
       VAR_1);

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_8(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_7.nullPrint = ((void*)0);
 FUNC_4(&VAR_6);
 if (VAR_2)
  FUNC_7(&VAR_6, FUNC_2("Text search parser \"%s.%s\""),
        VAR_2, VAR_3);
 else
  FUNC_7(&VAR_6, FUNC_2("Text search parser \"%s\""), VAR_3);
 VAR_7.title = VAR_6.data;
 VAR_7.footers = ((void*)0);
 VAR_7.topt.default_footer = 0;
 VAR_7.translate_header = 1;
 VAR_7.translate_columns = VAR_8;
 VAR_7.n_translate_columns = FUNC_5(VAR_8);

 FUNC_6(VAR_5, &VAR_7, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);

 FUNC_4(&VAR_4);

 FUNC_7(&VAR_4,
       "SELECT t.alias as \"%s\",\n"
       "  t.description as \"%s\"\n"
       "FROM pg_catalog.ts_token_type( '%s'::pg_catalog.oid ) as t\n"
       "ORDER BY 1;",
       FUNC_3("Token name"),
       FUNC_3("Description"),
       VAR_1);

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_8(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_7.nullPrint = ((void*)0);
 if (VAR_2)
  FUNC_7(&VAR_6, FUNC_2("Token types for parser \"%s.%s\""),
        VAR_2, VAR_3);
 else
  FUNC_7(&VAR_6, FUNC_2("Token types for parser \"%s\""), VAR_3);
 VAR_7.title = VAR_6.data;
 VAR_7.footers = ((void*)0);
 VAR_7.topt.default_footer = 1;
 VAR_7.translate_header = 1;
 VAR_7.translate_columns = ((void*)0);
 VAR_7.n_translate_columns = 0;

 FUNC_6(VAR_5, &VAR_7, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_8(&VAR_6);
 FUNC_0(VAR_5);
 return 1;
}
