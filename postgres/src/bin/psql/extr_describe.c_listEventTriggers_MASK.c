
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int translate_header; int const* translate_columns; int n_translate_columns; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_13__ {int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 printQueryOpt VAR_5 = VAR_0.popt;
 static const bool VAR_6[] =
 {0, 0, 0, 1, 0, 0, 0};

 FUNC_6(&VAR_3);

 FUNC_9(&VAR_3,
       "SELECT evtname as \"%s\", "
       "evtevent as \"%s\", "
       "pg_catalog.pg_get_userbyid(e.evtowner) as \"%s\",\n"
       " case evtenabled when 'O' then '%s'"
       "  when 'R' then '%s'"
       "  when 'A' then '%s'"
       "  when 'D' then '%s' end as \"%s\",\n"
       " e.evtfoid::pg_catalog.regproc as \"%s\", "
       "pg_catalog.array_to_string(array(select x"
       " from pg_catalog.unnest(evttags) as t(x)), ', ') as \"%s\"",
       FUNC_5("Name"),
       FUNC_5("Event"),
       FUNC_5("Owner"),
       FUNC_5("enabled"),
       FUNC_5("replica"),
       FUNC_5("always"),
       FUNC_5("disabled"),
       FUNC_5("Enabled"),
       FUNC_5("Function"),
       FUNC_5("Tags"));
 if (VAR_2)
  FUNC_3(&VAR_3,
        ",\npg_catalog.obj_description(e.oid, 'pg_event_trigger') as \"%s\"",
        FUNC_5("Description"));
 FUNC_4(&VAR_3,
       "\nFROM pg_catalog.pg_event_trigger e ");

 FUNC_10(VAR_0.db, &VAR_3, VAR_1, 0, 0,
        ((void*)0), "evtname", ((void*)0), ((void*)0));

 FUNC_4(&VAR_3, "ORDER BY 1");

 VAR_4 = FUNC_1(VAR_3.data);
 FUNC_11(&VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5.nullPrint = ((void*)0);
 VAR_5.title = FUNC_2("List of event triggers");
 VAR_5.translate_header = 1;
 VAR_5.translate_columns = VAR_6;
 VAR_5.n_translate_columns = FUNC_7(VAR_6);

 FUNC_8(VAR_4, &VAR_5, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_4);
 return 1;
}
