
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {TYPE_1__** bands; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {scalar_t__ n_channels; } ;


 int VAR_0 ;

unsigned int FUNC_0(struct wiphy *VAR_1)
{
 enum nl80211_band VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->bands[VAR_2])
   VAR_3 += VAR_1->bands[VAR_2]->n_channels;

 return VAR_3;
}
