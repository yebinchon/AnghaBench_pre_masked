
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_security_struct {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 struct inode_security_struct* FUNC_1 (struct inode*) ;

__attribute__((used)) static struct inode_security_struct *FUNC_2(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
