
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(PGconn *VAR_1)
{
 FUNC_1(VAR_0, "dropping old tables...\n");





 FUNC_0(VAR_1, "drop table if exists "
      "pgbench_accounts, "
      "pgbench_branches, "
      "pgbench_history, "
      "pgbench_tellers");
}
