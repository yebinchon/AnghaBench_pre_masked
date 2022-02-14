
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int query ;
struct TYPE_5__ {int major_version; } ;
struct TYPE_4__ {int num_old_tablespaces; char** old_tablespaces; } ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_8 (int *,char*,char*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,char*,...) ;
 int FUNC_12 (char*,int,char*,char*) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15(void)
{
 PGconn *VAR_6 = FUNC_7(&VAR_4, "template1");
 PGresult *VAR_7;
 int VAR_8;
 int VAR_9;
 char VAR_10[VAR_2];

 FUNC_12(VAR_10, sizeof(VAR_10),
    "SELECT	%s "
    "FROM	pg_catalog.pg_tablespace "
    "WHERE	spcname != 'pg_default' AND "
    "		spcname != 'pg_global'",

    (FUNC_0(VAR_4.major_version) <= 901) ?
    "spclocation" : "pg_catalog.pg_tablespace_location(oid) AS spclocation");

 VAR_7 = FUNC_8(VAR_6, "%s", VAR_10);

 if ((VAR_5.num_old_tablespaces = FUNC_5(VAR_7)) != 0)
  VAR_5.old_tablespaces = (char **) FUNC_9(
               VAR_5.num_old_tablespaces * sizeof(char *));
 else
  VAR_5.old_tablespaces = ((void*)0);

 VAR_9 = FUNC_3(VAR_7, "spclocation");

 for (VAR_8 = 0; VAR_8 < VAR_5.num_old_tablespaces; VAR_8++)
 {
  struct stat VAR_11;

  VAR_5.old_tablespaces[VAR_8] = FUNC_10(
             FUNC_4(VAR_7, VAR_8, VAR_9));
  if (FUNC_13(VAR_5.old_tablespaces[VAR_8], &VAR_11) != 0)
  {
   if (VAR_3 == VAR_0)
    FUNC_11(VAR_1,
         "tablespace directory \"%s\" does not exist\n",
         VAR_5.old_tablespaces[VAR_8]);
   else
    FUNC_11(VAR_1,
         "could not stat tablespace directory \"%s\": %s\n",
         VAR_5.old_tablespaces[VAR_8], FUNC_14(VAR_3));
  }
  if (!FUNC_6(VAR_11.st_mode))
   FUNC_11(VAR_1,
        "tablespace path \"%s\" is not a directory\n",
        VAR_5.old_tablespaces[VAR_8]);
 }

 FUNC_1(VAR_7);

 FUNC_2(VAR_6);

 return;
}
