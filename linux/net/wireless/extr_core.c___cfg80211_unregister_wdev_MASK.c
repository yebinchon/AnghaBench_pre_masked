
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keys; } ;
struct wireless_dev {int iftype; int disconnect_wk; scalar_t__ netdev; TYPE_1__ wext; int list; int pmsr_free_wk; int wiphy; } ;
struct cfg80211_registered_device {int devlist_generation; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct wireless_dev*,int ) ;
 int FUNC_9 () ;
 struct cfg80211_registered_device* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct wireless_dev *VAR_1, bool VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = FUNC_10(VAR_1->wiphy);

 FUNC_0();

 FUNC_5(&VAR_1->pmsr_free_wk);

 FUNC_8(VAR_3, VAR_1, VAR_0);

 FUNC_7(&VAR_1->list);
 if (VAR_2)
  FUNC_9();
 VAR_3->devlist_generation++;

 FUNC_2(VAR_1);

 switch (VAR_1->iftype) {
 case 128:
  FUNC_4(VAR_3, VAR_1);
  break;
 case 129:
  FUNC_3(VAR_3, VAR_1);
  break;
 default:
  break;
 }





 if (VAR_1->netdev)
  FUNC_5(&VAR_1->disconnect_wk);

 FUNC_1(VAR_1);
}
