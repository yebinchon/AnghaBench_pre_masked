
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct igmphdr {int type; int group; } ;
struct TYPE_6__ {int mrouters_only; int igmp; } ;
struct TYPE_5__ {unsigned char* h_source; } ;
struct TYPE_4__ {scalar_t__ protocol; int daddr; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,int ,int ,unsigned char const*) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*,int ) ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_port*,int ,int ,unsigned char const*) ;
 int FUNC_4 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*,int ) ;
 int FUNC_6 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*,int,int ) ;
 int FUNC_7 (struct net_bridge*,struct net_bridge_port*,int ) ;
 int FUNC_8 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 struct igmphdr* FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct net_bridge *VAR_3,
     struct net_bridge_port *VAR_4,
     struct sk_buff *VAR_5,
     u16 VAR_6)
{
 const unsigned char *VAR_7;
 struct igmphdr *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_12(VAR_5);

 if (VAR_9 == -VAR_1) {
  if (!FUNC_14(FUNC_11(VAR_5)->daddr)) {
   FUNC_0(VAR_5)->mrouters_only = 1;
  } else if (FUNC_15(FUNC_11(VAR_5)->daddr)) {
   if (FUNC_11(VAR_5)->protocol == VAR_2)
    FUNC_8(VAR_3, VAR_4, VAR_5);
  } else if (FUNC_13(FUNC_11(VAR_5)->daddr)) {
   FUNC_4(VAR_3, VAR_4, VAR_5);
  }

  return 0;
 } else if (VAR_9 < 0) {
  FUNC_7(VAR_3, VAR_4, VAR_5->protocol);
  return VAR_9;
 }

 VAR_8 = FUNC_10(VAR_5);
 VAR_7 = FUNC_9(VAR_5)->h_source;
 FUNC_0(VAR_5)->igmp = VAR_8->type;

 switch (VAR_8->type) {
 case 128:
 case 132:
  FUNC_0(VAR_5)->mrouters_only = 1;
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_8->group, VAR_6, VAR_7);
  break;
 case 131:
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 case 129:
  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 case 130:
  FUNC_3(VAR_3, VAR_4, VAR_8->group, VAR_6, VAR_7);
  break;
 }

 FUNC_6(VAR_3, VAR_4, VAR_5, FUNC_0(VAR_5)->igmp,
      VAR_0);

 return VAR_9;
}
