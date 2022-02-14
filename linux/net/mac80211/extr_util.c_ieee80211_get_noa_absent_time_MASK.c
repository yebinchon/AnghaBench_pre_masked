
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_noa_data {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ieee80211_noa_data*,int ,int *) ;

__attribute__((used)) static u32
FUNC_1(struct ieee80211_noa_data *VAR_0, u32 VAR_1)
{
 s32 VAR_2 = 0;
 int VAR_3 = 0;




 int VAR_4 = 5;

 FUNC_0(VAR_0, VAR_1, &VAR_2);
 do {
  if (!FUNC_0(VAR_0, VAR_1, &VAR_2))
   break;

  VAR_3++;
 } while (VAR_3 < VAR_4);

 return VAR_2;
}
