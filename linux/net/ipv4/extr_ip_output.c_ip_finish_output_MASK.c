
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;


 int FUNC_1 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_0, struct sock *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 switch (VAR_3) {
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2) ? : VAR_3;
 default:
  FUNC_2(VAR_2);
  return VAR_3;
 }
}
