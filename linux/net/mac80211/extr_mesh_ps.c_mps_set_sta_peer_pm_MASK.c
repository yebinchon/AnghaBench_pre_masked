
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int addr; } ;
struct sta_info {TYPE_2__* mesh; TYPE_1__ sta; int sdata; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;
struct TYPE_4__ {int peer_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sta_info *VAR_4,
    struct ieee80211_hdr *VAR_5)
{
 enum nl80211_mesh_power_mode VAR_6;
 u8 *VAR_7 = FUNC_0(VAR_5);
 if (FUNC_1(VAR_5->frame_control)) {
  if (VAR_7[1] & (VAR_0 >> 8))
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_3;
 } else {
  VAR_6 = VAR_1;
 }

 if (VAR_4->mesh->peer_pm == VAR_6)
  return;

 FUNC_3(VAR_4->sdata, "STA %pM enters mode %d\n",
  VAR_4->sta.addr, VAR_6);

 VAR_4->mesh->peer_pm = VAR_6;

 FUNC_2(VAR_4);
}
