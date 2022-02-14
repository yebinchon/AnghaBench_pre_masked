
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {size_t da; } ;
struct j1939_sk_buff_cb {int flags; TYPE_2__ addr; } ;
struct j1939_session {int skb_queue; struct j1939_priv* priv; } ;
struct j1939_priv {TYPE_1__* ents; } ;
struct TYPE_3__ {scalar_t__ nusers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct j1939_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (size_t) ;
 struct j1939_sk_buff_cb* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

void FUNC_4(struct j1939_session *VAR_2,
        struct sk_buff *VAR_3)
{
 struct j1939_sk_buff_cb *VAR_4 = FUNC_2(VAR_3);
 struct j1939_priv *VAR_5 = VAR_2->priv;

 FUNC_0(VAR_5, VAR_3);

 if (FUNC_1(VAR_4->addr.da) &&
     VAR_5->ents[VAR_4->addr.da].nusers)
  VAR_4->flags |= VAR_0;

 VAR_4->flags |= VAR_1;

 FUNC_3(&VAR_2->skb_queue, VAR_3);
}
