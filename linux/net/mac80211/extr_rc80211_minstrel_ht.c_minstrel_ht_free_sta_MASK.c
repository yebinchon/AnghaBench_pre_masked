
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_ht_sta_priv {struct minstrel_ht_sta_priv* ratelist; struct minstrel_ht_sta_priv* sample_table; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct minstrel_ht_sta_priv*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct ieee80211_sta *VAR_1, void *VAR_2)
{
 struct minstrel_ht_sta_priv *VAR_3 = VAR_2;

 FUNC_0(VAR_3->sample_table);
 FUNC_0(VAR_3->ratelist);
 FUNC_0(VAR_3);
}
