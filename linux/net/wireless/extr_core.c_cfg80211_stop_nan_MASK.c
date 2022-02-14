
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; int is_running; } ;
struct cfg80211_registered_device {int opencount; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_3 (struct wireless_dev*) ;

void FUNC_4(struct cfg80211_registered_device *VAR_1,
         struct wireless_dev *VAR_2)
{
 FUNC_0();

 if (FUNC_1(VAR_2->iftype != VAR_0))
  return;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_2(VAR_1, VAR_2);
 VAR_2->is_running = 0;

 VAR_1->opencount--;
}
