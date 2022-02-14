
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct sk_buff {int mac_len; } ;
typedef int netdev_features_t ;


 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct xfrm_state *VAR_0,
      struct sk_buff *VAR_1,
      netdev_features_t VAR_2)
{
 FUNC_0(VAR_1, VAR_1->mac_len);
 return FUNC_1(VAR_1, VAR_2);
}
