
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct cfg80211_registered_device*,struct wireless_dev*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;

struct sk_buff *FUNC_3(struct cfg80211_registered_device *VAR_4,
           struct wireless_dev *VAR_5, bool VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_0(VAR_7, VAR_4, VAR_5, 0, 0, 0,
      VAR_6 ? VAR_2 :
         VAR_1) < 0) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
