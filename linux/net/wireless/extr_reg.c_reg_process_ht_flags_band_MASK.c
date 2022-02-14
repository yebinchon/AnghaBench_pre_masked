
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_supported_band {unsigned int n_channels; int * channels; } ;


 int FUNC_0 (struct wiphy*,int *) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_0,
          struct ieee80211_supported_band *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_channels; VAR_2++)
  FUNC_0(VAR_0, &VAR_1->channels[VAR_2]);
}
