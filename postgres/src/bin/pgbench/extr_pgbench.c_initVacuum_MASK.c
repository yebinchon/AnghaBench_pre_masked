
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
 FUNC_1(VAR_0, "vacuuming...\n");
 FUNC_0(VAR_1, "vacuum analyze pgbench_branches");
 FUNC_0(VAR_1, "vacuum analyze pgbench_tellers");
 FUNC_0(VAR_1, "vacuum analyze pgbench_accounts");
 FUNC_0(VAR_1, "vacuum analyze pgbench_history");
}
