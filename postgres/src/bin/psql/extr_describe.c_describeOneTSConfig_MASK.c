
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int default_footer; } ;
struct TYPE_11__ {int translate_header; TYPE_1__ topt; int * footers; int title; int * nullPrint; } ;
typedef TYPE_2__ printQueryOpt ;
struct TYPE_13__ {int logfile; int queryFout; TYPE_2__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_3__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int ,char const*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_2__*,int ,int,int ) ;
 int FUNC_7 (TYPE_3__*,char*,int ,int ,char const*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_9(const char *VAR_1, const char *VAR_2, const char *VAR_3,
     const char *VAR_4, const char *VAR_5)
{
 PQExpBufferData VAR_6,
    VAR_7;
 PGresult *VAR_8;
 printQueryOpt VAR_9 = VAR_0.popt;

 FUNC_5(&VAR_6);

 FUNC_7(&VAR_6,
       "SELECT\n"
       "  ( SELECT t.alias FROM\n"
       "    pg_catalog.ts_token_type(c.cfgparser) AS t\n"
       "    WHERE t.tokid = m.maptokentype ) AS \"%s\",\n"
       "  pg_catalog.btrim(\n"
       "    ARRAY( SELECT mm.mapdict::pg_catalog.regdictionary\n"
       "           FROM pg_catalog.pg_ts_config_map AS mm\n"
       "           WHERE mm.mapcfg = m.mapcfg AND mm.maptokentype = m.maptokentype\n"
       "           ORDER BY mapcfg, maptokentype, mapseqno\n"
       "    ) :: pg_catalog.text,\n"
       "  '{}') AS \"%s\"\n"
       "FROM pg_catalog.pg_ts_config AS c, pg_catalog.pg_ts_config_map AS m\n"
       "WHERE c.oid = '%s' AND m.mapcfg = c.oid\n"
       "GROUP BY m.mapcfg, m.maptokentype, c.cfgparser\n"
       "ORDER BY 1;",
       FUNC_4("Token"),
       FUNC_4("Dictionaries"),
       VAR_1);

 VAR_8 = FUNC_1(VAR_6.data);
 FUNC_8(&VAR_6);
 if (!VAR_8)
  return 0;

 FUNC_5(&VAR_7);

 if (VAR_2)
  FUNC_3(&VAR_7, FUNC_2("Text search configuration \"%s.%s\""),
        VAR_2, VAR_3);
 else
  FUNC_3(&VAR_7, FUNC_2("Text search configuration \"%s\""),
        VAR_3);

 if (VAR_4)
  FUNC_3(&VAR_7, FUNC_2("\nParser: \"%s.%s\""),
        VAR_4, VAR_5);
 else
  FUNC_3(&VAR_7, FUNC_2("\nParser: \"%s\""),
        VAR_5);

 VAR_9.nullPrint = ((void*)0);
 VAR_9.title = VAR_7.data;
 VAR_9.footers = ((void*)0);
 VAR_9.topt.default_footer = 0;
 VAR_9.translate_header = 1;

 FUNC_6(VAR_8, &VAR_9, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_8(&VAR_7);

 FUNC_0(VAR_8);
 return 1;
}
