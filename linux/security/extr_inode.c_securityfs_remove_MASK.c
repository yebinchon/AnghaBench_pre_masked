
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (struct inode*,struct dentry*) ;

void FUNC_10(struct dentry *VAR_2)
{
 struct inode *VAR_3;

 if (!VAR_2 || FUNC_0(VAR_2))
  return;

 VAR_3 = FUNC_1(VAR_2->d_parent);
 FUNC_4(VAR_3);
 if (FUNC_6(VAR_2)) {
  if (FUNC_2(VAR_2))
   FUNC_8(VAR_3, VAR_2);
  else
   FUNC_9(VAR_3, VAR_2);
  FUNC_3(VAR_2);
 }
 FUNC_5(VAR_3);
 FUNC_7(&VAR_0, &VAR_1);
}
