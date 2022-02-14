
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tx_mcs_map; int rx_mcs_map; } ;
struct ieee80211_vht_cap {int vht_cap_info; TYPE_1__ supp_mcs; } ;
typedef enum ieee80211_vht_chanwidth { ____Placeholder_ieee80211_vht_chanwidth } ieee80211_vht_chanwidth ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct ieee80211_vht_cap *VAR_3,
         enum ieee80211_vht_chanwidth VAR_4,
         int VAR_5, bool VAR_6)
{
 u16 VAR_7 = FUNC_2(VAR_3->supp_mcs.rx_mcs_map);
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 == 0xffff)
  return 0;

 if (FUNC_0(VAR_5 > 9))
  return 0;
 if (VAR_5 <= 7)
  VAR_12 = 0;
 else if (VAR_5 == 8)
  VAR_12 = 1;
 else
  VAR_12 = 2;


 for (VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
  int VAR_13 = (VAR_7 >> (2 * VAR_11)) & 3;

  if (VAR_13 == 3)
   continue;

  if (VAR_13 >= VAR_12) {
   VAR_8 = VAR_11 + 1;
   break;
  }
 }

 if (!(VAR_3->supp_mcs.tx_mcs_map &
   FUNC_1(VAR_2)))
  return VAR_8;

 VAR_9 = FUNC_3(VAR_3->vht_cap_info,
       VAR_0);
 VAR_10 = FUNC_3(VAR_3->vht_cap_info,
       VAR_1);


 if (!VAR_6)
  VAR_9 = 0;


 if (VAR_10 == 3)
  return 0;


 if (VAR_10 == 2 && (VAR_9 == 1 || VAR_9 == 2))
  return 0;






 switch (VAR_4) {
 case 128:
 case 130:
  if ((VAR_10 == 1 || VAR_10 == 2) &&
      VAR_9 == 3)
   return 2 * VAR_8;
  break;
 case 131:
  if (VAR_10 == 0 &&
      (VAR_9 == 1 || VAR_9 == 2))
   return VAR_8 / 2;
  if (VAR_10 == 0 &&
      VAR_9 == 3)
   return (3 * VAR_8) / 4;
  if (VAR_10 == 1 &&
      VAR_9 == 3)
   return 2 * VAR_8;
  break;
 case 129:
  if (VAR_10 == 0 && VAR_9 == 1)
   return 0;
  if (VAR_10 == 0 &&
      VAR_9 == 2)
   return VAR_8 / 2;
  if (VAR_10 == 0 &&
      VAR_9 == 3)
   return (3 * VAR_8) / 4;
  if (VAR_10 == 1 &&
      VAR_9 == 0)
   return 0;
  if (VAR_10 == 1 &&
      VAR_9 == 1)
   return VAR_8 / 2;
  if (VAR_10 == 1 &&
      VAR_9 == 2)
   return (3 * VAR_8) / 4;
  break;
 }


 return VAR_8;
}
