
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smack_known {void* smk_known; } ;
struct inode {int dummy; } ;


 struct smack_known* FUNC_0 (struct inode*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void **VAR_1, u32 *VAR_2)
{
 struct smack_known *VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = VAR_3->smk_known;
 *VAR_2 = FUNC_1(VAR_3->smk_known);
 return 0;
}
