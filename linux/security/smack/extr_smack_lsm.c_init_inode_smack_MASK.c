
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int dummy; } ;
struct inode_smack {int smk_lock; scalar_t__ smk_flags; struct smack_known* smk_inode; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 struct inode_smack* FUNC_1 (struct inode*) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0, struct smack_known *VAR_1)
{
 struct inode_smack *VAR_2 = FUNC_1(VAR_0);

 VAR_2->smk_inode = VAR_1;
 VAR_2->smk_flags = 0;
 FUNC_0(&VAR_2->smk_lock);
}
