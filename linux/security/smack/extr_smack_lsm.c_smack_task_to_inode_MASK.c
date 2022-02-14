
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smack_known {int dummy; } ;
struct inode_smack {int smk_flags; struct smack_known* smk_inode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode_smack* FUNC_0 (struct inode*) ;
 struct smack_known* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_1, struct inode *VAR_2)
{
 struct inode_smack *VAR_3 = FUNC_0(VAR_2);
 struct smack_known *VAR_4 = FUNC_1(VAR_1);

 VAR_3->smk_inode = VAR_4;
 VAR_3->smk_flags |= VAR_0;
}
