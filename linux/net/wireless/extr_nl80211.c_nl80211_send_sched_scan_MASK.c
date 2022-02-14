
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cfg80211_sched_scan_request {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct cfg80211_sched_scan_request*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct cfg80211_sched_scan_request *VAR_4, u32 VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_6)
  return;

 if (FUNC_1(VAR_6, VAR_4, VAR_5) < 0) {
  FUNC_2(VAR_6);
  return;
 }

 FUNC_0(&VAR_3, FUNC_4(VAR_4->wiphy), VAR_6, 0,
    VAR_1, VAR_0);
}
