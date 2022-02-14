
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_type; } ;
struct l2cap_chan {int * ops; struct sock* data; int flush_to; int mode; int conf_state; scalar_t__ omtu; int imtu; int chan_type; int scid; int dcid; int rx_credits; int tx_credits; int flags; int sec_level; int tx_win_max; int tx_win; int max_tx; int fcs; } ;
struct TYPE_4__ {int skb_msg_name; int flags; } ;
struct TYPE_3__ {struct l2cap_chan* chan; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 TYPE_2__* FUNC_1 (struct sock*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct l2cap_chan*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int VAR_11 ;
 int FUNC_4 (struct sock*,struct sock*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_12, struct sock *VAR_13)
{
 struct l2cap_chan *VAR_14 = FUNC_3(VAR_12)->chan;

 FUNC_0("sk %p", VAR_12);

 if (VAR_13) {
  struct l2cap_chan *VAR_15 = FUNC_3(VAR_13)->chan;

  VAR_12->sk_type = VAR_13->sk_type;
  FUNC_1(VAR_12)->flags = FUNC_1(VAR_13)->flags;

  VAR_14->chan_type = VAR_15->chan_type;
  VAR_14->imtu = VAR_15->imtu;
  VAR_14->omtu = VAR_15->omtu;
  VAR_14->conf_state = VAR_15->conf_state;
  VAR_14->mode = VAR_15->mode;
  VAR_14->fcs = VAR_15->fcs;
  VAR_14->max_tx = VAR_15->max_tx;
  VAR_14->tx_win = VAR_15->tx_win;
  VAR_14->tx_win_max = VAR_15->tx_win_max;
  VAR_14->sec_level = VAR_15->sec_level;
  VAR_14->flags = VAR_15->flags;
  VAR_14->tx_credits = VAR_15->tx_credits;
  VAR_14->rx_credits = VAR_15->rx_credits;

  if (VAR_14->chan_type == VAR_3) {
   VAR_14->scid = VAR_15->scid;
   VAR_14->dcid = VAR_15->scid;
  }

  FUNC_4(VAR_13, VAR_12);
 } else {
  switch (VAR_12->sk_type) {
  case 130:
   VAR_14->chan_type = VAR_4;
   break;
  case 131:
   VAR_14->chan_type = VAR_1;
   FUNC_1(VAR_12)->skb_msg_name = VAR_11;
   break;
  case 129:
  case 128:
   VAR_14->chan_type = VAR_2;
   break;
  }

  VAR_14->imtu = VAR_6;
  VAR_14->omtu = 0;
  if (!VAR_9 && VAR_12->sk_type == 128) {
   VAR_14->mode = VAR_8;
   FUNC_5(VAR_0, &VAR_14->conf_state);
  } else {
   VAR_14->mode = VAR_7;
  }

  FUNC_2(VAR_14);
 }


 VAR_14->flush_to = VAR_5;

 VAR_14->data = VAR_12;
 VAR_14->ops = &VAR_10;
}
