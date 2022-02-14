
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe {int lock; } ;
struct gss_upcall_msg {int list; struct rpc_pipe* pipe; } ;


 int FUNC_0 (struct gss_upcall_msg*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct gss_upcall_msg *VAR_0)
{
 struct rpc_pipe *VAR_1 = VAR_0->pipe;

 if (FUNC_1(&VAR_0->list))
  return;
 FUNC_2(&VAR_1->lock);
 if (!FUNC_1(&VAR_0->list))
  FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
}
