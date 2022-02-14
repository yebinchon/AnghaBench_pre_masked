
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct inode*,struct dentry*) ;
 int FUNC_10 (struct inode*,struct dentry*) ;

__attribute__((used)) static void FUNC_11(struct dentry *VAR_2)
{
 struct inode *VAR_3;

 if (!VAR_2 || FUNC_0(VAR_2))
  return;

 VAR_3 = FUNC_2(VAR_2->d_parent);
 FUNC_5(VAR_3);
 if (FUNC_7(VAR_2)) {
  if (FUNC_3(VAR_2))
   FUNC_9(VAR_3, VAR_2);
  else
   FUNC_10(VAR_3, VAR_2);
  FUNC_1(VAR_2);
  FUNC_4(VAR_2);
 }
 FUNC_6(VAR_3);
 FUNC_8(&VAR_1, &VAR_0);
}
