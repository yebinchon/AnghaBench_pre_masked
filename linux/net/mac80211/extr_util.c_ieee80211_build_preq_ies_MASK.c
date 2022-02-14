
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_scan_ies {int** ies; size_t* len; int* common_ies; size_t common_ie_len; } ;
struct ieee80211_local {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,int*,size_t,int const*,size_t,int,int ,struct cfg80211_chan_def*,size_t*,int ) ;
 int FUNC_3 (int*,int const*,size_t) ;
 int FUNC_4 (struct ieee80211_scan_ies*,int ,int) ;

int FUNC_5(struct ieee80211_local *VAR_1, u8 *VAR_2,
        size_t VAR_3,
        struct ieee80211_scan_ies *VAR_4,
        const u8 *VAR_5, size_t VAR_6,
        u8 VAR_7, u32 *VAR_8,
        struct cfg80211_chan_def *VAR_9,
        u32 VAR_10)
{
 size_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 int VAR_14;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if (VAR_7 & FUNC_0(VAR_14)) {
   VAR_11 += FUNC_2(VAR_1,
            VAR_2 + VAR_11,
            VAR_3 - VAR_11,
            VAR_5, VAR_6, VAR_14,
            VAR_8[VAR_14],
            VAR_9,
            &VAR_13,
            VAR_10);
   VAR_4->ies[VAR_14] = VAR_2 + VAR_12;
   VAR_4->len[VAR_14] = VAR_11 - VAR_12;
   VAR_12 = VAR_11;
  }
 }


 if (VAR_5 && VAR_6) {
  if (FUNC_1(VAR_3 - VAR_11 < VAR_6 - VAR_13,
         "not enough space for preq custom IEs\n"))
   return VAR_11;
  FUNC_3(VAR_2 + VAR_11, VAR_5 + VAR_13,
         VAR_6 - VAR_13);
  VAR_4->common_ies = VAR_2 + VAR_11;
  VAR_4->common_ie_len = VAR_6 - VAR_13;
  VAR_11 += VAR_6 - VAR_13;
 }

 return VAR_11;
}
