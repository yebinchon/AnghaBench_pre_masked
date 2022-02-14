
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int flags; scalar_t__ conf_state; int monitor_timeout; int retrans_timeout; int flush_to; int sec_level; void* ack_win; void* tx_win; void* remote_tx_win; int max_tx; int remote_max_tx; void* tx_win_max; int fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct l2cap_chan *VAR_8)
{
 VAR_8->fcs = VAR_7;
 VAR_8->max_tx = VAR_3;
 VAR_8->tx_win = VAR_6;
 VAR_8->tx_win_max = VAR_6;
 VAR_8->remote_max_tx = VAR_8->max_tx;
 VAR_8->remote_tx_win = VAR_8->tx_win;
 VAR_8->ack_win = VAR_6;
 VAR_8->sec_level = VAR_0;
 VAR_8->flush_to = VAR_2;
 VAR_8->retrans_timeout = VAR_5;
 VAR_8->monitor_timeout = VAR_4;
 VAR_8->conf_state = 0;

 FUNC_0(VAR_1, &VAR_8->flags);
}
