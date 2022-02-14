
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smp_chan {TYPE_1__* remote_irk; TYPE_1__* slave_ltk; TYPE_1__* ltk; int tfm_ecdh; int tfm_cmac; struct smp_chan* link_key; struct smp_chan* slave_csrk; struct smp_chan* csrk; int flags; int security_timer; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {int hdev; } ;
struct TYPE_2__ {scalar_t__ type; int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct smp_chan*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hci_conn*,int) ;
 int VAR_3 ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct l2cap_conn *VAR_4)
{
 struct l2cap_chan *VAR_5 = VAR_4->smp;
 struct smp_chan *VAR_6 = VAR_5->data;
 struct hci_conn *VAR_7 = VAR_4->hcon;
 bool VAR_8;

 FUNC_0(!VAR_6);

 FUNC_1(&VAR_6->security_timer);

 VAR_8 = FUNC_10(VAR_1, &VAR_6->flags);
 FUNC_9(VAR_7, VAR_8);

 FUNC_7(VAR_6->csrk);
 FUNC_7(VAR_6->slave_csrk);
 FUNC_7(VAR_6->link_key);

 FUNC_3(VAR_6->tfm_cmac);
 FUNC_2(VAR_6->tfm_ecdh);




 if (VAR_6->ltk && VAR_6->ltk->type == VAR_2 &&
     !FUNC_5(VAR_7->hdev, VAR_0)) {
  FUNC_8(&VAR_6->ltk->list);
  FUNC_6(VAR_6->ltk, VAR_3);
  VAR_6->ltk = ((void*)0);
 }


 if (!VAR_8) {
  if (VAR_6->ltk) {
   FUNC_8(&VAR_6->ltk->list);
   FUNC_6(VAR_6->ltk, VAR_3);
  }

  if (VAR_6->slave_ltk) {
   FUNC_8(&VAR_6->slave_ltk->list);
   FUNC_6(VAR_6->slave_ltk, VAR_3);
  }

  if (VAR_6->remote_irk) {
   FUNC_8(&VAR_6->remote_irk->list);
   FUNC_6(VAR_6->remote_irk, VAR_3);
  }
 }

 VAR_5->data = ((void*)0);
 FUNC_7(VAR_6);
 FUNC_4(VAR_7);
}
