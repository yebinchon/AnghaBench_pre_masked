
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_4__* sk; } ;
struct TYPE_6__ {scalar_t__ pgn; scalar_t__ type; size_t da; } ;
struct j1939_sk_buff_cb {scalar_t__ tskey; TYPE_2__ addr; int flags; } ;
struct TYPE_7__ {size_t total; int block; size_t last; } ;
struct j1939_session {int transmission; scalar_t__ tskey; TYPE_4__* sk; TYPE_3__ pkt; struct j1939_sk_buff_cb skcb; } ;
struct j1939_priv {size_t tp_max_packet_size; TYPE_1__* ents; } ;
struct TYPE_8__ {int sk_tskey; } ;
struct TYPE_5__ {scalar_t__ nusers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct j1939_session* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct j1939_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (struct j1939_sk_buff_cb*) ;
 struct j1939_session* FUNC_4 (struct j1939_priv*,struct sk_buff*,size_t) ;
 struct j1939_sk_buff_cb* FUNC_5 (struct sk_buff*) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int,size_t) ;
 scalar_t__ FUNC_7 (int) ;

struct j1939_session *FUNC_8(struct j1939_priv *VAR_15,
        struct sk_buff *VAR_16, size_t VAR_17)
{
 struct j1939_sk_buff_cb *VAR_18 = FUNC_5(VAR_16);
 struct j1939_session *VAR_19;
 int VAR_20;

 if (VAR_18->addr.pgn == VAR_13 ||
     VAR_18->addr.pgn == VAR_12 ||
     VAR_18->addr.pgn == VAR_8 ||
     VAR_18->addr.pgn == VAR_7)

  return FUNC_0(-VAR_1);

 if (VAR_17 > VAR_15->tp_max_packet_size)
  return FUNC_0(-VAR_2);

 if (VAR_17 <= 8)
  VAR_18->addr.type = VAR_10;
 else if (VAR_17 > VAR_9)
  VAR_18->addr.type = VAR_6;
 else
  VAR_18->addr.type = VAR_11;

 if (VAR_18->addr.type == VAR_6 &&
     FUNC_3(VAR_18))
  return FUNC_0(-VAR_0);


 VAR_20 = FUNC_1(VAR_15, VAR_16);
 if (FUNC_7(VAR_20))
  return FUNC_0(VAR_20);


 if (FUNC_2(VAR_18->addr.da) &&
     VAR_15->ents[VAR_18->addr.da].nusers)
  VAR_18->flags |= VAR_4;


 VAR_18->flags |= VAR_5;


 VAR_19 = FUNC_4(VAR_15, VAR_16, VAR_17);
 if (!VAR_19)
  return FUNC_0(-VAR_3);


 VAR_19->sk = VAR_16->sk;
 VAR_19->transmission = 1;
 VAR_19->pkt.total = (VAR_17 + 6) / 7;
 VAR_19->pkt.block = VAR_18->addr.type == VAR_6 ? 255 :
  FUNC_6(VAR_14 ?: 255, VAR_19->pkt.total);

 if (FUNC_3(&VAR_19->skcb))

  VAR_19->pkt.last = VAR_19->pkt.total;

 VAR_18->tskey = VAR_19->sk->sk_tskey++;
 VAR_19->tskey = VAR_18->tskey;

 return VAR_19;
}
