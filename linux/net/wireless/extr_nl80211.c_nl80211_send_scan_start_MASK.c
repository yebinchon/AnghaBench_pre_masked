
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct cfg80211_registered_device*,struct wireless_dev*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cfg80211_registered_device *VAR_5,
        struct wireless_dev *VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 if (!VAR_7)
  return;

 if (FUNC_1(VAR_7, VAR_5, VAR_6, 0, 0, 0,
      VAR_1) < 0) {
  FUNC_2(VAR_7);
  return;
 }

 FUNC_0(&VAR_4, FUNC_4(&VAR_5->wiphy), VAR_7, 0,
    VAR_2, VAR_0);
}
