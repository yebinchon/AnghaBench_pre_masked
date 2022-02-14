
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_pipe {scalar_t__ nreaders; scalar_t__ nwriters; TYPE_1__* ops; } ;
struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_4__ {struct rpc_pipe* pipe; } ;
struct TYPE_3__ {int (* open_pipe ) (struct inode*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct rpc_pipe *VAR_5;
 int VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3)->pipe;
 if (VAR_5 == ((void*)0))
  goto out;
 VAR_6 = VAR_5->nreaders == 0 && VAR_5->nwriters == 0;
 if (VAR_6 && VAR_5->ops->open_pipe) {
  VAR_7 = VAR_5->ops->open_pipe(VAR_3);
  if (VAR_7)
   goto out;
 }
 if (VAR_4->f_mode & VAR_1)
  VAR_5->nreaders++;
 if (VAR_4->f_mode & VAR_2)
  VAR_5->nwriters++;
 VAR_7 = 0;
out:
 FUNC_2(VAR_3);
 return VAR_7;
}
