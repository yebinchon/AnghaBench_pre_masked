
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key_value_s {int value; int key; struct key_value_s* next; } ;
struct fpm_worker_pool_s {TYPE_1__* config; struct fpm_worker_pool_s* next; } ;
struct TYPE_6__ {int process_priority; int systemd_interval; int rlimit_core; int rlimit_files; int daemonize; int process_max; int process_control_timeout; int emergency_restart_threshold; int emergency_restart_interval; int log_limit; int log_buffering; int syslog_facility; int syslog_ident; int error_log; int pid_file; } ;
struct TYPE_5__ {int log_level; } ;
struct TYPE_4__ {int process_priority; struct key_value_s* php_admin_values; struct key_value_s* php_values; struct key_value_s* env; int security_limit_extensions; int clear_env; int decorate_workers_output; int catch_workers_output; int chdir; int chroot; int rlimit_core; int rlimit_files; int request_terminate_timeout_track_finished; int request_terminate_timeout; int request_slowlog_trace_depth; int request_slowlog_timeout; int slowlog; int access_format; int access_log; int ping_response; int ping_path; int pm_status_path; int pm_max_requests; int pm_process_idle_timeout; int pm_max_spare_servers; int pm_min_spare_servers; int pm_start_servers; int pm_max_children; int pm; int process_dumpable; int listen_allowed_clients; int listen_mode; int listen_group; int listen_owner; int listen_acl_groups; int listen_acl_users; int listen_backlog; int listen_address; int group; int user; int prefix; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct fpm_worker_pool_s* VAR_3 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6()
{
 struct fpm_worker_pool_s *VAR_4;




 FUNC_4(VAR_0, "[global]");
 FUNC_4(VAR_0, "\tpid = %s", FUNC_2(VAR_1.pid_file));
 FUNC_4(VAR_0, "\terror_log = %s", FUNC_2(VAR_1.error_log));




 FUNC_4(VAR_0, "\tlog_buffering = %s", FUNC_0(VAR_1.log_buffering));
 FUNC_4(VAR_0, "\tlog_level = %s", FUNC_5(VAR_2.log_level));
 FUNC_4(VAR_0, "\tlog_limit = %d", VAR_1.log_limit);
 FUNC_4(VAR_0, "\temergency_restart_interval = %ds", VAR_1.emergency_restart_interval);
 FUNC_4(VAR_0, "\temergency_restart_threshold = %d", VAR_1.emergency_restart_threshold);
 FUNC_4(VAR_0, "\tprocess_control_timeout = %ds", VAR_1.process_control_timeout);
 FUNC_4(VAR_0, "\tprocess.max = %d", VAR_1.process_max);
 if (VAR_1.process_priority == 64) {
  FUNC_4(VAR_0, "\tprocess.priority = undefined");
 } else {
  FUNC_4(VAR_0, "\tprocess.priority = %d", VAR_1.process_priority);
 }
 FUNC_4(VAR_0, "\tdaemonize = %s", FUNC_0(VAR_1.daemonize));
 FUNC_4(VAR_0, "\trlimit_files = %d", VAR_1.rlimit_files);
 FUNC_4(VAR_0, "\trlimit_core = %d", VAR_1.rlimit_core);
 FUNC_4(VAR_0, "\tevents.mechanism = %s", FUNC_3());



 FUNC_4(VAR_0, " ");

 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
  struct key_value_s *VAR_5;
  if (!VAR_4->config) continue;
  FUNC_4(VAR_0, "[%s]", FUNC_2(VAR_4->config->name));
  FUNC_4(VAR_0, "\tprefix = %s", FUNC_2(VAR_4->config->prefix));
  FUNC_4(VAR_0, "\tuser = %s", FUNC_2(VAR_4->config->user));
  FUNC_4(VAR_0, "\tgroup = %s", FUNC_2(VAR_4->config->group));
  FUNC_4(VAR_0, "\tlisten = %s", FUNC_2(VAR_4->config->listen_address));
  FUNC_4(VAR_0, "\tlisten.backlog = %d", VAR_4->config->listen_backlog);




