
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int rate_ctrl_priv; int rate_ctrl; } ;
struct ieee80211_local {int rate_ctrl; int hw; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_local *VAR_2,
        struct sta_info *VAR_3, gfp_t VAR_4)
{
 if (FUNC_0(&VAR_2->hw, VAR_1))
  return 0;

 VAR_3->rate_ctrl = VAR_2->rate_ctrl;
 VAR_3->rate_ctrl_priv = FUNC_1(VAR_3->rate_ctrl,
           VAR_3, VAR_4);
 if (!VAR_3->rate_ctrl_priv)
  return -VAR_0;

 return 0;
}
