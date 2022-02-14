
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_noa_data {int* count; TYPE_1__* desc; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int interval; scalar_t__ start; scalar_t__ duration; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_1(struct ieee80211_noa_data *VAR_0, u32 VAR_1, int VAR_2)
{
 s32 VAR_3 = VAR_0->desc[VAR_2].start + VAR_0->desc[VAR_2].duration - (VAR_1 + 1);
 int VAR_4;

 if (VAR_3 > 0)
  return 0;


 if (VAR_0->count[VAR_2] == 1)
  return 0;

 if (VAR_0->desc[VAR_2].interval == 0)
  return 0;


 VAR_4 = FUNC_0(-VAR_3, VAR_0->desc[VAR_2].interval);
 if (VAR_0->count[VAR_2] < 255) {
  if (VAR_0->count[VAR_2] <= VAR_4) {
   VAR_0->count[VAR_2] = 0;
   return 0;
  }

  VAR_0->count[VAR_2] -= VAR_4;
 }

 VAR_0->desc[VAR_2].start += VAR_4 * VAR_0->desc[VAR_2].interval;

 return 1;
}
