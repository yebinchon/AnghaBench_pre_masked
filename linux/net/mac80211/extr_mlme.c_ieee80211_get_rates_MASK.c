
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_supported_band *VAR_2,
    u8 *VAR_3, unsigned int VAR_4,
    u32 *VAR_5, u32 *VAR_6,
    bool *VAR_7,
    int *VAR_8, int *VAR_9,
    int VAR_10)
{
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  int VAR_13 = VAR_3[VAR_11] & 0x7f;
  bool VAR_14 = !!(VAR_3[VAR_11] & 0x80);

  if ((VAR_13 * 5 * (1 << VAR_10)) > 110)
   *VAR_7 = 1;
  if (VAR_3[VAR_11] == (0x80 | VAR_0) ||
      VAR_3[VAR_11] == (0x80 | VAR_1))
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_2->n_bitrates; VAR_12++) {
   struct ieee80211_rate *VAR_15;
   int VAR_16;

   VAR_15 = &VAR_2->bitrates[VAR_12];

   VAR_16 = FUNC_1(VAR_15->bitrate, (1 << VAR_10) * 5);
   if (VAR_16 == VAR_13) {
    *VAR_5 |= FUNC_0(VAR_12);
    if (VAR_14)
     *VAR_6 |= FUNC_0(VAR_12);
    if ((VAR_13 * 5) < *VAR_8) {
     *VAR_8 = VAR_13 * 5;
     *VAR_9 = VAR_12;
    }
    break;
   }
  }
 }
}
