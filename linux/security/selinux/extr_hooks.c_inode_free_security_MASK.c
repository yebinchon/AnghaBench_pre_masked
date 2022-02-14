
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superblock_security_struct {int isec_lock; } ;
struct inode_security_struct {int list; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct inode_security_struct *VAR_1 = FUNC_2(VAR_0);
 struct superblock_security_struct *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = VAR_0->i_sb->s_security;
 if (!FUNC_1(&VAR_1->list)) {
  FUNC_3(&VAR_2->isec_lock);
  FUNC_0(&VAR_1->list);
  FUNC_4(&VAR_2->isec_lock);
 }
}
