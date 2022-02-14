
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct l2cap_chan {scalar_t__ mode; struct sock* data; } ;
struct TYPE_2__ {struct sk_buff* rx_busy_skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct l2cap_chan*,int) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct l2cap_chan *VAR_3, struct sk_buff *VAR_4)
{
 struct sock *VAR_5 = VAR_3->data;
 int VAR_6;

 FUNC_3(VAR_5);

 if (FUNC_2(VAR_5)->rx_busy_skb) {
  VAR_6 = -VAR_0;
  goto done;
 }

 if (VAR_3->mode != VAR_1 &&
     VAR_3->mode != VAR_2) {



  VAR_6 = FUNC_5(VAR_5, VAR_4);
  if (VAR_6)
   goto done;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 < 0 && VAR_3->mode == VAR_1) {
  FUNC_2(VAR_5)->rx_busy_skb = VAR_4;
  FUNC_1(VAR_3, 1);
  VAR_6 = 0;
 }

done:
 FUNC_4(VAR_5);

 return VAR_6;
}
