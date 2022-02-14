
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_5__ {int bindir; int bin_version; } ;
typedef TYPE_1__ ClusterInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,char*,int ,...) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(ClusterInfo *VAR_3)
{
 struct stat VAR_4;


 if (FUNC_4(VAR_3->bindir, &VAR_4) != 0)
  FUNC_3(VAR_0, "check for \"%s\" failed: %s\n",
       VAR_3->bindir, FUNC_5(VAR_1));
 else if (!FUNC_1(VAR_4.st_mode))
  FUNC_3(VAR_0, "\"%s\" is not a directory\n",
       VAR_3->bindir);

 FUNC_6(VAR_3->bindir, "postgres");
 FUNC_6(VAR_3->bindir, "pg_controldata");
 FUNC_6(VAR_3->bindir, "pg_ctl");






 FUNC_2(VAR_3);


 if (FUNC_0(VAR_3->bin_version) < 1000)
  FUNC_6(VAR_3->bindir, "pg_resetxlog");
 else
  FUNC_6(VAR_3->bindir, "pg_resetwal");

 if (VAR_3 == &VAR_2)
 {





  FUNC_6(VAR_3->bindir, "initdb");
  FUNC_6(VAR_3->bindir, "pg_dump");
  FUNC_6(VAR_3->bindir, "pg_dumpall");
  FUNC_6(VAR_3->bindir, "pg_restore");
  FUNC_6(VAR_3->bindir, "psql");
  FUNC_6(VAR_3->bindir, "vacuumdb");
 }
}
