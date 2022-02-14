
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock {int dummy; } ;
struct netlbl_calipso_ops {int (* req_delattr ) (struct request_sock*) ;} ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct request_sock*) ;

void FUNC_2(struct request_sock *VAR_0)
{
 const struct netlbl_calipso_ops *VAR_1 = FUNC_0();

 if (VAR_1)
  VAR_1->req_delattr(VAR_0);
}
