
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct net {int dummy; } ;
struct ip_options {int optlen; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ,int ) ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct net *VAR_2, struct sock *VAR_3,
          struct sk_buff *VAR_4)
{
 struct ip_options *VAR_5 = &(FUNC_0(VAR_4)->opt);

 FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1, VAR_4->len);

 if (FUNC_5(VAR_5->optlen))
  FUNC_4(VAR_4);

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
