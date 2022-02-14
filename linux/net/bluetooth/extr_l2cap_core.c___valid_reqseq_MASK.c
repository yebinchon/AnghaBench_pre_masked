
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct l2cap_chan {scalar_t__ expected_ack_seq; int next_tx_seq; } ;


 scalar_t__ FUNC_0 (struct l2cap_chan*,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct l2cap_chan *VAR_0, u16 VAR_1)
{

 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->next_tx_seq, VAR_0->expected_ack_seq);
 return FUNC_0(VAR_0, VAR_0->next_tx_seq, VAR_1) <= VAR_2;
}
