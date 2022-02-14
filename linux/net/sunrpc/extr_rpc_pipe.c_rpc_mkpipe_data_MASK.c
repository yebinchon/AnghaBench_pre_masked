
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_ops {int dummy; } ;
struct rpc_pipe {int flags; struct rpc_pipe_ops const* ops; } ;


 int VAR_0 ;
 struct rpc_pipe* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct rpc_pipe*) ;
 struct rpc_pipe* FUNC_2 (int,int ) ;

struct rpc_pipe *FUNC_3(const struct rpc_pipe_ops *VAR_2, int VAR_3)
{
 struct rpc_pipe *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct rpc_pipe), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 FUNC_1(VAR_4);
 VAR_4->ops = VAR_2;
 VAR_4->flags = VAR_3;
 return VAR_4;
}
