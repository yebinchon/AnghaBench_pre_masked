
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {int waitq; int * pipe; int * private; int vfs_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct rpc_inode *VAR_1 = (struct rpc_inode *) VAR_0;

 FUNC_1(&VAR_1->vfs_inode);
 VAR_1->private = ((void*)0);
 VAR_1->pipe = ((void*)0);
 FUNC_0(&VAR_1->waitq);
}
