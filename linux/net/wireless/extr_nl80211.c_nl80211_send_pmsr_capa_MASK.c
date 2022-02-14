
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {struct cfg80211_pmsr_capabilities* pmsr_capa; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
struct cfg80211_pmsr_capabilities {scalar_t__ randomize_mac_addr; scalar_t__ report_ap_tsf; int max_peers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct cfg80211_pmsr_capabilities const*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cfg80211_registered_device *VAR_6,
      struct sk_buff *VAR_7)
{
 const struct cfg80211_pmsr_capabilities *VAR_8 = VAR_6->wiphy.pmsr_capa;
 struct nlattr *VAR_9, *VAR_10;

 if (!VAR_8)
  return 0;






 VAR_9 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (FUNC_4(VAR_7, VAR_2, VAR_8->max_peers))
  return -VAR_0;

 if (VAR_8->report_ap_tsf &&
     FUNC_3(VAR_7, VAR_4))
  return -VAR_0;

 if (VAR_8->randomize_mac_addr &&
     FUNC_3(VAR_7, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 if (!VAR_10)
  return -VAR_0;

 if (FUNC_0(VAR_8, VAR_7))
  return -VAR_0;

 FUNC_1(VAR_7, VAR_10);
 FUNC_1(VAR_7, VAR_9);

 return 0;
}
