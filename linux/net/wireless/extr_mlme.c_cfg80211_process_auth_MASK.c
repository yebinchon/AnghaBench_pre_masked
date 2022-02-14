
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int netdev; int wiphy; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*,int const*,size_t) ;
 int FUNC_1 (struct cfg80211_registered_device*,int ,int const*,size_t,int ) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wireless_dev *VAR_1,
      const u8 *VAR_2, size_t VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = FUNC_2(VAR_1->wiphy);

 FUNC_1(VAR_4, VAR_1->netdev, VAR_2, VAR_3, VAR_0);
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
