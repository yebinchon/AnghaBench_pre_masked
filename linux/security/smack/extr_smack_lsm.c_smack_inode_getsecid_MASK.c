
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smack_known {int smk_secid; } ;
struct inode {int dummy; } ;


 struct smack_known* FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, u32 *VAR_1)
{
 struct smack_known *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->smk_secid;
}
