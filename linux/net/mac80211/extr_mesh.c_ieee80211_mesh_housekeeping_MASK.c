
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int plink_timeout; } ;
struct ieee80211_if_mesh {int housekeeping_timer; TYPE_2__ mshcfg; } ;
struct TYPE_3__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_if_mesh *VAR_4 = &VAR_3->u.mesh;
 u32 VAR_5;

 if (VAR_4->mshcfg.plink_timeout > 0)
  FUNC_1(VAR_3, VAR_4->mshcfg.plink_timeout * VAR_0);
 FUNC_3(VAR_3);

 VAR_5 = FUNC_2(VAR_3);
 FUNC_0(VAR_3, VAR_5);

 FUNC_4(&VAR_4->housekeeping_timer,
    FUNC_5(VAR_2 +
    VAR_1));
}
