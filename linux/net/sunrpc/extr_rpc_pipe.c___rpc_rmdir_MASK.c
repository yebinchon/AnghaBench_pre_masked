
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct dentry *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 return VAR_2;
}
