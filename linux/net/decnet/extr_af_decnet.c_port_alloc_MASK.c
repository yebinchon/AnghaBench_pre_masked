
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {int addrloc; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned short) ;

__attribute__((used)) static unsigned short FUNC_3(struct sock *VAR_0)
{
 struct dn_scp *VAR_1 = FUNC_0(VAR_0);
 static unsigned short VAR_2 = 0x2000;
 unsigned short VAR_3 = VAR_2;

 while(FUNC_1(FUNC_2(++VAR_2)) != 0) {
  if (VAR_2 == VAR_3)
   return 0;
 }

 VAR_1->addrloc = FUNC_2(VAR_2);

 return 1;
}
