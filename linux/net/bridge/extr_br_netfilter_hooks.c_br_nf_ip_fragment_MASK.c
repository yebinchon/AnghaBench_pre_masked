
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int ignore_df; } ;
struct net {int dummy; } ;
struct iphdr {int frag_off; } ;
struct TYPE_2__ {unsigned int frag_max_size; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5,
    int (*VAR_6)(struct net *, struct sock *, struct sk_buff *))
{
 unsigned int VAR_7 = FUNC_5(VAR_4, VAR_5);
 struct iphdr *VAR_8 = FUNC_4(VAR_5);

 if (FUNC_7(((VAR_8->frag_off & FUNC_2(VAR_2)) && !VAR_5->ignore_df) ||
       (FUNC_0(VAR_5)->frag_max_size &&
        FUNC_0(VAR_5)->frag_max_size > VAR_7))) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_6(VAR_5);
  return -VAR_0;
 }

 return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
}
