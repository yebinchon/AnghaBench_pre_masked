
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* conn; int wiphy; } ;
struct cfg80211_registered_device {int conn_work; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

void FUNC_2(struct wireless_dev *VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = FUNC_1(VAR_1->wiphy);

 if (!VAR_1->conn)
  return;

 VAR_1->conn->state = VAR_0;
 FUNC_0(&VAR_2->conn_work);
}
