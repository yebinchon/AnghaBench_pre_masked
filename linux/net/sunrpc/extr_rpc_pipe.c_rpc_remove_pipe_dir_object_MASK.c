
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int pipefs_sb_lock; } ;
struct rpc_pipe_dir_object {int pdo_head; } ;
struct rpc_pipe_dir_head {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sunrpc_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct net*,struct rpc_pipe_dir_head*,struct rpc_pipe_dir_object*) ;
 int VAR_0 ;

void
FUNC_5(struct net *VAR_1,
  struct rpc_pipe_dir_head *VAR_2,
  struct rpc_pipe_dir_object *VAR_3)
{
 if (!FUNC_0(&VAR_3->pdo_head)) {
  struct sunrpc_net *VAR_4 = FUNC_3(VAR_1, VAR_0);

  FUNC_1(&VAR_4->pipefs_sb_lock);
  FUNC_4(VAR_1, VAR_2, VAR_3);
  FUNC_2(&VAR_4->pipefs_sb_lock);
 }
}
