
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct l2cap_ctrl {int sframe; scalar_t__ reqseq; int super; } ;
struct l2cap_chan {scalar_t__ expected_tx_seq; int srej_list; int srej_q; } ;
typedef int control ;


 int FUNC_0 (char*,struct l2cap_chan*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct l2cap_ctrl*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct l2cap_chan *VAR_1, u16 VAR_2)
{
 struct l2cap_ctrl VAR_3;
 u16 VAR_4;

 FUNC_0("chan %p, txseq %u", VAR_1, VAR_2);

 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sframe = 1;
 VAR_3.super = VAR_0;

 for (VAR_4 = VAR_1->expected_tx_seq; VAR_4 != VAR_2;
      VAR_4 = FUNC_1(VAR_1, VAR_4)) {
  if (!FUNC_2(&VAR_1->srej_q, VAR_4)) {
   VAR_3.reqseq = VAR_4;
   FUNC_3(VAR_1, &VAR_3);
   FUNC_4(&VAR_1->srej_list, VAR_4);
  }
 }

 VAR_1->expected_tx_seq = FUNC_1(VAR_1, VAR_2);
}
