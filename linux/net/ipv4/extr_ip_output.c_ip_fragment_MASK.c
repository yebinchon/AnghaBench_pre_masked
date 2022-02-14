
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
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct net*,struct sock*,struct sk_buff*,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_5, struct sock *VAR_6, struct sk_buff *VAR_7,
         unsigned int VAR_8,
         int (*VAR_9)(struct net *, struct sock *, struct sk_buff *))
{
 struct iphdr *VAR_10 = FUNC_6(VAR_7);

 if ((VAR_10->frag_off & FUNC_3(VAR_4)) == 0)
  return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_9);

 if (FUNC_8(!VAR_7->ignore_df ||
       (FUNC_0(VAR_7)->frag_max_size &&
        FUNC_0(VAR_7)->frag_max_size > VAR_8))) {
  FUNC_1(VAR_5, VAR_3);
  FUNC_4(VAR_7, VAR_1, VAR_2,
     FUNC_2(VAR_8));
  FUNC_7(VAR_7);
  return -VAR_0;
 }

 return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_9);
}
