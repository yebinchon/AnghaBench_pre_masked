
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sverbuf ;
struct TYPE_12__ {int translate_header; int const* translate_columns; void* n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_14__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (int const*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_13 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int * FUNC_14 (char const*,char) ;
 scalar_t__ FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (TYPE_2__*) ;

bool
FUNC_18(const char *VAR_1, const char *VAR_2, bool VAR_3, bool VAR_4)
{
 bool VAR_5 = FUNC_14(VAR_1, 'a') != ((void*)0);
 bool VAR_6 = FUNC_14(VAR_1, 'n') != ((void*)0);
 bool VAR_7 = FUNC_14(VAR_1, 'p') != ((void*)0);
 bool VAR_8 = FUNC_14(VAR_1, 't') != ((void*)0);
 bool VAR_9 = FUNC_14(VAR_1, 'w') != ((void*)0);
 bool VAR_10;
 PQExpBufferData VAR_11;
 PGresult *VAR_12;
 printQueryOpt VAR_13 = VAR_0.popt;
 static const bool VAR_14[] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0};


 static const bool VAR_15[] = {0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0};

 if (FUNC_15(VAR_1) != FUNC_16(VAR_1, "anptwS+"))
 {
  FUNC_9("\\df only takes [anptwS+] as options");
  return 1;
 }

 if (VAR_7 && VAR_0.sversion < 110000)
 {
  char VAR_16[32];

  FUNC_9("\\df does not take a \"%c\" option with server version %s",
      'p',
      FUNC_5(VAR_0.sversion, 0,
             VAR_16, sizeof(VAR_16)));
  return 1;
 }

 if (VAR_9 && VAR_0.sversion < 80400)
 {
  char VAR_17[32];

  FUNC_9("\\df does not take a \"%c\" option with server version %s",
      'w',
      FUNC_5(VAR_0.sversion, 0,
             VAR_17, sizeof(VAR_17)));
  return 1;
 }

 if (!VAR_5 && !VAR_6 && !VAR_7 && !VAR_8 && !VAR_9)
 {
  VAR_5 = VAR_6 = VAR_8 = 1;
  if (VAR_0.sversion >= 110000)
   VAR_7 = 1;
  if (VAR_0.sversion >= 80400)
   VAR_9 = 1;
 }

 FUNC_7(&VAR_11);

 FUNC_12(&VAR_11,
       "SELECT n.nspname as \"%s\",\n"
       "  p.proname as \"%s\",\n",
       FUNC_6("Schema"),
       FUNC_6("Name"));

 if (VAR_0.sversion >= 110000)
  FUNC_3(&VAR_11,
        "  pg_catalog.pg_get_function_result(p.oid) as \"%s\",\n"
        "  pg_catalog.pg_get_function_arguments(p.oid) as \"%s\",\n"
        " CASE p.prokind\n"
        "  WHEN 'a' THEN '%s'\n"
        "  WHEN 'w' THEN '%s'\n"
        "  WHEN 'p' THEN '%s'\n"
        "  ELSE '%s'\n"
        " END as \"%s\"",
        FUNC_6("Result data type"),
        FUNC_6("Argument data types"),

        FUNC_6("agg"),
        FUNC_6("window"),
        FUNC_6("proc"),
        FUNC_6("func"),
        FUNC_6("Type"));
 else if (VAR_0.sversion >= 80400)
  FUNC_3(&VAR_11,
        "  pg_catalog.pg_get_function_result(p.oid) as \"%s\",\n"
        "  pg_catalog.pg_get_function_arguments(p.oid) as \"%s\",\n"
        " CASE\n"
        "  WHEN p.proisagg THEN '%s'\n"
        "  WHEN p.proiswindow THEN '%s'\n"
        "  WHEN p.prorettype = 'pg_catalog.trigger'::pg_catalog.regtype THEN '%s'\n"
        "  ELSE '%s'\n"
        " END as \"%s\"",
        FUNC_6("Result data type"),
        FUNC_6("Argument data types"),

        FUNC_6("agg"),
        FUNC_6("window"),
        FUNC_6("trigger"),
        FUNC_6("func"),
        FUNC_6("Type"));
 else if (VAR_0.sversion >= 80100)
  FUNC_3(&VAR_11,
        "  CASE WHEN p.proretset THEN 'SETOF ' ELSE '' END ||\n"
        "  pg_catalog.format_type(p.prorettype, NULL) as \"%s\",\n"
        "  CASE WHEN proallargtypes IS NOT NULL THEN\n"
        "    pg_catalog.array_to_string(ARRAY(\n"
        "      SELECT\n"
        "        CASE\n"
        "          WHEN p.proargmodes[s.i] = 'i' THEN ''\n"
        "          WHEN p.proargmodes[s.i] = 'o' THEN 'OUT '\n"
        "          WHEN p.proargmodes[s.i] = 'b' THEN 'INOUT '\n"
        "          WHEN p.proargmodes[s.i] = 'v' THEN 'VARIADIC '\n"
        "        END ||\n"
        "        CASE\n"
        "          WHEN COALESCE(p.proargnames[s.i], '') = '' THEN ''\n"
        "          ELSE p.proargnames[s.i] || ' '\n"
        "        END ||\n"
        "        pg_catalog.format_type(p.proallargtypes[s.i], NULL)\n"
        "      FROM\n"
        "        pg_catalog.generate_series(1, pg_catalog.array_upper(p.proallargtypes, 1)) AS s(i)\n"
        "    ), ', ')\n"
        "  ELSE\n"
        "    pg_catalog.array_to_string(ARRAY(\n"
        "      SELECT\n"
        "        CASE\n"
        "          WHEN COALESCE(p.proargnames[s.i+1], '') = '' THEN ''\n"
        "          ELSE p.proargnames[s.i+1] || ' '\n"
        "          END ||\n"
        "        pg_catalog.format_type(p.proargtypes[s.i], NULL)\n"
        "      FROM\n"
        "        pg_catalog.generate_series(0, pg_catalog.array_upper(p.proargtypes, 1)) AS s(i)\n"
        "    ), ', ')\n"
        "  END AS \"%s\",\n"
        "  CASE\n"
        "    WHEN p.proisagg THEN '%s'\n"
        "    WHEN p.prorettype = 'pg_catalog.trigger'::pg_catalog.regtype THEN '%s'\n"
        "    ELSE '%s'\n"
        "  END AS \"%s\"",
        FUNC_6("Result data type"),
        FUNC_6("Argument data types"),

        FUNC_6("agg"),
        FUNC_6("trigger"),
        FUNC_6("func"),
        FUNC_6("Type"));
 else
  FUNC_3(&VAR_11,
        "  CASE WHEN p.proretset THEN 'SETOF ' ELSE '' END ||\n"
        "  pg_catalog.format_type(p.prorettype, NULL) as \"%s\",\n"
        "  pg_catalog.oidvectortypes(p.proargtypes) as \"%s\",\n"
        "  CASE\n"
        "    WHEN p.proisagg THEN '%s'\n"
        "    WHEN p.prorettype = 'pg_catalog.trigger'::pg_catalog.regtype THEN '%s'\n"
        "    ELSE '%s'\n"
        "  END AS \"%s\"",
        FUNC_6("Result data type"),
        FUNC_6("Argument data types"),

        FUNC_6("agg"),
        FUNC_6("trigger"),
        FUNC_6("func"),
        FUNC_6("Type"));

 if (VAR_3)
 {
  FUNC_3(&VAR_11,
        ",\n CASE\n"
        "  WHEN p.provolatile = 'i' THEN '%s'\n"
        "  WHEN p.provolatile = 's' THEN '%s'\n"
        "  WHEN p.provolatile = 'v' THEN '%s'\n"
        " END as \"%s\"",
        FUNC_6("immutable"),
        FUNC_6("stable"),
        FUNC_6("volatile"),
        FUNC_6("Volatility"));
  if (VAR_0.sversion >= 90600)
   FUNC_3(&VAR_11,
         ",\n CASE\n"
         "  WHEN p.proparallel = 'r' THEN '%s'\n"
         "  WHEN p.proparallel = 's' THEN '%s'\n"
         "  WHEN p.proparallel = 'u' THEN '%s'\n"
         " END as \"%s\"",
         FUNC_6("restricted"),
         FUNC_6("safe"),
         FUNC_6("unsafe"),
         FUNC_6("Parallel"));
  FUNC_3(&VAR_11,
        ",\n pg_catalog.pg_get_userbyid(p.proowner) as \"%s\""
        ",\n CASE WHEN prosecdef THEN '%s' ELSE '%s' END AS \"%s\"",
        FUNC_6("Owner"),
        FUNC_6("definer"),
        FUNC_6("invoker"),
        FUNC_6("Security"));
  FUNC_4(&VAR_11, ",\n ");
  FUNC_10(&VAR_11, "p.proacl");
  FUNC_3(&VAR_11,
        ",\n l.lanname as \"%s\""
        ",\n p.prosrc as \"%s\""
        ",\n pg_catalog.obj_description(p.oid, 'pg_proc') as \"%s\"",
        FUNC_6("Language"),
        FUNC_6("Source code"),
        FUNC_6("Description"));
 }

 FUNC_4(&VAR_11,
       "\nFROM pg_catalog.pg_proc p"
       "\n     LEFT JOIN pg_catalog.pg_namespace n ON n.oid = p.pronamespace\n");

 if (VAR_3)
  FUNC_4(&VAR_11,
        "     LEFT JOIN pg_catalog.pg_language l ON l.oid = p.prolang\n");

 VAR_10 = 0;


 if (VAR_6 && VAR_5 && VAR_7 && VAR_8 && VAR_9)
                    ;
 else if (VAR_6)
 {
  if (!VAR_5)
  {
   if (VAR_10)
    FUNC_4(&VAR_11, "      AND ");
   else
   {
    FUNC_4(&VAR_11, "WHERE ");
    VAR_10 = 1;
   }
   if (VAR_0.sversion >= 110000)
    FUNC_4(&VAR_11, "p.prokind <> 'a'\n");
   else
    FUNC_4(&VAR_11, "NOT p.proisagg\n");
  }
  if (!VAR_7 && VAR_0.sversion >= 110000)
  {
   if (VAR_10)
    FUNC_4(&VAR_11, "      AND ");
   else
   {
    FUNC_4(&VAR_11, "WHERE ");
    VAR_10 = 1;
   }
   FUNC_4(&VAR_11, "p.prokind <> 'p'\n");
  }
  if (!VAR_8)
  {
   if (VAR_10)
    FUNC_4(&VAR_11, "      AND ");
   else
   {
    FUNC_4(&VAR_11, "WHERE ");
    VAR_10 = 1;
   }
   FUNC_4(&VAR_11, "p.prorettype <> 'pg_catalog.trigger'::pg_catalog.regtype\n");
  }
  if (!VAR_9 && VAR_0.sversion >= 80400)
  {
   if (VAR_10)
    FUNC_4(&VAR_11, "      AND ");
   else
   {
    FUNC_4(&VAR_11, "WHERE ");
    VAR_10 = 1;
   }
   if (VAR_0.sversion >= 110000)
    FUNC_4(&VAR_11, "p.prokind <> 'w'\n");
   else
    FUNC_4(&VAR_11, "NOT p.proiswindow\n");
  }
 }
 else
 {
  bool VAR_18 = 0;

  FUNC_4(&VAR_11, "WHERE (\n       ");
  VAR_10 = 1;

  if (VAR_5)
  {
   if (VAR_0.sversion >= 110000)
    FUNC_4(&VAR_11, "p.prokind = 'a'\n");
   else
    FUNC_4(&VAR_11, "p.proisagg\n");
   VAR_18 = 1;
  }
  if (VAR_8)
  {
   if (VAR_18)
    FUNC_4(&VAR_11, "       OR ");
   FUNC_4(&VAR_11,
         "p.prorettype = 'pg_catalog.trigger'::pg_catalog.regtype\n");
   VAR_18 = 1;
  }
  if (VAR_7)
  {
   if (VAR_18)
    FUNC_4(&VAR_11, "       OR ");
   FUNC_4(&VAR_11, "p.prokind = 'p'\n");
   VAR_18 = 1;
  }
  if (VAR_9)
  {
   if (VAR_18)
    FUNC_4(&VAR_11, "       OR ");
   if (VAR_0.sversion >= 110000)
    FUNC_4(&VAR_11, "p.prokind = 'w'\n");
   else
    FUNC_4(&VAR_11, "p.proiswindow\n");
   VAR_18 = 1;
  }
  FUNC_4(&VAR_11, "      )\n");
 }

 FUNC_13(VAR_0.db, &VAR_11, VAR_2, VAR_10, 0,
        "n.nspname", "p.proname", ((void*)0),
        "pg_catalog.pg_function_is_visible(p.oid)");

 if (!VAR_4 && !VAR_2)
  FUNC_4(&VAR_11, "      AND n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_4(&VAR_11, "ORDER BY 1, 2, 4;");

 VAR_12 = FUNC_1(VAR_11.data);
 FUNC_17(&VAR_11);
 if (!VAR_12)
  return 0;

 VAR_13.nullPrint = ((void*)0);
 VAR_13.title = FUNC_2("List of functions");
 VAR_13.translate_header = 1;
 if (VAR_0.sversion >= 90600)
 {
  VAR_13.translate_columns = VAR_14;
  VAR_13.n_translate_columns = FUNC_8(VAR_14);
 }
 else
 {
  VAR_13.translate_columns = VAR_15;
  VAR_13.n_translate_columns = FUNC_8(VAR_15);
 }

 FUNC_11(VAR_12, &VAR_13, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_12);
 return 1;
}
