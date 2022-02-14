
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_beacon_data {size_t tail_len; int* tail; } ;
struct cfg80211_ap_settings {void* he_cap; void* vht_cap; void* ht_cap; struct cfg80211_beacon_data beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int ,int const*,size_t) ;
 int* FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (struct cfg80211_ap_settings*,int const*) ;

__attribute__((used)) static void FUNC_3(struct cfg80211_ap_settings *VAR_5)
{
 const struct cfg80211_beacon_data *VAR_6 = &VAR_5->beacon;
 size_t VAR_7 = VAR_6->tail_len;
 const u8 *VAR_8 = VAR_6->tail;
 const u8 *VAR_9;
 const u8 *VAR_10;

 VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_7);
 FUNC_2(VAR_5, VAR_9);

 VAR_9 = FUNC_1(VAR_1, VAR_8, VAR_7);
 FUNC_2(VAR_5, VAR_9);

 VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_7);
 if (VAR_10 && VAR_10[1] >= sizeof(*VAR_5->ht_cap))
  VAR_5->ht_cap = (void *)(VAR_10 + 2);
 VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_7);
 if (VAR_10 && VAR_10[1] >= sizeof(*VAR_5->vht_cap))
  VAR_5->vht_cap = (void *)(VAR_10 + 2);
 VAR_10 = FUNC_0(VAR_0, VAR_8, VAR_7);
 if (VAR_10 && VAR_10[1] >= sizeof(*VAR_5->he_cap) + 1)
  VAR_5->he_cap = (void *)(VAR_10 + 3);
}
