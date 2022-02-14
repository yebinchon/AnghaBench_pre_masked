
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_smack {int * smk_hat; int * smk_floor; int * smk_default; int * smk_root; } ;
struct super_block {struct superblock_smack* s_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct superblock_smack* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_4)
{
 struct superblock_smack *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct superblock_smack), VAR_1);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->smk_root = &VAR_2;
 VAR_5->smk_default = &VAR_2;
 VAR_5->smk_floor = &VAR_2;
 VAR_5->smk_hat = &VAR_3;



 VAR_4->s_security = VAR_5;

 return 0;
}
