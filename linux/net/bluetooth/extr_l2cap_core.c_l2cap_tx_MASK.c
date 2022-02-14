
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct l2cap_ctrl {int dummy; } ;
struct l2cap_chan {int tx_state; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff_head*,int ,int) ;


 int FUNC_1 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff_head*,int ) ;
 int FUNC_2 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff_head*,int ) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0, struct l2cap_ctrl *VAR_1,
       struct sk_buff_head *VAR_2, u8 VAR_3)
{
 FUNC_0("chan %p, control %p, skbs %p, event %d, state %d",
        VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->tx_state);

 switch (VAR_0->tx_state) {
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:

  break;
 }
}
