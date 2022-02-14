
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ mode; int srej_list; int remote_tx_win; int retrans_list; int tx_win; int srej_q; int ack_timer; int monitor_timer; int retrans_timer; int tx_state; int rx_state; int move_role; int move_state; void* move_id; void* local_amp_id; int tx_q; scalar_t__ sdu_len; int * sdu_last_frag; int * sdu; scalar_t__ last_acked_seq; scalar_t__ frames_sent; scalar_t__ buffer_seq; scalar_t__ unacked_frames; scalar_t__ expected_ack_seq; scalar_t__ expected_tx_seq; scalar_t__ next_tx_seq; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct l2cap_chan *VAR_9)
{
 int VAR_10;

 VAR_9->next_tx_seq = 0;
 VAR_9->expected_tx_seq = 0;
 VAR_9->expected_ack_seq = 0;
 VAR_9->unacked_frames = 0;
 VAR_9->buffer_seq = 0;
 VAR_9->frames_sent = 0;
 VAR_9->last_acked_seq = 0;
 VAR_9->sdu = ((void*)0);
 VAR_9->sdu_last_frag = ((void*)0);
 VAR_9->sdu_len = 0;

 FUNC_3(&VAR_9->tx_q);

 VAR_9->local_amp_id = VAR_0;
 VAR_9->move_id = VAR_0;
 VAR_9->move_state = VAR_3;
 VAR_9->move_role = VAR_2;

 if (VAR_9->mode != VAR_1)
  return 0;

 VAR_9->rx_state = VAR_4;
 VAR_9->tx_state = VAR_5;

 FUNC_0(&VAR_9->retrans_timer, VAR_8);
 FUNC_0(&VAR_9->monitor_timer, VAR_7);
 FUNC_0(&VAR_9->ack_timer, VAR_6);

 FUNC_3(&VAR_9->srej_q);

 VAR_10 = FUNC_2(&VAR_9->srej_list, VAR_9->tx_win);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->retrans_list, VAR_9->remote_tx_win);
 if (VAR_10 < 0)
  FUNC_1(&VAR_9->srej_list);

 return VAR_10;
}
