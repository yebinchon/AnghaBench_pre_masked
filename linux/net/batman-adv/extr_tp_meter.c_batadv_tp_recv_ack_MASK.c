
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ data; } ;
struct batadv_unicast_packet {int dummy; } ;
struct batadv_tp_vars {size_t recover; int fast_recovery; size_t last_sent; int ss_threshold; int cwnd; int more_bytes; int last_acked; TYPE_1__* net_dev; int dup_acks; int tot_sent; int cwnd_lock; scalar_t__ dec_cwnd; int sending; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {size_t recover; int fast_recovery; size_t last_sent; int ss_threshold; int cwnd; int more_bytes; int last_acked; TYPE_1__* net_dev; int dup_acks; int tot_sent; int cwnd_lock; scalar_t__ dec_cwnd; int sending; } ;
struct batadv_icmp_tp_packet {int uid; int session; scalar_t__ seqno; scalar_t__ timestamp; int orig; } ;
struct batadv_hard_iface {size_t recover; int fast_recovery; size_t last_sent; int ss_threshold; int cwnd; int more_bytes; int last_acked; TYPE_1__* net_dev; int dup_acks; int tot_sent; int cwnd_lock; scalar_t__ dec_cwnd; int sending; } ;
struct TYPE_2__ {unsigned char* dev_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,struct batadv_priv*,char*,int,int,size_t,size_t) ;
 int FUNC_5 (struct batadv_tp_vars*) ;
 struct batadv_tp_vars* FUNC_6 (struct batadv_priv*,int ) ;
 int FUNC_7 (struct batadv_tp_vars*) ;
 struct batadv_tp_vars* FUNC_8 (struct batadv_priv*) ;
 scalar_t__ FUNC_9 (size_t,size_t) ;
 void* FUNC_10 (int,size_t,size_t) ;
 struct batadv_tp_vars* FUNC_11 (struct batadv_priv*,int ,int ) ;
 int FUNC_12 (struct batadv_tp_vars*) ;
 int FUNC_13 (struct batadv_tp_vars*,unsigned char*,struct batadv_tp_vars*,size_t,size_t,int ,int ,size_t) ;
 int FUNC_14 (struct batadv_tp_vars*,size_t) ;
 int FUNC_15 (struct batadv_tp_vars*,size_t) ;
 int FUNC_16 (struct batadv_tp_vars*) ;
 int VAR_2 ;
 size_t FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct batadv_tp_vars*) ;
 size_t FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(struct batadv_priv *VAR_3,
          const struct sk_buff *VAR_4)
{
 struct batadv_hard_iface *VAR_5 = ((void*)0);
 struct batadv_orig_node *VAR_6 = ((void*)0);
 const struct batadv_icmp_tp_packet *VAR_7;
 struct batadv_tp_vars *VAR_8;
 size_t VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 unsigned char *VAR_14;

 VAR_9 = VAR_1;
 VAR_10 = VAR_1;
 VAR_9 += sizeof(struct batadv_unicast_packet);

 VAR_7 = (struct batadv_icmp_tp_packet *)VAR_4->data;


 VAR_8 = FUNC_11(VAR_3, VAR_7->orig,
           VAR_7->session);
 if (FUNC_22(!VAR_8))
  return;

 if (FUNC_22(FUNC_2(&VAR_8->sending) == 0))
  goto out;


 if (FUNC_9(FUNC_19(VAR_7->seqno),
         (u32)FUNC_2(&VAR_8->last_acked)))
  goto out;

 VAR_5 = FUNC_8(VAR_3);
 if (FUNC_22(!VAR_5))
  goto out;

 VAR_6 = FUNC_6(VAR_3, VAR_7->orig);
 if (FUNC_22(!VAR_6))
  goto out;


 VAR_11 = FUNC_17(VAR_2) - FUNC_19(VAR_7->timestamp);
 if (VAR_7->timestamp && VAR_11)
  FUNC_15(VAR_8, VAR_11);


 FUNC_12(VAR_8);

 VAR_12 = FUNC_19(VAR_7->seqno);


 if (FUNC_2(&VAR_8->last_acked) == VAR_12) {
  FUNC_1(&VAR_8->dup_acks);
  if (FUNC_2(&VAR_8->dup_acks) != 3)
   goto out;

  if (VAR_12 >= VAR_8->recover)
   goto out;


  FUNC_13(VAR_8, VAR_5->net_dev->dev_addr,
       VAR_6, VAR_12, VAR_9,
       VAR_7->session, VAR_7->uid,
       FUNC_17(VAR_2));

  FUNC_20(&VAR_8->cwnd_lock);


  VAR_8->fast_recovery = 1;



  VAR_8->recover = VAR_8->last_sent;
  VAR_8->ss_threshold = VAR_8->cwnd >> 1;
  FUNC_4(VAR_0, VAR_3,
      "Meter: Fast Recovery, (cur cwnd=%u) ss_thr=%u last_sent=%u recv_ack=%u\n",
      VAR_8->cwnd, VAR_8->ss_threshold,
      VAR_8->last_sent, VAR_12);
  VAR_8->cwnd = FUNC_10(VAR_8->ss_threshold, 3 * VAR_10,
            VAR_10);
  VAR_8->dec_cwnd = 0;
  VAR_8->last_sent = VAR_12;

  FUNC_21(&VAR_8->cwnd_lock);
 } else {

  FUNC_0(VAR_12 - FUNC_2(&VAR_8->last_acked),
        &VAR_8->tot_sent);

  FUNC_3(&VAR_8->dup_acks, 0);

  if (VAR_8->fast_recovery) {

   if (FUNC_9(VAR_12, VAR_8->recover)) {




    VAR_14 = VAR_5->net_dev->dev_addr;
    FUNC_13(VAR_8, VAR_14,
         VAR_6, VAR_12,
         VAR_9, VAR_7->session,
         VAR_7->uid,
         FUNC_17(VAR_2));
    VAR_8->cwnd = FUNC_10(VAR_8->cwnd,
              VAR_10, VAR_10);
   } else {
    VAR_8->fast_recovery = 0;




    VAR_13 = FUNC_10(VAR_8->ss_threshold, 0,
            VAR_10);
    VAR_8->cwnd = VAR_13;
   }
   goto move_twnd;
  }

  if (VAR_12 - FUNC_2(&VAR_8->last_acked) >= VAR_10)
   FUNC_14(VAR_8, VAR_10);
move_twnd:

  FUNC_3(&VAR_8->last_acked, VAR_12);
 }

 FUNC_23(&VAR_8->more_bytes);
out:
 if (FUNC_18(VAR_5))
  FUNC_5(VAR_5);
 if (FUNC_18(VAR_6))
  FUNC_7(VAR_6);
 if (FUNC_18(VAR_8))
  FUNC_16(VAR_8);
}
