
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_result {int classid; } ;
struct sk_buff {int tc_at_ingress; int mac_len; int tc_index; int len; TYPE_1__* dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct mini_Qdisc {int filter_list; } ;
struct TYPE_4__ {int pkt_len; } ;
struct TYPE_3__ {int miniq_ingress; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct packet_type*,struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct mini_Qdisc*,struct sk_buff*) ;
 int FUNC_6 (struct mini_Qdisc*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 struct mini_Qdisc* FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ,struct tcf_result*,int) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_11(struct sk_buff *VAR_0, struct packet_type **VAR_1, int *VAR_2,
     struct net_device *VAR_3)
{
 return VAR_0;
}
