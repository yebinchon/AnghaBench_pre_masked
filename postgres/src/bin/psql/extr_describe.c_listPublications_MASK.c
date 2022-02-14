
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


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ,TYPE_2__*,char const*,int,int,int *,char*,int *,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(const char *VAR_1)
{
 PQExpBufferData VAR_2;
 PGresult *VAR_3;
 printQueryOpt VAR_4 = VAR_0.popt;
 static const bool VAR_5[] = {0, 0, 0, 0, 0, 0, 0};

 if (VAR_0.sversion < 100000)
 {
  char VAR_6[32];

  FUNC_9("The server (version %s) does not support publications.",
      FUNC_5(VAR_0.sversion, 0,
             VAR_6, sizeof(VAR_6)));
  return 1;
 }

 FUNC_7(&VAR_2);

 FUNC_11(&VAR_2,
       "SELECT pubname AS \"%s\",\n"
       "  pg_catalog.pg_get_userbyid(pubowner) AS \"%s\",\n"
       "  puballtables AS \"%s\",\n"
       "  pubinsert AS \"%s\",\n"
       "  pubupdate AS \"%s\",\n"
       "  pubdelete AS \"%s\"",
       FUNC_6("Name"),
       FUNC_6("Owner"),
       FUNC_6("All tables"),
       FUNC_6("Inserts"),
       FUNC_6("Updates"),
       FUNC_6("Deletes"));
 if (VAR_0.sversion >= 110000)
  FUNC_3(&VAR_2,
        ",\n  pubtruncate AS \"%s\"",
        FUNC_6("Truncates"));

 FUNC_4(&VAR_2,
       "\nFROM pg_catalog.pg_publication\n");

 FUNC_12(VAR_0.db, &VAR_2, VAR_1, 0, 0,
        ((void*)0), "pubname", ((void*)0),
        ((void*)0));

 FUNC_4(&VAR_2, "ORDER BY 1;");

 VAR_3 = FUNC_1(VAR_2.data);
 FUNC_13(&VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4.nullPrint = ((void*)0);
 VAR_4.title = FUNC_2("List of publications");
 VAR_4.translate_header = 1;
 VAR_4.translate_columns = VAR_5;
 VAR_4.n_translate_columns = FUNC_8(VAR_5);

 FUNC_10(VAR_3, &VAR_4, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_3);

 return 1;
}
