
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int max_sched_scan_reqs; int max_match_sets; } ;
struct net_device {TYPE_2__ wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int* attrs; int snd_portid; struct net_device** user_ptr; } ;
struct cfg80211_sched_scan_request {int owner_nlportid; TYPE_2__* wiphy; struct net_device* dev; scalar_t__ reqid; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_3__ {int sched_scan_start; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cfg80211_sched_scan_request*) ;
 int FUNC_1 (struct net_device*,struct cfg80211_sched_scan_request*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct cfg80211_sched_scan_request*) ;
 struct cfg80211_sched_scan_request* FUNC_5 (TYPE_2__*,struct wireless_dev*,int*,int ) ;
 int FUNC_6 (struct cfg80211_sched_scan_request*,int ) ;
 int FUNC_7 (struct net_device*,struct net_device*,struct cfg80211_sched_scan_request*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4,
        struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_8 = VAR_7->ieee80211_ptr;
 struct cfg80211_sched_scan_request *VAR_9;
 bool VAR_10;
 int VAR_11;

 if (!VAR_6->wiphy.max_sched_scan_reqs || !VAR_6->ops->sched_scan_start)
  return -VAR_0;

 VAR_10 = VAR_5->attrs[VAR_1];
 VAR_11 = FUNC_3(VAR_6, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_5(&VAR_6->wiphy, VAR_8,
        VAR_5->attrs,
        VAR_6->wiphy.max_match_sets);

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11)
  goto out_err;




 if (VAR_10 && VAR_6->wiphy.max_sched_scan_reqs > 1) {
  while (!VAR_9->reqid)
   VAR_9->reqid = FUNC_2(VAR_6);
 }

 VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_9);
 if (VAR_11)
  goto out_free;

 VAR_9->dev = VAR_7;
 VAR_9->wiphy = &VAR_6->wiphy;

 if (VAR_5->attrs[VAR_2])
  VAR_9->owner_nlportid = VAR_5->snd_portid;

 FUNC_1(VAR_6, VAR_9);

 FUNC_6(VAR_9, VAR_3);
 return 0;

out_free:
 FUNC_4(VAR_9);
out_err:
 return VAR_11;
}
