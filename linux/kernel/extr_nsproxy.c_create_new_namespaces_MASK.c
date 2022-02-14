
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct task_struct {TYPE_1__* nsproxy; } ;
struct nsproxy {scalar_t__ mnt_ns; scalar_t__ uts_ns; scalar_t__ ipc_ns; scalar_t__ pid_ns_for_children; scalar_t__ cgroup_ns; scalar_t__ net_ns; } ;
struct fs_struct {int dummy; } ;
struct TYPE_2__ {int net_ns; int cgroup_ns; int pid_ns_for_children; int ipc_ns; int uts_ns; int mnt_ns; } ;


 int VAR_0 ;
 struct nsproxy* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,struct user_namespace*,int ) ;
 scalar_t__ FUNC_4 (unsigned long,struct user_namespace*,int ) ;
 scalar_t__ FUNC_5 (unsigned long,int ,struct user_namespace*,struct fs_struct*) ;
 scalar_t__ FUNC_6 (unsigned long,struct user_namespace*,int ) ;
 scalar_t__ FUNC_7 (unsigned long,struct user_namespace*,int ) ;
 scalar_t__ FUNC_8 (unsigned long,struct user_namespace*,int ) ;
 struct nsproxy* FUNC_9 () ;
 int FUNC_10 (int ,struct nsproxy*) ;
 int VAR_1 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static struct nsproxy *FUNC_16(unsigned long VAR_2,
 struct task_struct *VAR_3, struct user_namespace *VAR_4,
 struct fs_struct *VAR_5)
{
 struct nsproxy *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_9();
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->mnt_ns = FUNC_5(VAR_2, VAR_3->nsproxy->mnt_ns, VAR_4, VAR_5);
 if (FUNC_1(VAR_6->mnt_ns)) {
  VAR_7 = FUNC_2(VAR_6->mnt_ns);
  goto out_ns;
 }

 VAR_6->uts_ns = FUNC_8(VAR_2, VAR_4, VAR_3->nsproxy->uts_ns);
 if (FUNC_1(VAR_6->uts_ns)) {
  VAR_7 = FUNC_2(VAR_6->uts_ns);
  goto out_uts;
 }

 VAR_6->ipc_ns = FUNC_4(VAR_2, VAR_4, VAR_3->nsproxy->ipc_ns);
 if (FUNC_1(VAR_6->ipc_ns)) {
  VAR_7 = FUNC_2(VAR_6->ipc_ns);
  goto out_ipc;
 }

 VAR_6->pid_ns_for_children =
  FUNC_7(VAR_2, VAR_4, VAR_3->nsproxy->pid_ns_for_children);
 if (FUNC_1(VAR_6->pid_ns_for_children)) {
  VAR_7 = FUNC_2(VAR_6->pid_ns_for_children);
  goto out_pid;
 }

 VAR_6->cgroup_ns = FUNC_3(VAR_2, VAR_4,
         VAR_3->nsproxy->cgroup_ns);
 if (FUNC_1(VAR_6->cgroup_ns)) {
  VAR_7 = FUNC_2(VAR_6->cgroup_ns);
  goto out_cgroup;
 }

 VAR_6->net_ns = FUNC_6(VAR_2, VAR_4, VAR_3->nsproxy->net_ns);
 if (FUNC_1(VAR_6->net_ns)) {
  VAR_7 = FUNC_2(VAR_6->net_ns);
  goto out_net;
 }

 return VAR_6;

out_net:
 FUNC_11(VAR_6->cgroup_ns);
out_cgroup:
 if (VAR_6->pid_ns_for_children)
  FUNC_14(VAR_6->pid_ns_for_children);
out_pid:
 if (VAR_6->ipc_ns)
  FUNC_12(VAR_6->ipc_ns);
out_ipc:
 if (VAR_6->uts_ns)
  FUNC_15(VAR_6->uts_ns);
out_uts:
 if (VAR_6->mnt_ns)
  FUNC_13(VAR_6->mnt_ns);
out_ns:
 FUNC_10(VAR_1, VAR_6);
 return FUNC_0(VAR_7);
}
