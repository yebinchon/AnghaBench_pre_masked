
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_security_struct {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*,struct dentry*,int) ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;

__attribute__((used)) static struct inode_security_struct *FUNC_3(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_0, 1);
 return FUNC_2(VAR_1);
}
