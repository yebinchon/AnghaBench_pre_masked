
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_2__ {int proc_net_sctp; } ;
struct net {TYPE_1__ sctp; } ;


 int FUNC_0 (char*) ;
 struct proc_dir_entry* FUNC_1 (char*,int ,int ,int *) ;
 int VAR_0 ;

void FUNC_2(struct net *VAR_1)
{
 struct proc_dir_entry *VAR_2;

 VAR_2 = FUNC_1("sctp_dbg_objcnt", 0,
     VAR_1->sctp.proc_net_sctp, &VAR_0);
 if (!VAR_2)
  FUNC_0("sctp_dbg_objcnt: Unable to create /proc entry.\n");
}
