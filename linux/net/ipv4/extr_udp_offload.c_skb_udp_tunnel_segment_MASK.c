
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int inner_protocol_type; size_t inner_ipproto; int inner_protocol; int protocol; } ;
struct TYPE_2__ {struct sk_buff* (* gso_segment ) (struct sk_buff*,int ) ;} ;
struct net_offload {TYPE_1__ callbacks; } ;
typedef int netdev_features_t ;
typedef int __be16 ;


 int VAR_0 ;


 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ,struct sk_buff* (*) (struct sk_buff*,int ),int ,int) ;
 struct net_offload** VAR_1 ;
 struct net_offload** VAR_2 ;
 struct net_offload* FUNC_2 (struct net_offload const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_6(struct sk_buff *VAR_3,
           netdev_features_t VAR_4,
           bool VAR_5)
{
 __be16 VAR_6 = VAR_3->protocol;
 const struct net_offload **VAR_7;
 const struct net_offload *VAR_8;
 struct sk_buff *VAR_9 = FUNC_0(-VAR_0);
 struct sk_buff *(*VAR_10)(struct sk_buff *VAR_11,
          netdev_features_t VAR_12);

 FUNC_3();

 switch (VAR_3->inner_protocol_type) {
 case 129:
  VAR_6 = VAR_3->inner_protocol;
  VAR_10 = FUNC_5;
  break;
 case 128:
  VAR_7 = VAR_5 ? VAR_1 : VAR_2;
  VAR_8 = FUNC_2(VAR_7[VAR_3->inner_ipproto]);
  if (!VAR_8 || !VAR_8->callbacks.gso_segment)
   goto out_unlock;
  VAR_10 = VAR_8->callbacks.gso_segment;
  break;
 default:
  goto out_unlock;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_10,
     VAR_6, VAR_5);

out_unlock:
 FUNC_4();

 return VAR_9;
}
