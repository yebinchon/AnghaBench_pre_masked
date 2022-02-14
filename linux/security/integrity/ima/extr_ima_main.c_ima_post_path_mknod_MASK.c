
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int flags; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ,int ) ;
 struct integrity_iint_cache* FUNC_1 (struct inode*) ;

void FUNC_2(struct dentry *VAR_3)
{
 struct integrity_iint_cache *VAR_4;
 struct inode *VAR_5 = VAR_3->d_inode;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_0);
 if (!VAR_6)
  return;


 VAR_4 = FUNC_1(VAR_5);
 if (!VAR_4)
  return;


 VAR_4->flags |= VAR_1;
}
