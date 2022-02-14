
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int net_ns; int cgroup_ns; scalar_t__ pid_ns_for_children; scalar_t__ ipc_ns; scalar_t__ uts_ns; scalar_t__ mnt_ns; } ;


 int FUNC_0 (int ,struct nsproxy*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct nsproxy *VAR_1)
{
 if (VAR_1->mnt_ns)
  FUNC_3(VAR_1->mnt_ns);
 if (VAR_1->uts_ns)
  FUNC_6(VAR_1->uts_ns);
 if (VAR_1->ipc_ns)
  FUNC_2(VAR_1->ipc_ns);
 if (VAR_1->pid_ns_for_children)
  FUNC_5(VAR_1->pid_ns_for_children);
 FUNC_1(VAR_1->cgroup_ns);
 FUNC_4(VAR_1->net_ns);
 FUNC_0(VAR_0, VAR_1);
}
