
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ header_len; } ;
struct xfrm_state {TYPE_2__ props; } ;
struct xfrm_offload {size_t proto; } ;
struct sk_buff {int transport_header; } ;
struct TYPE_3__ {struct sk_buff* (* gso_segment ) (struct sk_buff*,int ) ;} ;
struct net_offload {TYPE_1__ callbacks; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct net_offload* FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 struct xfrm_offload* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct xfrm_state *VAR_2,
         struct sk_buff *VAR_3,
         netdev_features_t VAR_4)
{
 const struct net_offload *VAR_5;
 struct sk_buff *VAR_6 = FUNC_0(-VAR_0);
 struct xfrm_offload *VAR_7 = FUNC_4(VAR_3);

 VAR_3->transport_header += VAR_2->props.header_len;
 VAR_5 = FUNC_2(VAR_1[VAR_7->proto]);
 if (FUNC_1(VAR_5 && VAR_5->callbacks.gso_segment))
  VAR_6 = VAR_5->callbacks.gso_segment(VAR_3, VAR_4);

 return VAR_6;
}
