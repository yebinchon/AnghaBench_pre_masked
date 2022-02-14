
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wireless_dev {TYPE_1__* conn; int wiphy; } ;
struct cfg80211_registered_device {int conn_work; } ;
struct TYPE_2__ {int prev_bssid_valid; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

bool FUNC_2(struct wireless_dev *VAR_4, u16 VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = FUNC_1(VAR_4->wiphy);

 if (!VAR_4->conn)
  return 0;

 if (VAR_5 == VAR_3) {
  VAR_4->conn->state = VAR_2;
  return 0;
 }

 if (VAR_4->conn->prev_bssid_valid) {





  VAR_4->conn->prev_bssid_valid = 0;
  VAR_4->conn->state = VAR_0;
  FUNC_0(&VAR_6->conn_work);
  return 1;
 }

 VAR_4->conn->state = VAR_1;
 FUNC_0(&VAR_6->conn_work);
 return 0;
}
