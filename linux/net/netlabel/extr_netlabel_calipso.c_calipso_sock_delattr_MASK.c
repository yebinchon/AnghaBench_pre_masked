
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netlbl_calipso_ops {int (* sock_delattr ) (struct sock*) ;} ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 const struct netlbl_calipso_ops *VAR_1 = FUNC_0();

 if (VAR_1)
  VAR_1->sock_delattr(VAR_0);
}
