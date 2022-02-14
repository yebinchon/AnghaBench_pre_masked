
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe {int * dentry; int lock; int * ops; int queue_timeout; scalar_t__ pipelen; int pipe; int in_downcall; int in_upcall; scalar_t__ nwriters; scalar_t__ nreaders; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct rpc_pipe *VAR_1)
{
 VAR_1->nreaders = 0;
 VAR_1->nwriters = 0;
 FUNC_1(&VAR_1->in_upcall);
 FUNC_1(&VAR_1->in_downcall);
 FUNC_1(&VAR_1->pipe);
 VAR_1->pipelen = 0;
 FUNC_0(&VAR_1->queue_timeout,
       VAR_0);
 VAR_1->ops = ((void*)0);
 FUNC_2(&VAR_1->lock);
 VAR_1->dentry = ((void*)0);
}
