
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_pipe {scalar_t__ nreaders; scalar_t__ nwriters; int queue_timeout; TYPE_1__* ops; int lock; int * dentry; scalar_t__ pipelen; int pipe; int in_upcall; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct rpc_pipe* pipe; int waitq; } ;
struct TYPE_3__ {int (* release_pipe ) (struct inode*) ;int destroy_msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static void
FUNC_11(struct inode *VAR_2)
{
 struct rpc_pipe *VAR_3 = FUNC_1(VAR_2)->pipe;
 int VAR_4;
 FUNC_0(VAR_1);

 FUNC_3(VAR_2);
 FUNC_8(&VAR_3->lock);
 VAR_4 = VAR_3->nreaders != 0 || VAR_3->nwriters != 0;
 VAR_3->nreaders = 0;
 FUNC_5(&VAR_3->in_upcall, &VAR_1);
 FUNC_5(&VAR_3->pipe, &VAR_1);
 VAR_3->pipelen = 0;
 VAR_3->dentry = ((void*)0);
 FUNC_9(&VAR_3->lock);
 FUNC_7(&FUNC_1(VAR_2)->waitq, &VAR_1, VAR_3->ops->destroy_msg, -VAR_0);
 VAR_3->nwriters = 0;
 if (VAR_4 && VAR_3->ops->release_pipe)
  VAR_3->ops->release_pipe(VAR_2);
 FUNC_2(&VAR_3->queue_timeout);
 FUNC_6(VAR_2, ((void*)0));
 FUNC_1(VAR_2)->pipe = ((void*)0);
 FUNC_4(VAR_2);
}
