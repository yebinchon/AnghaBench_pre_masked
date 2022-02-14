
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct netlbl_calipso_ops {int (* sock_getattr ) (struct sock*,struct netlbl_lsm_secattr*) ;} ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct sock*,struct netlbl_lsm_secattr*) ;

int FUNC_2(struct sock *VAR_1, struct netlbl_lsm_secattr *VAR_2)
{
 int VAR_3 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_4 = FUNC_0();

 if (VAR_4)
  VAR_3 = VAR_4->sock_getattr(VAR_1, VAR_2);
 return VAR_3;
}
