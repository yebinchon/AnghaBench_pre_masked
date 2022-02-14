
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_inode {TYPE_1__* pipe; int waitq; } ;
struct poll_table_struct {int dummy; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
typedef int __poll_t ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rpc_inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t
FUNC_6(struct file *VAR_6, struct poll_table_struct *VAR_7)
{
 struct inode *VAR_8 = FUNC_1(VAR_6);
 struct rpc_inode *VAR_9 = FUNC_0(VAR_8);
 __poll_t VAR_10 = VAR_3 | VAR_5;

 FUNC_5(VAR_6, &VAR_9->waitq, VAR_7);

 FUNC_2(VAR_8);
 if (VAR_9->pipe == ((void*)0))
  VAR_10 |= VAR_0 | VAR_1;
 else if (VAR_6->private_data || !FUNC_4(&VAR_9->pipe->pipe))
  VAR_10 |= VAR_2 | VAR_4;
 FUNC_3(VAR_8);
 return VAR_10;
}
