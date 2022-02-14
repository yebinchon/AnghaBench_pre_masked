
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sock*,struct sk_buff*) ;
 unsigned int FUNC_1 (struct sock*) ;

bool FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0, VAR_1);
 unsigned int VAR_3 = FUNC_1(VAR_0);

 return (VAR_3 > VAR_2 * 90 / 100);
}
