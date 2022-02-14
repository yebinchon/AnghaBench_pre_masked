
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe {int lock; int in_downcall; } ;
struct gss_upcall_msg {int list; int count; int auth; int uid; struct rpc_pipe* pipe; } ;


 struct gss_upcall_msg* FUNC_0 (struct rpc_pipe*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline struct gss_upcall_msg *
FUNC_5(struct gss_upcall_msg *VAR_0)
{
 struct rpc_pipe *VAR_1 = VAR_0->pipe;
 struct gss_upcall_msg *VAR_2;

 FUNC_3(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1, VAR_0->uid, VAR_0->auth);
 if (VAR_2 == ((void*)0)) {
  FUNC_2(&VAR_0->count);
  FUNC_1(&VAR_0->list, &VAR_1->in_downcall);
 } else
  VAR_0 = VAR_2;
 FUNC_4(&VAR_1->lock);
 return VAR_0;
}
