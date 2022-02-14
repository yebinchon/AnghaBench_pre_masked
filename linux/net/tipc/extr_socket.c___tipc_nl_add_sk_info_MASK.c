
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct tipc_sock {int publications; int portid; struct sock sk; } ;
struct sk_buff {int sk; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct tipc_sock*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct net*) ;
 scalar_t__ FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4, struct tipc_sock
     *VAR_5)
{
 struct net *VAR_6 = FUNC_4(VAR_4->sk);
 struct sock *VAR_7 = &VAR_5->sk;

 if (FUNC_3(VAR_4, VAR_3, VAR_5->portid) ||
     FUNC_3(VAR_4, VAR_1, FUNC_5(VAR_6)))
  return -VAR_0;

 if (FUNC_6(VAR_7)) {
  if (FUNC_0(VAR_4, VAR_5))
   return -VAR_0;
 } else if (!FUNC_1(&VAR_5->publications)) {
  if (FUNC_2(VAR_4, VAR_2))
   return -VAR_0;
 }
 return 0;
}
