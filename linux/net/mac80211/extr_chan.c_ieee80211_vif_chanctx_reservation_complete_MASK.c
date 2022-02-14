
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int chswitch_work; } ;
struct TYPE_8__ {TYPE_3__ mgd; } ;
struct TYPE_5__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__* local; int csa_finalize_work; TYPE_1__ vif; } ;
struct TYPE_6__ {int hw; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_sub_if_data *VAR_0)
{
 switch (VAR_0->vif.type) {
 case 141:
 case 140:
 case 138:
 case 135:
  FUNC_1(&VAR_0->local->hw,
         &VAR_0->csa_finalize_work);
  break;
 case 131:
  FUNC_1(&VAR_0->local->hw,
         &VAR_0->u.mgd.chswitch_work);
  break;
 case 130:
 case 139:
 case 129:
 case 137:
 case 134:
 case 132:
 case 133:
 case 136:
 case 128:
  FUNC_0(1);
  break;
 }
}
