
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_13__ {TYPE_1__ dbarr; } ;
struct TYPE_12__ {int db_name; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;
typedef TYPE_3__ DbInfo ;
typedef TYPE_4__ ClusterInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int *,char*,char*,char*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_2__*) ;

void
FUNC_21(ClusterInfo *VAR_2, bool VAR_3)
{
 int VAR_4;
 FILE *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 char *VAR_7 = "reindex_hash.sql";

 FUNC_16("Checking for hash indexes");

 for (VAR_4 = 0; VAR_4 < VAR_2->dbarr.ndbs; VAR_4++)
 {
  PGresult *VAR_8;
  bool VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  int VAR_12,
     VAR_13;
  DbInfo *VAR_14 = &VAR_2->dbarr.dbs[VAR_4];
  PGconn *VAR_15 = FUNC_7(VAR_2, VAR_14->db_name);


  VAR_8 = FUNC_8(VAR_15,
        "SELECT n.nspname, c.relname "
        "FROM	pg_catalog.pg_class c, "
        "		pg_catalog.pg_index i, "
        "		pg_catalog.pg_am a, "
        "		pg_catalog.pg_namespace n "
        "WHERE	i.indexrelid = c.oid AND "
        "		c.relam = a.oid AND "
        "		c.relnamespace = n.oid AND "
        "		a.amname = 'hash'"
   );

  VAR_10 = FUNC_4(VAR_8);
  VAR_12 = FUNC_2(VAR_8, "nspname");
  VAR_13 = FUNC_2(VAR_8, "relname");
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   VAR_6 = 1;
   if (!VAR_3)
   {
    if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_10(VAR_7, "w")) == ((void*)0))
     FUNC_14("could not open file \"%s\": %s\n", VAR_7,
        FUNC_19(VAR_1));
    if (!VAR_9)
    {
     PQExpBufferData VAR_16;

     FUNC_13(&VAR_16);
     FUNC_5(&VAR_16, VAR_14->db_name);
     FUNC_12(VAR_16.data, VAR_5);
     FUNC_20(&VAR_16);
     VAR_9 = 1;
    }
    FUNC_11(VAR_5, "REINDEX INDEX %s.%s;\n",
      FUNC_17(FUNC_3(VAR_8, VAR_11, VAR_12)),
      FUNC_17(FUNC_3(VAR_8, VAR_11, VAR_13)));
   }
  }

  FUNC_0(VAR_8);

  if (!VAR_3 && VAR_9)
  {

   FUNC_0(FUNC_8(VAR_15,
           "UPDATE pg_catalog.pg_index i "
           "SET	indisvalid = false "
           "FROM	pg_catalog.pg_class c, "
           "		pg_catalog.pg_am a, "
           "		pg_catalog.pg_namespace n "
           "WHERE	i.indexrelid = c.oid AND "
           "		c.relam = a.oid AND "
           "		c.relnamespace = n.oid AND "
           "		a.amname = 'hash'"));
  }

  FUNC_1(VAR_15);
 }

 if (VAR_5)
  FUNC_9(VAR_5);

 if (VAR_6)
 {
  FUNC_18(VAR_0, "warning");
  if (VAR_3)
   FUNC_15(VAR_0, "\n"
       "Your installation contains hash indexes.  These indexes have different\n"
       "internal formats between your old and new clusters, so they must be\n"
       "reindexed with the REINDEX command.  After upgrading, you will be given\n"
       "REINDEX instructions.\n\n");
  else
   FUNC_15(VAR_0, "\n"
       "Your installation contains hash indexes.  These indexes have different\n"
       "internal formats between your old and new clusters, so they must be\n"
       "reindexed with the REINDEX command.  The file\n"
       "    %s\n"
       "when executed by psql by the database superuser will recreate all invalid\n"
       "indexes; until then, none of these indexes will be used.\n\n",
       VAR_7);
 }
 else
  FUNC_6();
}
