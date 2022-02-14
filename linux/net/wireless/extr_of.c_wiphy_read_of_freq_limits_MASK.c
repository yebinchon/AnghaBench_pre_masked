
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct property {int dummy; } ;
struct ieee80211_freq_range {scalar_t__ start_freq_khz; scalar_t__ end_freq_khz; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct device_node* FUNC_1 (struct device*) ;
 struct ieee80211_freq_range* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct ieee80211_freq_range*) ;
 struct property* FUNC_4 (struct device_node*,char*,int*) ;
 int * FUNC_5 (struct property*,int const*,scalar_t__*) ;
 struct device* FUNC_6 (struct wiphy*) ;
 int FUNC_7 (struct wiphy*,struct ieee80211_freq_range*,unsigned int) ;

void FUNC_8(struct wiphy *VAR_3)
{
 struct device *VAR_4 = FUNC_6(VAR_3);
 struct device_node *VAR_5;
 struct property *VAR_6;
 struct ieee80211_freq_range *VAR_7;
 unsigned int VAR_8;
 const __be32 *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;

 if (!VAR_4)
  return;
 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_4(VAR_5, "ieee80211-freq-limit", &VAR_10);
 if (!VAR_6)
  return;

 if (!VAR_10 || VAR_10 % sizeof(u32) || VAR_10 / sizeof(u32) % 2) {
  FUNC_0(VAR_4, "ieee80211-freq-limit wrong format");
  return;
 }
 VAR_8 = VAR_10 / sizeof(u32) / 2;

 VAR_7 = FUNC_2(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_12 = -VAR_1;
  goto out_kfree;
 }

 VAR_9 = ((void*)0);
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  struct ieee80211_freq_range *VAR_13 = &VAR_7[VAR_11];

  VAR_9 = FUNC_5(VAR_6, VAR_9, &VAR_13->start_freq_khz);
  if (!VAR_9) {
   VAR_12 = -VAR_0;
   goto out_kfree;
  }

  VAR_9 = FUNC_5(VAR_6, VAR_9, &VAR_13->end_freq_khz);
  if (!VAR_9) {
   VAR_12 = -VAR_0;
   goto out_kfree;
  }

  if (!VAR_13->start_freq_khz ||
      !VAR_13->end_freq_khz ||
      VAR_13->start_freq_khz >= VAR_13->end_freq_khz) {
   VAR_12 = -VAR_0;
   goto out_kfree;
  }
 }

 FUNC_7(VAR_3, VAR_7, VAR_8);

out_kfree:
 FUNC_3(VAR_7);
 if (VAR_12)
  FUNC_0(VAR_4, "Failed to get limits: %d\n", VAR_12);
}
