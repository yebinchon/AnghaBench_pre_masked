
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe_dir_object {int pdo_head; TYPE_1__* pdo_ops; } ;
struct rpc_pipe_dir_head {int pdh_entries; scalar_t__ pdh_dentry; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* create ) (scalar_t__,struct rpc_pipe_dir_object*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,struct rpc_pipe_dir_object*) ;

__attribute__((used)) static int
FUNC_2(struct net *VAR_0,
  struct rpc_pipe_dir_head *VAR_1,
  struct rpc_pipe_dir_object *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->pdh_dentry)
  VAR_3 = VAR_2->pdo_ops->create(VAR_1->pdh_dentry, VAR_2);
 if (VAR_3 == 0)
  FUNC_0(&VAR_2->pdo_head, &VAR_1->pdh_entries);
 return VAR_3;
}
