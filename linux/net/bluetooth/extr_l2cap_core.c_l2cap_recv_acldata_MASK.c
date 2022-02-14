
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_hdr {int len; } ;
struct l2cap_conn {int rx_len; struct sk_buff* rx_skb; } ;
struct hci_conn {TYPE_1__* hdev; struct l2cap_conn* l2cap_data; } ;
struct TYPE_2__ {scalar_t__ dev_type; } ;






 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct l2cap_conn* FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (struct l2cap_conn*,int ) ;
 int FUNC_7 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

void FUNC_10(struct hci_conn *VAR_4, struct sk_buff *VAR_5, u16 VAR_6)
{
 struct l2cap_conn *VAR_7 = VAR_4->l2cap_data;
 struct l2cap_hdr *VAR_8;
 int VAR_9;


 if (!VAR_7 && VAR_4->hdev->dev_type != VAR_2)
  goto drop;

 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_4);

 if (!VAR_7)
  goto drop;

 FUNC_0("conn %p len %d flags 0x%x", VAR_7, VAR_5->len, VAR_6);

 switch (VAR_6) {
 case 129:
 case 128:
 case 131:
  if (VAR_7->rx_len) {
   FUNC_1("Unexpected start frame (len %d)", VAR_5->len);
   FUNC_4(VAR_7->rx_skb);
   VAR_7->rx_skb = ((void*)0);
   VAR_7->rx_len = 0;
   FUNC_6(VAR_7, VAR_0);
  }


  if (VAR_5->len < VAR_3) {
   FUNC_1("Frame is too short (len %d)", VAR_5->len);
   FUNC_6(VAR_7, VAR_0);
   goto drop;
  }

  VAR_8 = (struct l2cap_hdr *) VAR_5->data;
  VAR_9 = FUNC_2(VAR_8->len) + VAR_3;

  if (VAR_9 == VAR_5->len) {

   FUNC_7(VAR_7, VAR_5);
   return;
  }

  FUNC_0("Start: total len %d, frag len %d", VAR_9, VAR_5->len);

  if (VAR_5->len > VAR_9) {
   FUNC_1("Frame is too long (len %d, expected len %d)",
          VAR_5->len, VAR_9);
   FUNC_6(VAR_7, VAR_0);
   goto drop;
  }


  VAR_7->rx_skb = FUNC_3(VAR_9, VAR_1);
  if (!VAR_7->rx_skb)
   goto drop;

  FUNC_8(VAR_5, FUNC_9(VAR_7->rx_skb, VAR_5->len),
       VAR_5->len);
  VAR_7->rx_len = VAR_9 - VAR_5->len;
  break;

 case 130:
  FUNC_0("Cont: frag len %d (expecting %d)", VAR_5->len, VAR_7->rx_len);

  if (!VAR_7->rx_len) {
   FUNC_1("Unexpected continuation frame (len %d)", VAR_5->len);
   FUNC_6(VAR_7, VAR_0);
   goto drop;
  }

  if (VAR_5->len > VAR_7->rx_len) {
   FUNC_1("Fragment is too long (len %d, expected %d)",
          VAR_5->len, VAR_7->rx_len);
   FUNC_4(VAR_7->rx_skb);
   VAR_7->rx_skb = ((void*)0);
   VAR_7->rx_len = 0;
   FUNC_6(VAR_7, VAR_0);
   goto drop;
  }

  FUNC_8(VAR_5, FUNC_9(VAR_7->rx_skb, VAR_5->len),
       VAR_5->len);
  VAR_7->rx_len -= VAR_5->len;

  if (!VAR_7->rx_len) {




   struct sk_buff *VAR_10 = VAR_7->rx_skb;
   VAR_7->rx_skb = ((void*)0);
   FUNC_7(VAR_7, VAR_10);
  }
  break;
 }

drop:
 FUNC_4(VAR_5);
}
