
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe_msg {scalar_t__ len; int list; } ;
struct rpc_pipe {int flags; int lock; int dentry; int pipelen; int pipe; int queue_timeout; scalar_t__ nreaders; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int waitq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct rpc_pipe *VAR_4, struct rpc_pipe_msg *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct dentry *VAR_7;

 FUNC_7(&VAR_4->lock);
 if (VAR_4->nreaders) {
  FUNC_4(&VAR_5->list, &VAR_4->pipe);
  VAR_4->pipelen += VAR_5->len;
  VAR_6 = 0;
 } else if (VAR_4->flags & VAR_1) {
  if (FUNC_5(&VAR_4->pipe))
   FUNC_6(VAR_3,
     &VAR_4->queue_timeout,
     VAR_2);
  FUNC_4(&VAR_5->list, &VAR_4->pipe);
  VAR_4->pipelen += VAR_5->len;
  VAR_6 = 0;
 }
 VAR_7 = FUNC_2(VAR_4->dentry);
 FUNC_8(&VAR_4->lock);
 if (VAR_7) {
  FUNC_9(&FUNC_0(FUNC_1(VAR_7))->waitq);
  FUNC_3(VAR_7);
 }
 return VAR_6;
}
