
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_stat {TYPE_1__* program; } ;
struct proc_dir_entry {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int name; } ;


 struct proc_dir_entry* FUNC_0 (struct net*,int ,struct rpc_stat*,int *) ;
 int VAR_0 ;

struct proc_dir_entry *
FUNC_1(struct net *VAR_1, struct rpc_stat *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->program->name, VAR_2, &VAR_0);
}
