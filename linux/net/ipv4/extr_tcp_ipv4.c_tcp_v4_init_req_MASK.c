
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct net {int dummy; } ;
struct inet_request_sock {int ireq_opt; } ;
struct TYPE_2__ {int saddr; int daddr; } ;


 int FUNC_0 (int ,int ) ;
 struct inet_request_sock* FUNC_1 (struct request_sock*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct request_sock*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct net* FUNC_6 (struct sock const*) ;
 int FUNC_7 (struct net*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct request_sock *VAR_0,
       const struct sock *VAR_1,
       struct sk_buff *VAR_2)
{
 struct inet_request_sock *VAR_3 = FUNC_1(VAR_0);
 struct net *VAR_4 = FUNC_6(VAR_1);

 FUNC_5(FUNC_3(VAR_0), FUNC_2(VAR_2)->daddr);
 FUNC_4(FUNC_3(VAR_0), FUNC_2(VAR_2)->saddr);
 FUNC_0(VAR_3->ireq_opt, FUNC_7(VAR_4, VAR_2));
}
