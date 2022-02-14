
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct dn_skb_cb {unsigned short segnum; } ;
struct dn_scp {scalar_t__ flowloc_sw; int numdat_rcv; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned short FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int ,unsigned short) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 unsigned short VAR_6;
 struct dn_skb_cb *VAR_7 = FUNC_1(VAR_4);
 struct dn_scp *VAR_8 = FUNC_0(VAR_3);

 if (VAR_4->len < 2)
  goto out;

 VAR_7->segnum = VAR_6 = FUNC_7(*(__le16 *)VAR_4->data);
 FUNC_10(VAR_4, 2);

 if (FUNC_9(VAR_8->numdat_rcv, VAR_6)) {
  if (FUNC_5(VAR_3, VAR_4, VAR_2, &VAR_3->sk_receive_queue) == 0) {
   FUNC_8(&VAR_8->numdat_rcv, 1);
   VAR_5 = 1;
  }

  if ((VAR_8->flowloc_sw == VAR_1) && FUNC_2(VAR_3)) {
   VAR_8->flowloc_sw = VAR_0;
   FUNC_4(VAR_3, VAR_0, 0);
  }
 }

 FUNC_3(VAR_3);
out:
 if (!VAR_5)
  FUNC_6(VAR_4);
}
