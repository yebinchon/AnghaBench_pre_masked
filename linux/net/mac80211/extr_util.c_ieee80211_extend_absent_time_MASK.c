
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_noa_data {TYPE_1__* desc; int * count; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ duration; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_noa_data*,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_1(struct ieee80211_noa_data *VAR_1, u32 VAR_2,
        s32 *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  s32 VAR_6;

  if (!VAR_1->count[VAR_5])
   continue;

  if (FUNC_0(VAR_1, VAR_2 + *VAR_3, VAR_5))
   VAR_4 = 1;

  VAR_6 = VAR_1->desc[VAR_5].start - VAR_2;
  if (VAR_6 > *VAR_3)
   continue;

  VAR_6 = VAR_1->desc[VAR_5].start + VAR_1->desc[VAR_5].duration - VAR_2;
  if (VAR_6 > *VAR_3)
   *VAR_3 = VAR_6;
 }

 return VAR_4;
}
