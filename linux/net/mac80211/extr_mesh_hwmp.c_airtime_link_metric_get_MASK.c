
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sta_info {TYPE_1__* mesh; } ;
struct ieee80211_local {int dummy; } ;
struct TYPE_2__ {int tx_rate_avg; int fail_avg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sta_info*) ;

u32 FUNC_5(struct ieee80211_local *VAR_4,
       struct sta_info *VAR_5)
{

 int VAR_6 = 1 << VAR_0;
 int VAR_7 = VAR_3 << VAR_0;
 int VAR_8 = 1 << VAR_0;
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u64 VAR_13;
 unsigned long VAR_14 =
  FUNC_2(&VAR_5->mesh->fail_avg);






 VAR_9 = FUNC_0(FUNC_4(VAR_5), 100);

 if (VAR_9) {
  VAR_10 = 0;
 } else {
  if (VAR_14 > VAR_1)
   return VAR_2;

  VAR_9 = FUNC_3(&VAR_5->mesh->tx_rate_avg);
  if (FUNC_1(!VAR_9))
   return VAR_2;

  VAR_10 = (VAR_14 << VAR_0) / 100;
 }




 VAR_11 = (VAR_6 + 10 * VAR_7 / VAR_9);
 VAR_12 = ((1 << (2 * VAR_0)) / (VAR_8 - VAR_10));
 VAR_13 = (VAR_11 * VAR_12) >> (2 * VAR_0);
 return (u32)VAR_13;
}
