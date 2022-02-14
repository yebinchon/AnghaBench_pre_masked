
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct j1939_sk_buff_cb {int dummy; } ;
struct j1939_session {int dummy; } ;
struct j1939_priv {TYPE_1__* ndev; } ;
struct can_skb_priv {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct j1939_session* FUNC_3 (struct j1939_priv*,struct sk_buff*,int) ;
 struct j1939_sk_buff_cb* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct j1939_sk_buff_cb*,struct j1939_sk_buff_cb const*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct
j1939_session *FUNC_9(struct j1939_priv *VAR_1,
           int VAR_2,
           const struct j1939_sk_buff_cb *VAR_3)
{
 struct sk_buff *VAR_4;
 struct j1939_sk_buff_cb *VAR_5;
 struct j1939_session *VAR_6;

 VAR_4 = FUNC_0(VAR_2 + sizeof(struct can_skb_priv), VAR_0);
 if (FUNC_8(!VAR_4))
  return ((void*)0);

 VAR_4->dev = VAR_1->ndev;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4)->ifindex = VAR_1->ndev->ifindex;
 VAR_5 = FUNC_4(VAR_4);
 FUNC_6(VAR_5, VAR_3, sizeof(*VAR_5));

 VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_2);
 if (!VAR_6) {
  FUNC_5(VAR_4);
  return ((void*)0);
 }


 FUNC_7(VAR_4, VAR_2);

 return VAR_6;
}
