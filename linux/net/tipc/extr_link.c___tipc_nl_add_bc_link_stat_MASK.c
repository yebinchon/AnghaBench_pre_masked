
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_stats {int recv_pkts; int recv_fragments; int recv_fragmented; int recv_bundles; int recv_bundled; int sent_pkts; int sent_fragments; int sent_fragmented; int sent_bundles; int sent_bundled; int recv_nacks; int deferred_recv; int sent_nacks; int sent_acks; int retransmitted; int duplicates; int link_congs; int max_queue_sz; int queue_sz_counts; int accu_queue_sz; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct nla_map*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_21,
          struct tipc_stats *VAR_22)
{
 int VAR_23;
 struct nlattr *VAR_24;

 struct nla_map {
  __u32 key;
  __u32 val;
 };

 struct nla_map VAR_25[] = {
  {VAR_12, VAR_22->recv_pkts},
  {VAR_11, VAR_22->recv_fragments},
  {VAR_10, VAR_22->recv_fragmented},
  {VAR_8, VAR_22->recv_bundles},
  {VAR_7, VAR_22->recv_bundled},
  {VAR_19, VAR_22->sent_pkts},
  {VAR_18, VAR_22->sent_fragments},
  {VAR_17, VAR_22->sent_fragmented},
  {VAR_16, VAR_22->sent_bundles},
  {VAR_15, VAR_22->sent_bundled},
  {VAR_13, VAR_22->recv_nacks},
  {VAR_9, VAR_22->deferred_recv},
  {VAR_20, VAR_22->sent_nacks},
  {VAR_14, VAR_22->sent_acks},
  {VAR_6, VAR_22->retransmitted},
  {VAR_3, VAR_22->duplicates},
  {VAR_4, VAR_22->link_congs},
  {VAR_5, VAR_22->max_queue_sz},
  {VAR_2, VAR_22->queue_sz_counts ?
   (VAR_22->accu_queue_sz / VAR_22->queue_sz_counts) : 0}
 };

 VAR_24 = FUNC_3(VAR_21, VAR_1);
 if (!VAR_24)
  return -VAR_0;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_25); VAR_23++)
  if (FUNC_4(VAR_21, VAR_25[VAR_23].key, VAR_25[VAR_23].val))
   goto msg_full;

 FUNC_2(VAR_21, VAR_24);

 return 0;
msg_full:
 FUNC_1(VAR_21, VAR_24);

 return -VAR_0;
}
