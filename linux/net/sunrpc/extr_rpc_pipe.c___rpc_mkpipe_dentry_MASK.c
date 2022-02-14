
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct rpc_pipe {int dummy; } ;
struct rpc_inode {struct rpc_pipe* pipe; void* private; } ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 struct rpc_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct dentry*,int,struct file_operations const*,void*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2,
          umode_t VAR_3,
          const struct file_operations *VAR_4,
          void *VAR_5,
          struct rpc_pipe *VAR_6)
{
 struct rpc_inode *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_0 | VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_7 = FUNC_0(FUNC_2(VAR_2));
 VAR_7->private = VAR_5;
 VAR_7->pipe = VAR_6;
 FUNC_3(VAR_1, VAR_2);
 return 0;
}
