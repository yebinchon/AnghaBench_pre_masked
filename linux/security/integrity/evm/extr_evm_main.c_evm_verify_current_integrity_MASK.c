
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
typedef enum integrity_status { ____Placeholder_integrity_status } integrity_status ;


 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct dentry*,int *,int *,int ,int *) ;

__attribute__((used)) static enum integrity_status FUNC_4(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_2() || !FUNC_0(VAR_2->i_mode) || VAR_0)
  return 0;
 return FUNC_3(VAR_1, ((void*)0), ((void*)0), 0, ((void*)0));
}
