
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pgdata; int major_version; } ;
typedef TYPE_1__ ClusterInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ClusterInfo *VAR_0)
{
 const char *VAR_1 = VAR_0->pgdata;


 VAR_0->major_version = FUNC_2(VAR_0);

 FUNC_1(VAR_1, "");
 FUNC_1(VAR_1, "base");
 FUNC_1(VAR_1, "global");
 FUNC_1(VAR_1, "pg_multixact");
 FUNC_1(VAR_1, "pg_subtrans");
 FUNC_1(VAR_1, "pg_tblspc");
 FUNC_1(VAR_1, "pg_twophase");


 if (FUNC_0(VAR_0->major_version) < 1000)
  FUNC_1(VAR_1, "pg_xlog");
 else
  FUNC_1(VAR_1, "pg_wal");


 if (FUNC_0(VAR_0->major_version) < 1000)
  FUNC_1(VAR_1, "pg_clog");
 else
  FUNC_1(VAR_1, "pg_xact");
}
