
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_conf_rsp {int dummy; } ;
struct l2cap_chan {int conf_state; int ident; int conn; TYPE_1__* hs_hcon; struct hci_chan* hs_hchan; } ;
struct hci_chan {int dummy; } ;
struct TYPE_2__ {int l2cap_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_conf_rsp*,int ,int ) ;
 int FUNC_4 (struct l2cap_chan*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct l2cap_chan *VAR_1,
     struct hci_chan *VAR_2)
{
 struct l2cap_conf_rsp VAR_3;

 VAR_1->hs_hchan = VAR_2;
 VAR_1->hs_hcon->l2cap_data = VAR_1->conn;

 FUNC_3(VAR_1, &VAR_3, VAR_1->ident, 0);

 if (FUNC_5(VAR_0, &VAR_1->conf_state)) {
  int VAR_4;

  FUNC_4(VAR_1);

  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 < 0)
   FUNC_2(VAR_1, -VAR_4);
  else
   FUNC_0(VAR_1);
 }
}
