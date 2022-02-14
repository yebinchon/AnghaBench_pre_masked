
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int dummy; } ;
struct inode {int i_mode; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct integrity_iint_cache*,struct inode*,struct file*) ;
 int VAR_0 ;
 struct integrity_iint_cache* FUNC_3 (struct inode*) ;

void FUNC_4(struct file *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);
 struct integrity_iint_cache *VAR_3;

 if (!VAR_0 || !FUNC_0(VAR_2->i_mode))
  return;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return;

 FUNC_2(VAR_3, VAR_2, VAR_1);
}
