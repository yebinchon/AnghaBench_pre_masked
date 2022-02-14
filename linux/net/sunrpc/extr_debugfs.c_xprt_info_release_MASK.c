
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct inode {struct rpc_xprt* i_private; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (struct rpc_xprt*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_0->i_private;

 FUNC_1(VAR_2);
 return FUNC_0(VAR_0, VAR_1);
}
