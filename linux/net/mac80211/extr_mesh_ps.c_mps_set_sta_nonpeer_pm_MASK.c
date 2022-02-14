
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct sta_info {TYPE_2__* mesh; TYPE_1__ sta; int sdata; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;
struct TYPE_4__ {int nonpeer_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sta_info *VAR_2,
       struct ieee80211_hdr *VAR_3)
{
 enum nl80211_mesh_power_mode VAR_4;

 if (FUNC_0(VAR_3->frame_control))
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;

 if (VAR_2->mesh->nonpeer_pm == VAR_4)
  return;

 FUNC_2(VAR_2->sdata, "STA %pM sets non-peer mode to %d\n",
  VAR_2->sta.addr, VAR_4);

 VAR_2->mesh->nonpeer_pm = VAR_4;

 FUNC_1(VAR_2);
}
