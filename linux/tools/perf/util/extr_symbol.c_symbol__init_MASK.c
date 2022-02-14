
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct symbol_name_rb_node {int dummy; } ;
struct symbol {int dummy; } ;
struct perf_env {int dummy; } ;
struct TYPE_2__ {int initialized; int priv_size; char* field_sep; char* symfs; int dso_list; int comm_list; int pid_list; int tid_list; int sym_list; int kptr_restrict; int bt_stop_list_str; int bt_stop_list; int sym_list_str; int tid_list_str; int pid_list_str; int comm_list_str; int dso_list_str; scalar_t__ try_vmlinux_path; scalar_t__ sort_by_name; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int ,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_11 (struct perf_env*) ;

int FUNC_12(struct perf_env *VAR_1)
{
 const char *VAR_2;

 if (VAR_0.initialized)
  return 0;

 VAR_0.priv_size = FUNC_0(VAR_0.priv_size, sizeof(u64));

 FUNC_9();

 if (VAR_0.sort_by_name)
  VAR_0.priv_size += (sizeof(struct symbol_name_rb_node) -
       sizeof(struct symbol));

 if (VAR_0.try_vmlinux_path && FUNC_11(VAR_1) < 0)
  return -1;

 if (VAR_0.field_sep && *VAR_0.field_sep == '.') {
  FUNC_3("'.' is the only non valid --field-separator argument\n");
  return -1;
 }

 if (FUNC_6(&VAR_0.dso_list,
         VAR_0.dso_list_str, "dso") < 0)
  return -1;

 if (FUNC_6(&VAR_0.comm_list,
         VAR_0.comm_list_str, "comm") < 0)
  goto out_free_dso_list;

 if (FUNC_5(&VAR_0.pid_list,
         VAR_0.pid_list_str, "pid") < 0)
  goto out_free_comm_list;

 if (FUNC_5(&VAR_0.tid_list,
         VAR_0.tid_list_str, "tid") < 0)
  goto out_free_pid_list;

 if (FUNC_6(&VAR_0.sym_list,
         VAR_0.sym_list_str, "symbol") < 0)
  goto out_free_tid_list;

 if (FUNC_6(&VAR_0.bt_stop_list,
         VAR_0.bt_stop_list_str, "symbol") < 0)
  goto out_free_sym_list;





 VAR_2 = FUNC_4(VAR_0.symfs, ((void*)0));
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0.symfs;
 if (FUNC_7(VAR_2, "/") == 0)
  VAR_0.symfs = "";
 if (VAR_2 != VAR_0.symfs)
  FUNC_1((void *)VAR_2);

 VAR_0.kptr_restrict = FUNC_10();

 VAR_0.initialized = 1;
 return 0;

out_free_sym_list:
 FUNC_8(VAR_0.sym_list);
out_free_tid_list:
 FUNC_2(VAR_0.tid_list);
out_free_pid_list:
 FUNC_2(VAR_0.pid_list);
out_free_comm_list:
 FUNC_8(VAR_0.comm_list);
out_free_dso_list:
 FUNC_8(VAR_0.dso_list);
 return -1;
}
