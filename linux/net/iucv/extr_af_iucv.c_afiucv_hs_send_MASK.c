
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_type; } ;
struct sk_buff {scalar_t__ len; int protocol; TYPE_1__* dev; } ;
struct iucv_sock {int msglimit; int msg_recv; int send_skb_q; TYPE_1__* hs_dev; struct iucv_message* src_name; struct iucv_message* src_user_id; struct iucv_message* dst_name; struct iucv_message* dst_user_id; } ;
struct iucv_message {int dummy; } ;
struct af_iucv_trans_hdr {int version; scalar_t__ flags; int window; int iucv_hdr; int * srcAppName; int * srcUserID; int * destAppName; int * destUserID; int magic; } ;
struct TYPE_3__ {int flags; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,TYPE_1__*,int ,int *,int *,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 struct iucv_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *,struct iucv_message*,int) ;
 int FUNC_11 (struct af_iucv_trans_hdr*,int ,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 struct af_iucv_trans_hdr* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_20(struct iucv_message *VAR_10, struct sock *VAR_11,
     struct sk_buff *VAR_12, u8 VAR_13)
{
 struct iucv_sock *VAR_14 = FUNC_8(VAR_11);
 struct af_iucv_trans_hdr *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18 = 0;

 VAR_15 = FUNC_15(VAR_12, sizeof(*VAR_15));
 FUNC_11(VAR_15, 0, sizeof(*VAR_15));
 FUNC_17(VAR_12);

 VAR_15->magic = VAR_6;
 VAR_15->version = 1;
 VAR_15->flags = VAR_13;
 if (VAR_13 == VAR_0)
  VAR_15->window = VAR_14->msglimit;
 else if ((VAR_13 == VAR_1) || !VAR_13) {
  VAR_18 = FUNC_3(&VAR_14->msg_recv);
  VAR_15->window = VAR_18;
  if (VAR_18)
   VAR_15->flags = VAR_15->flags | VAR_1;
 }
 FUNC_10(VAR_15->destUserID, VAR_14->dst_user_id, 8);
 FUNC_10(VAR_15->destAppName, VAR_14->dst_name, 8);
 FUNC_10(VAR_15->srcUserID, VAR_14->src_user_id, 8);
 FUNC_10(VAR_15->srcAppName, VAR_14->src_name, 8);
 FUNC_0(VAR_15->destUserID, sizeof(VAR_15->destUserID));
 FUNC_0(VAR_15->destAppName, sizeof(VAR_15->destAppName));
 FUNC_0(VAR_15->srcUserID, sizeof(VAR_15->srcUserID));
 FUNC_0(VAR_15->srcAppName, sizeof(VAR_15->srcAppName));
 if (VAR_10)
  FUNC_10(&VAR_15->iucv_hdr, VAR_10, sizeof(struct iucv_message));

 VAR_12->dev = VAR_14->hs_dev;
 if (!VAR_12->dev) {
  VAR_17 = -VAR_4;
  goto err_free;
 }

 FUNC_6(VAR_12, VAR_12->dev, VAR_6, ((void*)0), ((void*)0), VAR_12->len);

 if (!(VAR_12->dev->flags & VAR_8) || !FUNC_13(VAR_12->dev)) {
  VAR_17 = -VAR_3;
  goto err_free;
 }
 if (VAR_12->len > VAR_12->dev->mtu) {
  if (VAR_11->sk_type == VAR_9) {
   VAR_17 = -VAR_2;
   goto err_free;
  }
  FUNC_18(VAR_12, VAR_12->dev->mtu);
 }
 VAR_12->protocol = FUNC_5(VAR_6);

 FUNC_2(VAR_12);
 VAR_16 = FUNC_14(VAR_12, VAR_7);
 if (!VAR_16) {
  VAR_17 = -VAR_5;
  goto err_free;
 }

 FUNC_16(&VAR_14->send_skb_q, VAR_16);
 VAR_17 = FUNC_7(VAR_12);
 if (FUNC_12(VAR_17)) {
  FUNC_19(VAR_16, &VAR_14->send_skb_q);
  FUNC_9(VAR_16);
 } else {
  FUNC_4(VAR_18, &VAR_14->msg_recv);
  FUNC_1(FUNC_3(&VAR_14->msg_recv) < 0);
 }
 return FUNC_12(VAR_17);

err_free:
 FUNC_9(VAR_12);
 return VAR_17;
}
