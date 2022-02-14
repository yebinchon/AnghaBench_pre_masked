
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_noa_data {int absent; int has_next_tsf; scalar_t__ next_tsf; TYPE_1__* desc; int * count; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_noa_data*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct ieee80211_noa_data*,scalar_t__) ;

void FUNC_3(struct ieee80211_noa_data *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_0(31) - 1;
 int VAR_4;

 VAR_1->absent = 0;
 VAR_1->has_next_tsf = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  s32 VAR_5;

  if (!VAR_1->count[VAR_4])
   continue;

  FUNC_1(VAR_1, VAR_2, VAR_4);
  VAR_5 = VAR_1->desc[VAR_4].start - VAR_2;
  if (VAR_5 <= 0)
   VAR_1->absent |= FUNC_0(VAR_4);

  if (VAR_3 > VAR_5)
   VAR_3 = VAR_5;

  VAR_1->has_next_tsf = 1;
 }

 if (VAR_1->absent)
  VAR_3 = FUNC_2(VAR_1, VAR_2);

 VAR_1->next_tsf = VAR_2 + VAR_3;
}
