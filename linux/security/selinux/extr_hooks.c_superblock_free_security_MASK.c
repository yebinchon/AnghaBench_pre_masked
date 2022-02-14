
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_security_struct {int dummy; } ;
struct super_block {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (struct superblock_security_struct*) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_0)
{
 struct superblock_security_struct *VAR_1 = VAR_0->s_security;
 VAR_0->s_security = ((void*)0);
 FUNC_0(VAR_1);
}
