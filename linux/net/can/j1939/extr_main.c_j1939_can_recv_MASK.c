
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; int sk; } ;
struct TYPE_4__ {int sa; int pgn; size_t da; int type; } ;
struct j1939_sk_buff_cb {int priority; int flags; TYPE_2__ addr; int tskey; } ;
struct j1939_priv {int lock; TYPE_1__* ents; } ;
struct can_frame {int can_id; int can_dlc; } ;
struct TYPE_3__ {scalar_t__ nusers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct j1939_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct j1939_priv*,struct sk_buff*) ;
 int FUNC_5 (struct j1939_priv*,struct sk_buff*) ;
 struct j1939_sk_buff_cb* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct j1939_priv*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct j1939_sk_buff_cb*,int ,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_16(struct sk_buff *VAR_8, void *VAR_9)
{
 struct j1939_priv *VAR_10 = VAR_9;
 struct sk_buff *VAR_11;
 struct j1939_sk_buff_cb *VAR_12, *VAR_13;
 struct can_frame *VAR_14;






 VAR_11 = FUNC_13(VAR_8, VAR_0);
 if (!VAR_11)
  return;

 FUNC_0(VAR_11, VAR_8->sk);





 VAR_14 = (void *)VAR_11->data;
 FUNC_14(VAR_11, VAR_1);


 FUNC_15(VAR_11, FUNC_10(VAR_7, VAR_14->can_dlc, 8));


 VAR_12 = FUNC_6(VAR_11);
 FUNC_9(VAR_12, 0, sizeof(*VAR_12));

 VAR_13 = FUNC_6(VAR_8);
 VAR_12->tskey = VAR_13->tskey;
 VAR_12->priority = (VAR_14->can_id >> 26) & 0x7;
 VAR_12->addr.sa = VAR_14->can_id;
 VAR_12->addr.pgn = (VAR_14->can_id >> 8) & VAR_5;

 VAR_12->addr.type = VAR_6;
 if (FUNC_3(VAR_12->addr.pgn)) {

  VAR_12->addr.da = VAR_12->addr.pgn;

  VAR_12->addr.pgn &= 0x3ff00;
 } else {

  VAR_12->addr.da = VAR_4;
 }


 FUNC_11(&VAR_10->lock);
 if (FUNC_2(VAR_12->addr.sa) &&
     VAR_10->ents[VAR_12->addr.sa].nusers)
  VAR_12->flags |= VAR_3;
 if (FUNC_2(VAR_12->addr.da) &&
     VAR_10->ents[VAR_12->addr.da].nusers)
  VAR_12->flags |= VAR_2;
 FUNC_12(&VAR_10->lock);


 FUNC_1(VAR_10, VAR_11);

 if (FUNC_7(VAR_10, VAR_11))

  goto done;

 FUNC_4(VAR_10, VAR_11);
 FUNC_5(VAR_10, VAR_11);
 done:
 FUNC_8(VAR_11);
}
