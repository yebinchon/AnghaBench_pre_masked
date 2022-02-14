
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cfg80211_sched_scan_request {int reqid; TYPE_1__* dev; int wiphy; } ;
struct TYPE_4__ {int wiphy_idx; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_5,
       struct cfg80211_sched_scan_request *VAR_6, u32 VAR_7)
{
 void *VAR_8;

 VAR_8 = FUNC_2(VAR_5, 0, 0, 0, VAR_7);
 if (!VAR_8)
  return -1;

 if (FUNC_3(VAR_5, VAR_4,
   FUNC_5(VAR_6->wiphy)->wiphy_idx) ||
     FUNC_3(VAR_5, VAR_2, VAR_6->dev->ifindex) ||
     FUNC_4(VAR_5, VAR_1, VAR_6->reqid,
         VAR_3))
  goto nla_put_failure;

 FUNC_1(VAR_5, VAR_8);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_5, VAR_8);
 return -VAR_0;
}
