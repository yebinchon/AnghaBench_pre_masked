
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_smack {int smk_flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode_smack* FUNC_0 (struct inode const*) ;

__attribute__((used)) static inline int FUNC_1(const struct inode *VAR_1)
{
 struct inode_smack *VAR_2 = FUNC_0(VAR_1);
 return (VAR_2->smk_flags & VAR_0) != 0;
}
