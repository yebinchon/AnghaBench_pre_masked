
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vlan_ethhdr {int* h_dest; int h_vlan_TCI; int h_vlan_proto; } ;
struct sk_buff {int offload_fwd_mark; int dev; scalar_t__ priority; } ;
struct sja1105_meta {int source_port; int switch_id; int member_0; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct sja1105_meta*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,struct sja1105_meta*,int,int) ;
 struct vlan_ethhdr* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct sk_buff *VAR_4,
       struct net_device *VAR_5,
       struct packet_type *VAR_6)
{
 struct sja1105_meta VAR_7 = {0};
 int VAR_8, VAR_9;
 struct vlan_ethhdr *VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 bool VAR_14;
 bool VAR_15;
 bool VAR_16;

 VAR_10 = FUNC_10(VAR_4);
 VAR_11 = FUNC_5(VAR_10->h_vlan_proto);
 VAR_15 = (VAR_11 == VAR_0);
 VAR_14 = FUNC_6(VAR_4);
 VAR_16 = FUNC_7(VAR_4);

 VAR_4->offload_fwd_mark = 1;

 if (VAR_15) {

  VAR_13 = FUNC_5(VAR_10->h_vlan_TCI);
  VAR_12 = VAR_13 & VAR_3;
  VAR_8 = FUNC_1(VAR_12);
  VAR_9 = FUNC_2(VAR_12);
  VAR_4->priority = (VAR_13 & VAR_1) >> VAR_2;
 } else if (VAR_14) {




  VAR_8 = VAR_10->h_dest[3];
  VAR_9 = VAR_10->h_dest[4];

  VAR_10->h_dest[3] = 0;
  VAR_10->h_dest[4] = 0;
 } else if (VAR_16) {
  FUNC_8(VAR_4, &VAR_7);
  VAR_8 = VAR_7.source_port;
  VAR_9 = VAR_7.switch_id;
 } else {
  return ((void*)0);
 }

 VAR_4->dev = FUNC_3(VAR_5, VAR_9, VAR_8);
 if (!VAR_4->dev) {
  FUNC_4(VAR_5, "Couldn't decode source port\n");
  return ((void*)0);
 }




 if (VAR_15)
  VAR_4 = FUNC_0(VAR_4);

 return FUNC_9(VAR_4, &VAR_7, VAR_14,
           VAR_16);
}
