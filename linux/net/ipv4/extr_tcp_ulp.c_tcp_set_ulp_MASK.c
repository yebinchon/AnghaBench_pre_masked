
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ulp_ops {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct tcp_ulp_ops const*) ;
 struct tcp_ulp_ops* FUNC_1 (char const*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_1, const char *VAR_2)
{
 const struct tcp_ulp_ops *VAR_3;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3);
}
