
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int state; void* omtu; void* mps; void* remote_mps; scalar_t__ conf_state; int mode; int tx_q; int monitor_timeout; int retrans_timeout; int tx_win; int remote_tx_win; int max_tx; int remote_max_tx; int * ops; int flush_to; void* imtu; void* dcid; void* scid; int chan_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct l2cap_chan*) ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct l2cap_conn*,struct l2cap_chan*) ;
 int VAR_8 ;
 int FUNC_2 (struct l2cap_conn*,struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_3 () ;
 int FUNC_4 (struct l2cap_chan*,int ) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct l2cap_chan *FUNC_8(struct l2cap_conn *VAR_9, bool VAR_10)
{
 struct l2cap_chan *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3();
 if (!VAR_11)
  return ((void*)0);

 FUNC_0("chan %p", VAR_11);

 VAR_11->chan_type = VAR_2;
 VAR_11->scid = VAR_3;
 VAR_11->dcid = VAR_3;
 VAR_11->omtu = VAR_1;
 VAR_11->imtu = VAR_1;
 VAR_11->flush_to = VAR_4;

 VAR_11->ops = &VAR_8;

 FUNC_5(VAR_11);
 VAR_11->remote_max_tx = VAR_11->max_tx;
 VAR_11->remote_tx_win = VAR_11->tx_win;

 VAR_11->retrans_timeout = VAR_6;
 VAR_11->monitor_timeout = VAR_5;

 FUNC_7(&VAR_11->tx_q);

 VAR_11->mode = VAR_7;

 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12 < 0) {
  FUNC_4(VAR_11, 0);
  return ((void*)0);
 }

 VAR_11->conf_state = 0;

 if (VAR_10)
  FUNC_1(VAR_9, VAR_11);
 else
  FUNC_2(VAR_9, VAR_11);

 VAR_11->remote_mps = VAR_11->omtu;
 VAR_11->mps = VAR_11->omtu;

 VAR_11->state = VAR_0;

 return VAR_11;
}
