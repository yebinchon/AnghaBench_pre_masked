
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int priority; int len; } ;
struct l2cap_chan {TYPE_1__* conn; int flags; scalar_t__ hs_hchan; scalar_t__ hs_hcon; } ;
struct hci_conn {scalar_t__ type; int hdev; } ;
struct TYPE_4__ {scalar_t__ force_active; } ;
struct TYPE_3__ {scalar_t__ hchan; struct hci_conn* hcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct l2cap_chan*,struct sk_buff*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct l2cap_chan*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct l2cap_chan *VAR_6, struct sk_buff *VAR_7)
{
 struct hci_conn *VAR_8 = VAR_6->conn->hcon;
 u16 VAR_9;

 FUNC_0("chan %p, skb %p len %d priority %u", VAR_6, VAR_7, VAR_7->len,
        VAR_7->priority);

 if (VAR_6->hs_hcon && !FUNC_1(VAR_6)) {
  if (VAR_6->hs_hchan)
   FUNC_3(VAR_6->hs_hchan, VAR_7, VAR_0);
  else
   FUNC_4(VAR_7);

  return;
 }





 if (VAR_8->type == VAR_5 ||
     (!FUNC_6(VAR_3, &VAR_6->flags) &&
      FUNC_5(VAR_8->hdev)))
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_1;

 FUNC_2(VAR_7)->force_active = FUNC_6(VAR_4, &VAR_6->flags);
 FUNC_3(VAR_6->conn->hchan, VAR_7, VAR_9);
}
