
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*,int ,int *,int ) ;
 struct inode* FUNC_1 (struct dentry*) ;

int FUNC_2(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0, ((void*)0), 0);
 return VAR_3 > 0;
}
