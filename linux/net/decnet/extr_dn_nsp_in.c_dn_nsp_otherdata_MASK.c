
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct dn_skb_cb {unsigned short segnum; } ;
struct dn_scp {scalar_t__ other_report; int numoth_rcv; int other_receive_queue; } ;
typedef int __le16 ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned short FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ,unsigned short) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct dn_scp *VAR_3 = FUNC_0(VAR_1);
 unsigned short VAR_4;
 struct dn_skb_cb *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0;

 if (VAR_2->len < 2)
  goto out;

 VAR_5->segnum = VAR_4 = FUNC_5(*(__le16 *)VAR_2->data);
 FUNC_8(VAR_2, 2);

 if (FUNC_7(VAR_3->numoth_rcv, VAR_4)) {

  if (FUNC_3(VAR_1, VAR_2, VAR_0, &VAR_3->other_receive_queue) == 0) {
   FUNC_6(&VAR_3->numoth_rcv, 1);
   VAR_3->other_report = 0;
   VAR_6 = 1;
  }
 }

 FUNC_2(VAR_1);
out:
 if (!VAR_6)
  FUNC_4(VAR_2);
}
