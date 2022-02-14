
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int (* sk_state_change ) (struct sock*) ;TYPE_2__* sk_socket; int sk_shutdown; int sk_err; int sk_state; } ;
struct sk_buff {int len; int* data; } ;
struct dn_skb_cb {scalar_t__ src_port; } ;
struct TYPE_3__ {int opt_data; void* opt_optl; void* opt_status; } ;
struct dn_scp {int state; int persist; int persist_fxn; scalar_t__ addrrem; TYPE_1__ discdata_in; } ;
typedef int __le16 ;
struct TYPE_4__ {scalar_t__ state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 unsigned short FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct sk_buff*,int,int ,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_13, struct sk_buff *VAR_14)
{
 struct dn_scp *VAR_15 = FUNC_0(VAR_13);
 struct dn_skb_cb *VAR_16 = FUNC_1(VAR_14);
 unsigned short VAR_17;

 if (VAR_14->len < 2)
  goto out;

 VAR_17 = FUNC_6(*(__le16 *)VAR_14->data);
 FUNC_9(VAR_14, 2);

 VAR_15->discdata_in.opt_status = FUNC_2(VAR_17);
 VAR_15->discdata_in.opt_optl = 0;
 FUNC_7(VAR_15->discdata_in.opt_data, 0, 16);

 if (VAR_14->len > 0) {
  u16 VAR_18 = *VAR_14->data;
  if ((VAR_18 <= 16) && (VAR_18 <= VAR_14->len)) {
   VAR_15->discdata_in.opt_optl = FUNC_2(VAR_18);
   FUNC_8(VAR_14, 1, VAR_15->discdata_in.opt_data, VAR_18);
  }
 }

 VAR_15->addrrem = VAR_16->src_port;
 VAR_13->sk_state = VAR_11;

 switch (VAR_15->state) {
 case 130:
 case 131:
  VAR_15->state = VAR_2;
  VAR_13->sk_err = VAR_3;
  break;
 case 128:
  VAR_13->sk_shutdown |= VAR_7;
  VAR_15->state = VAR_1;
  break;
 case 129:
  VAR_15->state = VAR_0;
  break;
 }

 if (!FUNC_10(VAR_13, VAR_8)) {
  if (VAR_13->sk_socket->state != VAR_10)
   VAR_13->sk_socket->state = VAR_9;
  VAR_13->sk_state_change(VAR_13);
 }







 if (VAR_15->addrrem) {
  FUNC_4(VAR_13, VAR_5, VAR_6, VAR_4);
 }
 VAR_15->persist_fxn = VAR_12;
 VAR_15->persist = FUNC_3(VAR_13);

out:
 FUNC_5(VAR_14);
}
