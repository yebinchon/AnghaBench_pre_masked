
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int dummy; } ;
struct inode_smack {struct smack_known* smk_inode; } ;
struct inode {int dummy; } ;


 struct inode_smack* FUNC_0 (struct inode const*) ;

__attribute__((used)) static inline struct smack_known *FUNC_1(const struct inode *VAR_0)
{
 struct inode_smack *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->smk_inode;
}
