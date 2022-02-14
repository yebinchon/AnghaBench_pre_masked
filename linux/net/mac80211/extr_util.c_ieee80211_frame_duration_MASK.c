
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

int FUNC_1(enum nl80211_band VAR_1, size_t VAR_2,
        int VAR_3, int VAR_4, int VAR_5,
        int VAR_6)
{
 int VAR_7;
 if (VAR_1 == VAR_0 || VAR_4) {
  VAR_7 = 16;
  VAR_7 += 16;
  VAR_7 += 4;





  VAR_7 *= 1 << VAR_6;




  VAR_7 += 4 * FUNC_0((16 + 8 * (VAR_2 + 4) + 6) * 10,
     4 * VAR_3);
 } else {
  VAR_7 = 10;
  VAR_7 += VAR_5 ? (72 + 24) : (144 + 48);

  VAR_7 += FUNC_0(8 * (VAR_2 + 4) * 10, VAR_3);
 }

 return VAR_7;
}
