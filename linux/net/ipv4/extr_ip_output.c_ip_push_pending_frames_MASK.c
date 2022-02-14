
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct flowi4 {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sock*,struct flowi4*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_0, struct flowi4 *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;


 return FUNC_1(FUNC_2(VAR_0), VAR_2);
}
