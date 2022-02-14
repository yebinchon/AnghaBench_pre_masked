
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int FUNC_0 (int *,char const* const) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const* const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(PGconn *VAR_1)
{
 static const char *const VAR_2[] = {
  "alter table pgbench_tellers add constraint pgbench_tellers_bid_fkey foreign key (bid) references pgbench_branches",
  "alter table pgbench_accounts add constraint pgbench_accounts_bid_fkey foreign key (bid) references pgbench_branches",
  "alter table pgbench_history add constraint pgbench_history_bid_fkey foreign key (bid) references pgbench_branches",
  "alter table pgbench_history add constraint pgbench_history_tid_fkey foreign key (tid) references pgbench_tellers",
  "alter table pgbench_history add constraint pgbench_history_aid_fkey foreign key (aid) references pgbench_accounts"
 };
 int VAR_3;

 FUNC_1(VAR_0, "creating foreign keys...\n");
 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++)
 {
  FUNC_0(VAR_1, VAR_2[VAR_3]);
 }
}
