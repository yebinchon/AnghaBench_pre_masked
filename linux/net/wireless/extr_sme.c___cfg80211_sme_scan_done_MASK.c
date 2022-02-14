
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* conn; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int conn_work; int wiphy; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cfg80211_bss* FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int *,struct cfg80211_bss*) ;
 int FUNC_3 (int *) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_2->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_4 = FUNC_4(VAR_3->wiphy);
 struct cfg80211_bss *VAR_5;

 FUNC_0(VAR_3);

 if (!VAR_3->conn)
  return;

 if (VAR_3->conn->state != VAR_0 &&
     VAR_3->conn->state != VAR_1)
  return;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  FUNC_2(&VAR_4->wiphy, VAR_5);
 else
  FUNC_3(&VAR_4->conn_work);
}
