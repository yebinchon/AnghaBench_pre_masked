
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; int dev; int priority; int cb; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_data {TYPE_1__* sdata; int skbs; struct ieee80211_local* local; } ;
struct ieee80211_local {scalar_t__ tx_headroom; } ;
struct TYPE_2__ {scalar_t__ encrypt_headroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_tx_data *VAR_7,
         struct sk_buff *VAR_8, int VAR_9,
         int VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_7->local;
 struct ieee80211_tx_info *VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14 = VAR_10 - VAR_9 - VAR_2;
 int VAR_15 = VAR_9 + VAR_14;
 int VAR_16 = VAR_8->len - VAR_9 - VAR_14;

 if (FUNC_1(VAR_16 < 0))
  return -VAR_0;



 while (VAR_16) {
  int VAR_17 = VAR_14;

  if (VAR_17 > VAR_16)
   VAR_17 = VAR_16;
  VAR_16 -= VAR_17;
  VAR_13 = FUNC_3(VAR_11->tx_headroom +
        VAR_10 +
        VAR_7->sdata->encrypt_headroom +
        VAR_3);
  if (!VAR_13)
   return -VAR_1;

  FUNC_2(&VAR_7->skbs, VAR_13);

  FUNC_7(VAR_13,
       VAR_11->tx_headroom + VAR_7->sdata->encrypt_headroom);


  FUNC_4(VAR_13->cb, VAR_8->cb, sizeof(VAR_13->cb));

  VAR_12 = FUNC_0(VAR_13);
  VAR_12->flags &= ~(VAR_4 |
     VAR_5);

  if (VAR_16)
   VAR_12->flags |= VAR_6;

  FUNC_5(VAR_13, VAR_8);
  VAR_13->priority = VAR_8->priority;
  VAR_13->dev = VAR_8->dev;


  FUNC_6(VAR_13, VAR_8->data, VAR_9);
  FUNC_6(VAR_13, VAR_8->data + VAR_15, VAR_17);

  VAR_15 += VAR_17;
 }


 FUNC_8(VAR_8, VAR_9 + VAR_14);
 return 0;
}