  FUNC_4(VAR_0, "\tlisten.owner = %s", FUNC_2(VAR_4->config->listen_owner));
  FUNC_4(VAR_0, "\tlisten.group = %s", FUNC_2(VAR_4->config->listen_group));
  FUNC_4(VAR_0, "\tlisten.mode = %s", FUNC_2(VAR_4->config->listen_mode));
  FUNC_4(VAR_0, "\tlisten.allowed_clients = %s", FUNC_2(VAR_4->config->listen_allowed_clients));
  if (VAR_4->config->process_priority == 64) {
   FUNC_4(VAR_0, "\tprocess.priority = undefined");
  } else {
   FUNC_4(VAR_0, "\tprocess.priority = %d", VAR_4->config->process_priority);
  }
  FUNC_4(VAR_0, "\tprocess.dumpable = %s", FUNC_0(VAR_4->config->process_dumpable));
  FUNC_4(VAR_0, "\tpm = %s", FUNC_1(VAR_4->config->pm));
  FUNC_4(VAR_0, "\tpm.max_children = %d", VAR_4->config->pm_max_children);
  FUNC_4(VAR_0, "\tpm.start_servers = %d", VAR_4->config->pm_start_servers);
  FUNC_4(VAR_0, "\tpm.min_spare_servers = %d", VAR_4->config->pm_min_spare_servers);
  FUNC_4(VAR_0, "\tpm.max_spare_servers = %d", VAR_4->config->pm_max_spare_servers);
  FUNC_4(VAR_0, "\tpm.process_idle_timeout = %d", VAR_4->config->pm_process_idle_timeout);
  FUNC_4(VAR_0, "\tpm.max_requests = %d", VAR_4->config->pm_max_requests);
  FUNC_4(VAR_0, "\tpm.status_path = %s", FUNC_2(VAR_4->config->pm_status_path));
  FUNC_4(VAR_0, "\tping.path = %s", FUNC_2(VAR_4->config->ping_path));
  FUNC_4(VAR_0, "\tping.response = %s", FUNC_2(VAR_4->config->ping_response));
  FUNC_4(VAR_0, "\taccess.log = %s", FUNC_2(VAR_4->config->access_log));
  FUNC_4(VAR_0, "\taccess.format = %s", FUNC_2(VAR_4->config->access_format));
  FUNC_4(VAR_0, "\tslowlog = %s", FUNC_2(VAR_4->config->slowlog));
  FUNC_4(VAR_0, "\trequest_slowlog_timeout = %ds", VAR_4->config->request_slowlog_timeout);
  FUNC_4(VAR_0, "\trequest_slowlog_trace_depth = %d", VAR_4->config->request_slowlog_trace_depth);
  FUNC_4(VAR_0, "\trequest_terminate_timeout = %ds", VAR_4->config->request_terminate_timeout);
  FUNC_4(VAR_0, "\trequest_terminate_timeout_track_finished = %s", FUNC_0(VAR_4->config->request_terminate_timeout_track_finished));
  FUNC_4(VAR_0, "\trlimit_files = %d", VAR_4->config->rlimit_files);
  FUNC_4(VAR_0, "\trlimit_core = %d", VAR_4->config->rlimit_core);
  FUNC_4(VAR_0, "\tchroot = %s", FUNC_2(VAR_4->config->chroot));
  FUNC_4(VAR_0, "\tchdir = %s", FUNC_2(VAR_4->config->chdir));
  FUNC_4(VAR_0, "\tcatch_workers_output = %s", FUNC_0(VAR_4->config->catch_workers_output));
  FUNC_4(VAR_0, "\tdecorate_workers_output = %s", FUNC_0(VAR_4->config->decorate_workers_output));
  FUNC_4(VAR_0, "\tclear_env = %s", FUNC_0(VAR_4->config->clear_env));
  FUNC_4(VAR_0, "\tsecurity.limit_extensions = %s", VAR_4->config->security_limit_extensions);

  for (VAR_5 = VAR_4->config->env; VAR_5; VAR_5 = VAR_5->next) {
   FUNC_4(VAR_0, "\tenv[%s] = %s", VAR_5->key, VAR_5->value);
  }

  for (VAR_5 = VAR_4->config->php_values; VAR_5; VAR_5 = VAR_5->next) {
   FUNC_4(VAR_0, "\tphp_value[%s] = %s", VAR_5->key, VAR_5->value);
  }

  for (VAR_5 = VAR_4->config->php_admin_values; VAR_5; VAR_5 = VAR_5->next) {
   FUNC_4(VAR_0, "\tphp_admin_value[%s] = %s", VAR_5->key, VAR_5->value);
  }
  FUNC_4(VAR_0, " ");
 }
}
