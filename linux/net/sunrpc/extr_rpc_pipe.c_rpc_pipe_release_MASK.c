
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_pipe_msg {int list; int errno; } ;
struct rpc_pipe {scalar_t__ nwriters; scalar_t__ nreaders; TYPE_1__* ops; int lock; scalar_t__ pipelen; int pipe; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct rpc_pipe_msg* private_data; } ;
struct TYPE_4__ {int waitq; struct rpc_pipe* pipe; } ;
struct TYPE_3__ {int (* release_pipe ) (struct inode*) ;int (* destroy_msg ) (struct rpc_pipe_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int (*) (struct rpc_pipe_msg*),int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rpc_pipe_msg*) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_4, struct file *VAR_5)
{
 struct rpc_pipe *VAR_6;
 struct rpc_pipe_msg *VAR_7;
 int VAR_8;

 FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_4)->pipe;
 if (VAR_6 == ((void*)0))
  goto out;
 VAR_7 = VAR_5->private_data;
 if (VAR_7 != ((void*)0)) {
  FUNC_7(&VAR_6->lock);
  VAR_7->errno = -VAR_0;
  FUNC_4(&VAR_7->list);
  FUNC_8(&VAR_6->lock);
  VAR_6->ops->destroy_msg(VAR_7);
 }
 if (VAR_5->f_mode & VAR_2)
  VAR_6->nwriters --;
 if (VAR_5->f_mode & VAR_1) {
  VAR_6->nreaders --;
  if (VAR_6->nreaders == 0) {
   FUNC_0(VAR_3);
   FUNC_7(&VAR_6->lock);
   FUNC_5(&VAR_6->pipe, &VAR_3);
   VAR_6->pipelen = 0;
   FUNC_8(&VAR_6->lock);
   FUNC_6(&FUNC_1(VAR_4)->waitq, &VAR_3,
     VAR_6->ops->destroy_msg, -VAR_0);
  }
 }
 VAR_8 = VAR_6->nwriters == 0 && VAR_6->nreaders == 0;
 if (VAR_8 && VAR_6->ops->release_pipe)
  VAR_6->ops->release_pipe(VAR_4);
out:
 FUNC_3(VAR_4);
 return 0;
}
