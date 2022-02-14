
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_stats {int recv_fragments; int recv_fragmented; int recv_bundles; int recv_bundled; int sent_fragments; int sent_fragmented; int sent_bundles; int sent_bundled; int msg_length_counts; int msg_lengths_total; int* msg_length_profile; int recv_states; int recv_probes; int recv_nacks; int deferred_recv; int sent_states; int sent_probes; int sent_nacks; int sent_acks; int retransmitted; int duplicates; int link_congs; int max_queue_sz; int queue_sz_counts; int accu_queue_sz; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_35, struct tipc_stats *VAR_36)
{
 int VAR_37;
 struct nlattr *VAR_38;

 struct nla_map {
  u32 key;
  u32 val;
 };

 struct nla_map VAR_39[] = {
  {VAR_22, 0},
  {VAR_21, VAR_36->recv_fragments},
  {VAR_20, VAR_36->recv_fragmented},
  {VAR_18, VAR_36->recv_bundles},
  {VAR_17, VAR_36->recv_bundled},
  {VAR_31, 0},
  {VAR_30, VAR_36->sent_fragments},
  {VAR_29, VAR_36->sent_fragmented},
  {VAR_28, VAR_36->sent_bundles},
  {VAR_27, VAR_36->sent_bundled},
  {VAR_15, (VAR_36->msg_length_counts) ?
   VAR_36->msg_length_counts : 1},
  {VAR_6, VAR_36->msg_length_counts},
  {VAR_14, VAR_36->msg_lengths_total},
  {VAR_7, VAR_36->msg_length_profile[0]},
  {VAR_8, VAR_36->msg_length_profile[1]},
  {VAR_9, VAR_36->msg_length_profile[2]},
  {VAR_10, VAR_36->msg_length_profile[3]},
  {VAR_11, VAR_36->msg_length_profile[4]},
  {VAR_12, VAR_36->msg_length_profile[5]},
  {VAR_13, VAR_36->msg_length_profile[6]},
  {VAR_25, VAR_36->recv_states},
  {VAR_24, VAR_36->recv_probes},
  {VAR_23, VAR_36->recv_nacks},
  {VAR_19, VAR_36->deferred_recv},
  {VAR_34, VAR_36->sent_states},
  {VAR_33, VAR_36->sent_probes},
  {VAR_32, VAR_36->sent_nacks},
  {VAR_26, VAR_36->sent_acks},
  {VAR_16, VAR_36->retransmitted},
  {VAR_3, VAR_36->duplicates},
  {VAR_4, VAR_36->link_congs},
  {VAR_5, VAR_36->max_queue_sz},
  {VAR_2, VAR_36->queue_sz_counts ?
   (VAR_36->accu_queue_sz / VAR_36->queue_sz_counts) : 0}
 };

 VAR_38 = FUNC_3(VAR_35, VAR_1);
 if (!VAR_38)
  return -VAR_0;

 for (VAR_37 = 0; VAR_37 < FUNC_0(VAR_39); VAR_37++)
  if (FUNC_4(VAR_35, VAR_39[VAR_37].key, VAR_39[VAR_37].val))
   goto msg_full;

 FUNC_2(VAR_35, VAR_38);

 return 0;
msg_full:
 FUNC_1(VAR_35, VAR_38);

 return -VAR_0;
}
