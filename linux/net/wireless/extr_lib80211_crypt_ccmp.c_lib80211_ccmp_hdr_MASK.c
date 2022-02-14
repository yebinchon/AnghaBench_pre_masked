
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; } ;
struct lib80211_ccmp_data {int key_idx; int * tx_pn; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, int VAR_4,
         u8 *VAR_5, int VAR_6, void *VAR_7)
{
 struct lib80211_ccmp_data *VAR_8 = VAR_7;
 int VAR_9;
 u8 *VAR_10;

 if (FUNC_2(VAR_3) < VAR_0 || VAR_3->len < VAR_4)
  return -1;

 if (VAR_5 != ((void*)0) && VAR_6 >= VAR_2)
  FUNC_0(VAR_5, VAR_8->key, VAR_2);

 VAR_10 = FUNC_3(VAR_3, VAR_0);
 FUNC_1(VAR_10, VAR_10 + VAR_0, VAR_4);
 VAR_10 += VAR_4;

 VAR_9 = VAR_1 - 1;
 while (VAR_9 >= 0) {
  VAR_8->tx_pn[VAR_9]++;
  if (VAR_8->tx_pn[VAR_9] != 0)
   break;
  VAR_9--;
 }

 *VAR_10++ = VAR_8->tx_pn[5];
 *VAR_10++ = VAR_8->tx_pn[4];
 *VAR_10++ = 0;
 *VAR_10++ = (VAR_8->key_idx << 6) | (1 << 5) ;
 *VAR_10++ = VAR_8->tx_pn[3];
 *VAR_10++ = VAR_8->tx_pn[2];
 *VAR_10++ = VAR_8->tx_pn[1];
 *VAR_10++ = VAR_8->tx_pn[0];

 return VAR_0;
}
