
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int tdls_wider_bw_prohibited; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; TYPE_1__ u; } ;
typedef int ssize_t ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(
 const struct ieee80211_sub_if_data *VAR_1, char *VAR_2, int VAR_3)
{
 const struct ieee80211_if_managed *VAR_4 = &VAR_1->u.mgd;
 bool VAR_5;

 VAR_5 = FUNC_0(&VAR_1->local->hw, VAR_0) &&
   !VAR_4->tdls_wider_bw_prohibited;

 return FUNC_1(VAR_2, VAR_3, "%d\n", VAR_5);
}
