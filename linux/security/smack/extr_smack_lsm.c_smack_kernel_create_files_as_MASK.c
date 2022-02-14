
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {int smk_forked; int smk_task; } ;
struct inode_smack {int smk_inode; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;


 struct task_smack* FUNC_0 (struct cred*) ;
 struct inode_smack* FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_0,
     struct inode *VAR_1)
{
 struct inode_smack *VAR_2 = FUNC_1(VAR_1);
 struct task_smack *VAR_3 = FUNC_0(VAR_0);

 VAR_3->smk_forked = VAR_2->smk_inode;
 VAR_3->smk_task = VAR_3->smk_forked;
 return 0;
}
