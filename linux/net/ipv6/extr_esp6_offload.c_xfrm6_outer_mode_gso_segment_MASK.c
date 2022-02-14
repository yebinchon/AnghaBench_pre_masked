
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encap; } ;
struct xfrm_state {TYPE_1__ outer_mode; } ;
struct sk_buff {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;


 struct sk_buff* FUNC_1 (struct xfrm_state*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (struct xfrm_state*,struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct xfrm_state *VAR_1,
          struct sk_buff *VAR_2,
          netdev_features_t VAR_3)
{
 switch (VAR_1->outer_mode.encap) {
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return FUNC_0(-VAR_0);
}
