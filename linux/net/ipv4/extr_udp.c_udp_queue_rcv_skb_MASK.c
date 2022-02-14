
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_skb_cb {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dev; struct sk_buff* next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sock*,struct sk_buff*,int) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3, *VAR_4;
 int VAR_5;

 if (FUNC_5(!FUNC_10(VAR_1, VAR_2)))
  return FUNC_8(VAR_1, VAR_2);

 FUNC_0(sizeof(struct udp_skb_cb) > VAR_0);
 FUNC_2(VAR_2, -FUNC_6(VAR_2));
 VAR_4 = FUNC_9(VAR_1, VAR_2, 1);
 for (VAR_2 = VAR_4; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2, FUNC_7(VAR_2));
  VAR_5 = FUNC_8(VAR_1, VAR_2);
  if (VAR_5 > 0)
   FUNC_4(FUNC_3(VAR_2->dev), VAR_2, -VAR_5);
 }
 return 0;
}
