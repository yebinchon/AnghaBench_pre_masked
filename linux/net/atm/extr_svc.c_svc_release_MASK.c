
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct atm_vcc {int flags; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,struct atm_vcc*) ;
 int FUNC_3 (struct atm_vcc*) ;
 int FUNC_4 (struct socket*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 struct atm_vcc *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1);
  FUNC_2("%p\n", VAR_3);
  FUNC_1(VAR_0, &VAR_3->flags);





  FUNC_3(VAR_3);
  FUNC_4(VAR_1);
 }
 return 0;
}
