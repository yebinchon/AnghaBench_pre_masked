
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct inode {struct rpc_xprt* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,struct rpc_xprt*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct rpc_xprt*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 struct rpc_xprt *VAR_5 = VAR_2->i_private;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_5);

 if (!VAR_4) {
  if (!FUNC_2(VAR_5)) {
   FUNC_1(VAR_2, VAR_3);
   VAR_4 = -VAR_0;
  }
 }
 return VAR_4;
}
