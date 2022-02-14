
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ encapsulation; } ;
struct net_device {scalar_t__ gso_max_segs; int gso_partial_features; } ;
struct iphdr {int frag_off; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {scalar_t__ gso_segs; int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 struct iphdr* FUNC_2 (struct sk_buff const*) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static netdev_features_t FUNC_4(const struct sk_buff *VAR_5,
         struct net_device *VAR_6,
         netdev_features_t VAR_7)
{
 u16 VAR_8 = FUNC_3(VAR_5)->gso_segs;

 if (VAR_8 > VAR_6->gso_max_segs)
  return VAR_7 & ~VAR_1;







 if (!(FUNC_3(VAR_5)->gso_type & VAR_3))
  VAR_7 &= ~VAR_6->gso_partial_features;




 if (FUNC_3(VAR_5)->gso_type & VAR_4) {
  struct iphdr *VAR_9 = VAR_5->encapsulation ?
        FUNC_1(VAR_5) : FUNC_2(VAR_5);

  if (!(VAR_9->frag_off & FUNC_0(VAR_0)))
   VAR_7 &= ~VAR_2;
 }

 return VAR_7;
}
