
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct net {int dummy; } ;
struct TYPE_7__ {scalar_t__ frag_max_size; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ xfrm; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct net*,struct sock*,struct sk_buff*,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_1, struct sock *VAR_2, struct sk_buff *VAR_3)
{
 if ((VAR_3->len > FUNC_6(VAR_3) && !FUNC_8(VAR_3)) ||
     FUNC_2(FUNC_7(VAR_3)) ||
     (FUNC_0(VAR_3)->frag_max_size && VAR_3->len > FUNC_0(VAR_3)->frag_max_size))
  return FUNC_5(VAR_1, VAR_2, VAR_3, FUNC_4);
 else
  return FUNC_4(VAR_1, VAR_2, VAR_3);
}
