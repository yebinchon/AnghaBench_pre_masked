
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct xfrm_state* xfrm; } ;


 int FUNC_0 (struct xfrm_state*,struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct xfrm_state *VAR_3 = FUNC_1(VAR_2)->xfrm;

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
