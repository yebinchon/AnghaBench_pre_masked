
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_security_struct {int behavior; } ;
struct super_block {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;






 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1)
{
 struct superblock_security_struct *VAR_2 = VAR_1->s_security;





 FUNC_0(VAR_0 != 7);

 switch (VAR_2->behavior) {
 case 128:
 case 129:
 case 130:
 case 132:
  return 1;

 case 134:
  return FUNC_1(VAR_1);


 case 133:
 case 131:
 default:
  return 0;
 }
}
