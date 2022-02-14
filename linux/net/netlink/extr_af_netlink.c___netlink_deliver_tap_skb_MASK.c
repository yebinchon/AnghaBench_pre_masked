
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {scalar_t__ sk_protocol; } ;
struct sk_buff {int pkt_type; int protocol; struct net_device* dev; int head; struct sock* sk; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_4,
         struct net_device *VAR_5)
{
 struct sk_buff *VAR_6;
 struct sock *VAR_7 = VAR_4->sk;
 int VAR_8 = -VAR_0;

 if (!FUNC_6(FUNC_1(VAR_5), FUNC_12(VAR_7)))
  return 0;

 FUNC_0(VAR_5);

 if (FUNC_5(VAR_4->head))
  VAR_6 = FUNC_9(VAR_4, VAR_1);
 else
  VAR_6 = FUNC_10(VAR_4, VAR_1);
 if (VAR_6) {
  VAR_6->dev = VAR_5;
  VAR_6->protocol = FUNC_4((u16) VAR_7->sk_protocol);
  VAR_6->pkt_type = FUNC_8(VAR_7) ?
     VAR_2 : VAR_3;
  FUNC_11(VAR_6);
  VAR_8 = FUNC_3(VAR_6);
  if (FUNC_13(VAR_8 > 0))
   VAR_8 = FUNC_7(VAR_8);
 }

 FUNC_2(VAR_5);
 return VAR_8;
}
