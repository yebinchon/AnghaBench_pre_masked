
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {int addr; } ;
struct sta_info {TYPE_3__ sta; } ;
struct mesh_path {int flags; int state_lock; scalar_t__ sn; } ;
struct TYPE_8__ {int dot11MeshForwarding; } ;
struct TYPE_6__ {int dropped_frames_ttl; } ;
struct ieee80211_if_mesh {TYPE_4__ mshcfg; TYPE_2__ mshstats; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_mgmt {int* sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int const*,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int,int const*,scalar_t__,int ,int ) ;
 struct mesh_path* FUNC_7 (struct ieee80211_sub_if_data*,int const*) ;
 struct sta_info* FUNC_8 (struct mesh_path*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_sub_if_data *VAR_4,
        struct ieee80211_mgmt *VAR_5,
        const u8 *VAR_6)
{
 struct ieee80211_if_mesh *VAR_7 = &VAR_4->u.mesh;
 struct mesh_path *VAR_8;
 u8 VAR_9;
 const u8 *VAR_10, *VAR_11;
 u32 VAR_12;
 u16 VAR_13;

 VAR_10 = VAR_5->sa;
 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 <= 1) {
  VAR_7->mshstats.dropped_frames_ttl++;
  return;
 }
 VAR_9--;
 VAR_11 = FUNC_0(VAR_6);
 VAR_12 = FUNC_2(VAR_6);
 VAR_13 = FUNC_1(VAR_6);

 FUNC_9();
 VAR_8 = FUNC_7(VAR_4, VAR_11);
 if (VAR_8) {
  struct sta_info *VAR_14;

  FUNC_11(&VAR_8->state_lock);
  VAR_14 = FUNC_8(VAR_8);
  if (VAR_8->flags & VAR_0 &&
      FUNC_5(VAR_10, VAR_14->sta.addr) &&
      !(VAR_8->flags & VAR_1) &&
      (!(VAR_8->flags & VAR_2) ||
      FUNC_4(VAR_12, VAR_8->sn) || VAR_12 == 0)) {
   VAR_8->flags &= ~VAR_0;
   if (VAR_12 != 0)
    VAR_8->sn = VAR_12;
   else
    VAR_8->sn += 1;
   FUNC_12(&VAR_8->state_lock);
   if (!VAR_7->mshcfg.dot11MeshForwarding)
    goto endperr;
   FUNC_6(VAR_4, VAR_9, VAR_11,
        VAR_12, VAR_13,
        VAR_3);
  } else
   FUNC_12(&VAR_8->state_lock);
 }
endperr:
 FUNC_10();
}
