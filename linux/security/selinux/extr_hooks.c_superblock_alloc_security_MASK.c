
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_security_struct {void* mntpoint_sid; int def_sid; void* sid; struct super_block* sb; int isec_lock; int isec_head; int lock; } ;
struct super_block {struct superblock_security_struct* s_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 struct superblock_security_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_4)
{
 struct superblock_security_struct *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct superblock_security_struct), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 FUNC_0(&VAR_5->isec_head);
 FUNC_3(&VAR_5->isec_lock);
 VAR_5->sb = VAR_4;
 VAR_5->sid = VAR_3;
 VAR_5->def_sid = VAR_2;
 VAR_5->mntpoint_sid = VAR_3;
 VAR_4->s_security = VAR_5;

 return 0;
}
