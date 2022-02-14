
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {struct smack_known* smk_task; } ;
struct smack_known {int dummy; } ;
struct inode_smack {struct smack_known* smk_inode; } ;
struct dentry {int d_parent; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cred* FUNC_1 () ;
 struct task_smack* FUNC_2 (struct cred*) ;
 struct inode_smack* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1, struct cred **VAR_2)
{

 struct task_smack *VAR_3;
 struct smack_known *VAR_4;
 struct inode_smack *VAR_5;
 struct cred *VAR_6 = *VAR_2;

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_1();
  if (VAR_6 == ((void*)0))
   return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_6);




 VAR_5 = FUNC_3(FUNC_0(VAR_1->d_parent));
 VAR_4 = VAR_5->smk_inode;
 VAR_3->smk_task = VAR_4;
 *VAR_2 = VAR_6;
 return 0;
}
