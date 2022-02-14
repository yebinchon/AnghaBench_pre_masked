
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* rx_mask; } ;
struct TYPE_6__ {TYPE_2__ mcs; int ht_supported; } ;
struct ieee80211_supported_band {int band; int n_bitrates; TYPE_3__ ht_cap; TYPE_1__* bitrates; } ;
struct TYPE_4__ {int bitrate; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_4)
{
 int VAR_5, VAR_6;

 switch (VAR_4->band) {
 case 131:
 case 129:
  VAR_6 = 3;
  for (VAR_5 = 0; VAR_5 < VAR_4->n_bitrates; VAR_5++) {
   if (VAR_4->bitrates[VAR_5].bitrate == 60 ||
       VAR_4->bitrates[VAR_5].bitrate == 120 ||
       VAR_4->bitrates[VAR_5].bitrate == 240) {
    VAR_4->bitrates[VAR_5].flags |=
     VAR_1;
    VAR_6--;
   }
  }
  FUNC_0(VAR_6);
  break;
 case 132:
  VAR_6 = 7;
  for (VAR_5 = 0; VAR_5 < VAR_4->n_bitrates; VAR_5++) {
   switch (VAR_4->bitrates[VAR_5].bitrate) {
   case 10:
   case 20:
   case 55:
   case 110:
    VAR_4->bitrates[VAR_5].flags |=
     VAR_2 |
     VAR_3;
    VAR_6--;
    break;
   case 60:
   case 120:
   case 240:
    VAR_4->bitrates[VAR_5].flags |=
     VAR_3;
    VAR_6--;

   default:
    VAR_4->bitrates[VAR_5].flags |=
     VAR_0;
    break;
   }
  }
  FUNC_0(VAR_6 != 0 && VAR_6 != 3);
  break;
 case 130:

  FUNC_0(!VAR_4->ht_cap.ht_supported);
  FUNC_0((VAR_4->ht_cap.mcs.rx_mask[0] & 0x1e) != 0x1e);
  break;
 case 128:
 default:
  FUNC_0(1);
  break;
 }
}
