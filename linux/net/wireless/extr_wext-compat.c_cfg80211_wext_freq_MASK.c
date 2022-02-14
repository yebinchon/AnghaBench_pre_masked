
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_freq {scalar_t__ e; int m; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

int FUNC_1(struct iw_freq *VAR_3)
{




 if (VAR_3->e == 0) {
  enum nl80211_band VAR_4 = VAR_1;
  if (VAR_3->m < 0)
   return 0;
  if (VAR_3->m > 14)
   VAR_4 = VAR_2;
  return FUNC_0(VAR_3->m, VAR_4);
 } else {
  int VAR_5, VAR_6 = 1000000;
  for (VAR_5 = 0; VAR_5 < VAR_3->e; VAR_5++)
   VAR_6 /= 10;
  if (VAR_6 <= 0)
   return -VAR_0;
  return VAR_3->m / VAR_6;
 }
}
