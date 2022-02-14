
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; scalar_t__ data; struct net_device* dev; } ;
struct net_device {int broadcast; int dev_addr; } ;
struct ethhdr {int h_proto; int h_dest; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 unsigned short* FUNC_7 (struct sk_buff*,int ,int,unsigned short*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__be16 FUNC_11(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 unsigned short VAR_9;
 const unsigned short *VAR_10;
 const struct ethhdr *VAR_11;

 VAR_7->dev = VAR_8;
 FUNC_9(VAR_7);

 VAR_11 = (struct ethhdr *)VAR_7->data;
 FUNC_8(VAR_7, VAR_0);

 if (FUNC_10(!FUNC_2(VAR_11->h_dest,
           VAR_8->dev_addr))) {
  if (FUNC_10(FUNC_4(VAR_11->h_dest))) {
   if (FUNC_2(VAR_11->h_dest, VAR_8->broadcast))
    VAR_7->pkt_type = VAR_4;
   else
    VAR_7->pkt_type = VAR_5;
  } else {
   VAR_7->pkt_type = VAR_6;
  }
 }
 if (FUNC_10(FUNC_6(VAR_8)) && FUNC_0(VAR_7, VAR_8))
  return FUNC_3(VAR_3);

 if (FUNC_5(FUNC_1(VAR_11->h_proto)))
  return VAR_11->h_proto;







 VAR_10 = FUNC_7(VAR_7, 0, sizeof(*VAR_10), &VAR_9);
 if (VAR_10 && *VAR_10 == 0xFFFF)
  return FUNC_3(VAR_2);




 return FUNC_3(VAR_1);
}
