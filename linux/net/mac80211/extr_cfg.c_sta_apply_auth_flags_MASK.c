
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct sta_info*,int ) ;
 scalar_t__ FUNC_3 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_local *VAR_11,
    struct sta_info *VAR_12,
    u32 VAR_13, u32 VAR_14)
{
 int VAR_15;

 if (VAR_13 & FUNC_0(VAR_5) &&
     VAR_14 & FUNC_0(VAR_5) &&
     !FUNC_3(VAR_12, VAR_8)) {
  VAR_15 = FUNC_2(VAR_12, VAR_1);
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & FUNC_0(VAR_4) &&
     VAR_14 & FUNC_0(VAR_4) &&
     !FUNC_3(VAR_12, VAR_7)) {





  if (!FUNC_3(VAR_12, VAR_10))
   FUNC_1(VAR_12);

  VAR_15 = FUNC_2(VAR_12, VAR_0);
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & FUNC_0(VAR_6)) {
  if (VAR_14 & FUNC_0(VAR_6))
   VAR_15 = FUNC_2(VAR_12, VAR_2);
  else if (FUNC_3(VAR_12, VAR_9))
   VAR_15 = FUNC_2(VAR_12, VAR_0);
  else
   VAR_15 = 0;
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & FUNC_0(VAR_4) &&
     !(VAR_14 & FUNC_0(VAR_4)) &&
     FUNC_3(VAR_12, VAR_7)) {
  VAR_15 = FUNC_2(VAR_12, VAR_1);
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & FUNC_0(VAR_5) &&
     !(VAR_14 & FUNC_0(VAR_5)) &&
     FUNC_3(VAR_12, VAR_8)) {
  VAR_15 = FUNC_2(VAR_12, VAR_3);
  if (VAR_15)
   return VAR_15;
 }

 return 0;
}
