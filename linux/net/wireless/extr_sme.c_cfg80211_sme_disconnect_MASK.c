
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {TYPE_2__* conn; int netdev; int wiphy; } ;
struct cfg80211_registered_device {TYPE_3__* ops; } ;
struct TYPE_6__ {int deauth; } ;
struct TYPE_4__ {int bssid; } ;
struct TYPE_5__ {scalar_t__ state; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ,int ,int *,int ,int ,int) ;
 int FUNC_1 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct wireless_dev *VAR_3, u16 VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = FUNC_2(VAR_3->wiphy);
 int VAR_6;

 if (!VAR_3->conn)
  return 0;

 if (!VAR_5->ops->deauth)
  return -VAR_2;

 if (VAR_3->conn->state == VAR_0 ||
     VAR_3->conn->state == VAR_1) {
  VAR_6 = 0;
  goto out;
 }


 VAR_6 = FUNC_0(VAR_5, VAR_3->netdev,
       VAR_3->conn->params.bssid,
       ((void*)0), 0, VAR_4, 0);
 out:
 FUNC_1(VAR_3);
 return VAR_6;
}
