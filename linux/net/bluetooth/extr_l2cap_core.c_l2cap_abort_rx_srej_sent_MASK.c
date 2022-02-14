
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int rx_state; int srej_q; int srej_list; int buffer_seq; int expected_tx_seq; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_1)
{
 FUNC_0("chan %p", VAR_1);

 VAR_1->expected_tx_seq = VAR_1->buffer_seq;
 FUNC_1(&VAR_1->srej_list);
 FUNC_2(&VAR_1->srej_q);
 VAR_1->rx_state = VAR_0;
}
