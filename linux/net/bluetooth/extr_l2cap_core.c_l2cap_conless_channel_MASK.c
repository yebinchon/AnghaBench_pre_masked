
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_chan {scalar_t__ state; scalar_t__ imtu; TYPE_2__* ops; } ;
struct hci_conn {scalar_t__ type; int dst; int src; } ;
typedef int __le16 ;
struct TYPE_4__ {int psm; int bdaddr; } ;
struct TYPE_6__ {TYPE_1__ l2cap; } ;
struct TYPE_5__ {int (* recv ) (struct l2cap_chan*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct l2cap_chan*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_5 (int ,int ,int *,int *,scalar_t__) ;
 int FUNC_6 (struct l2cap_chan*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct l2cap_conn *VAR_3, __le16 VAR_4,
      struct sk_buff *VAR_5)
{
 struct hci_conn *VAR_6 = VAR_3->hcon;
 struct l2cap_chan *VAR_7;

 if (VAR_6->type != VAR_0)
  goto free_skb;

 VAR_7 = FUNC_5(0, VAR_4, &VAR_6->src, &VAR_6->dst,
     VAR_0);
 if (!VAR_7)
  goto free_skb;

 FUNC_0("chan %p, len %d", VAR_7, VAR_5->len);

 if (VAR_7->state != VAR_1 && VAR_7->state != VAR_2)
  goto drop;

 if (VAR_7->imtu < VAR_5->len)
  goto drop;


 FUNC_1(&FUNC_2(VAR_5)->l2cap.bdaddr, &VAR_6->dst);
 FUNC_2(VAR_5)->l2cap.psm = VAR_4;

 if (!VAR_7->ops->recv(VAR_7, VAR_5)) {
  FUNC_4(VAR_7);
  return;
 }

drop:
 FUNC_4(VAR_7);
free_skb:
 FUNC_3(VAR_5);
}
