
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtable {int dst; scalar_t__ rt_iif; } ;
struct net {int loopback_dev; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;


 int FUNC_1 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct rtable* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_0, struct sock *VAR_1,
          struct sk_buff *VAR_2)
{
 struct rtable *VAR_3;
 bool VAR_4 = 0;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 switch (VAR_5) {
 case 129:
  VAR_4 = 1;

 case 128:
  break;
 default:
  FUNC_2(VAR_2);
  return VAR_5;
 }





 VAR_3 = FUNC_3(VAR_0->loopback_dev, FUNC_6(VAR_2));
 if (VAR_3) {
  VAR_3->rt_iif = 0;
  FUNC_4(VAR_2);
  FUNC_5(VAR_2, &VAR_3->dst);
 }

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return (VAR_4 && VAR_6) ? VAR_5 : VAR_6;
}
