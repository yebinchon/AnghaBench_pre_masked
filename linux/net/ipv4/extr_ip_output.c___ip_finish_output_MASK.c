
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ xfrm; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*,unsigned int,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 unsigned int FUNC_5 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 unsigned int VAR_5;
 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (FUNC_7(VAR_4))
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_4->len > VAR_5 || (FUNC_0(VAR_4)->flags & VAR_0))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, FUNC_2);

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
