
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct netns_ipvs {struct net* net; } ;
struct net {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct dst_entry {int dev; } ;
struct TYPE_5__ {int ttl; } ;
struct TYPE_4__ {int hop_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,int ) ;
 struct inet6_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 struct dst_entry* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static inline bool FUNC_10(struct netns_ipvs *VAR_6,
     int VAR_7,
     struct sk_buff *VAR_8)
{
 struct net *VAR_9 = VAR_6->net;
 {
  if (FUNC_6(VAR_8)->ttl <= 1) {

   FUNC_1(VAR_9, VAR_5);
   FUNC_3(VAR_8, VAR_4, VAR_3, 0);
   return 0;
  }


  if (FUNC_9(VAR_8, sizeof(struct iphdr)))
   return 0;


  FUNC_5(FUNC_6(VAR_8));
 }

 return 1;
}
