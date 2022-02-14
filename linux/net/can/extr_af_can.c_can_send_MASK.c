
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int pkt_type; void* ip_summed; int sk; TYPE_3__* dev; void* protocol; scalar_t__ data; } ;
struct canfd_frame {scalar_t__ len; } ;
struct can_pkg_stats {int tx_frames_delta; int tx_frames; } ;
struct TYPE_6__ {scalar_t__ mtu; scalar_t__ type; int flags; } ;
struct TYPE_4__ {struct can_pkg_stats* pkg_stats; } ;
struct TYPE_5__ {TYPE_1__ can; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
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
 int FUNC_0 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct sk_buff *VAR_19, int VAR_20)
{
 struct sk_buff *VAR_21 = ((void*)0);
 struct canfd_frame *VAR_22 = (struct canfd_frame *)VAR_19->data;
 struct can_pkg_stats *VAR_23 = FUNC_1(VAR_19->dev)->can.pkg_stats;
 int VAR_24 = -VAR_6;

 if (VAR_19->len == VAR_4) {
  VAR_19->protocol = FUNC_3(VAR_11);
  if (FUNC_11(VAR_22->len > VAR_3))
   goto inval_skb;
 } else if (VAR_19->len == VAR_2) {
  VAR_19->protocol = FUNC_3(VAR_12);
  if (FUNC_11(VAR_22->len > VAR_1))
   goto inval_skb;
 } else {
  goto inval_skb;
 }





 if (FUNC_11(VAR_19->len > VAR_19->dev->mtu && VAR_22->len > VAR_3)) {
  VAR_24 = -VAR_7;
  goto inval_skb;
 }

 if (FUNC_11(VAR_19->dev->type != VAR_0)) {
  VAR_24 = -VAR_10;
  goto inval_skb;
 }

 if (FUNC_11(!(VAR_19->dev->flags & VAR_15))) {
  VAR_24 = -VAR_8;
  goto inval_skb;
 }

 VAR_19->ip_summed = VAR_5;

 FUNC_8(VAR_19);
 FUNC_9(VAR_19);
 FUNC_10(VAR_19);

 if (VAR_20) {



  VAR_19->pkt_type = VAR_18;
  if (!(VAR_19->dev->flags & VAR_14)) {



   VAR_21 = FUNC_7(VAR_19, VAR_13);
   if (!VAR_21) {
    FUNC_4(VAR_19);
    return -VAR_9;
   }

   FUNC_0(VAR_21, VAR_19->sk);
   VAR_21->ip_summed = VAR_5;
   VAR_21->pkt_type = VAR_16;
  }
 } else {

  VAR_19->pkt_type = VAR_17;
 }


 VAR_24 = FUNC_2(VAR_19);
 if (VAR_24 > 0)
  VAR_24 = FUNC_5(VAR_24);

 if (VAR_24) {
  FUNC_4(VAR_21);
  return VAR_24;
 }

 if (VAR_21)
  FUNC_6(VAR_21);


 VAR_23->tx_frames++;
 VAR_23->tx_frames_delta++;

 return 0;

inval_skb:
 FUNC_4(VAR_19);
 return VAR_24;
}
