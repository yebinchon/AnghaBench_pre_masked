
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_smack {TYPE_1__* smk_task; } ;
struct qstr {int dummy; } ;
struct inode_smack {int smk_flags; TYPE_1__* smk_inode; } ;
struct dentry {int d_parent; } ;
typedef struct cred const cred ;
struct TYPE_2__ {int smk_rules; int smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct task_smack* FUNC_3 (struct cred const*) ;
 struct inode_smack* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_2, int VAR_3,
     struct qstr *VAR_4,
     const struct cred *VAR_5,
     struct cred *VAR_6)
{
 struct task_smack *VAR_7 = FUNC_3(VAR_5);
 struct task_smack *VAR_8 = FUNC_3(VAR_6);
 struct inode_smack *VAR_9;
 int VAR_10;





 VAR_8->smk_task = VAR_7->smk_task;




 VAR_9 = FUNC_4(FUNC_0(VAR_2->d_parent));

 if (VAR_9->smk_flags & VAR_1) {
  FUNC_1();
  VAR_10 = FUNC_5(VAR_7->smk_task->smk_known,
           VAR_9->smk_inode->smk_known,
           &VAR_7->smk_task->smk_rules);
  FUNC_2();






  if (VAR_10 > 0 && (VAR_10 & VAR_0))
   VAR_8->smk_task = VAR_9->smk_inode;
 }
 return 0;
}
