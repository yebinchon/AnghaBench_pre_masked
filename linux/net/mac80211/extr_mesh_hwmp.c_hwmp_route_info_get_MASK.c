
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {TYPE_2__* mesh; } ;
struct mesh_path {int flags; scalar_t__ sn; scalar_t__ metric; unsigned long exp_time; int hop_count; int state_lock; int path_change_count; int next_hop; } ;
struct TYPE_3__ {int const* addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {int* sa; } ;
struct ieee80211_local {int dummy; } ;
typedef enum mpath_frame_type { ____Placeholder_mpath_frame_type } mpath_frame_type ;
struct TYPE_4__ {int fail_avg; } ;


 scalar_t__ FUNC_0 (struct mesh_path*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int const*) ;
 unsigned long FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int* FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 unsigned long FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 int* FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 unsigned long FUNC_13 (unsigned long) ;
 scalar_t__ FUNC_14 (struct ieee80211_local*,struct sta_info*) ;
 scalar_t__ FUNC_15 (int const*,int const*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct mesh_path*) ;
 struct mesh_path* FUNC_19 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_20 (struct mesh_path*,struct sta_info*) ;
 struct mesh_path* FUNC_21 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_22 (struct mesh_path*) ;
 scalar_t__ FUNC_23 (scalar_t__,int,int) ;
 struct sta_info* FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 struct sta_info* FUNC_29 (struct ieee80211_sub_if_data*,int*) ;
 scalar_t__ FUNC_30 (unsigned long,unsigned long) ;

__attribute__((used)) static u32 FUNC_31(struct ieee80211_sub_if_data *VAR_5,
          struct ieee80211_mgmt *VAR_6,
          const u8 *VAR_7, enum mpath_frame_type VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_5->local;
 struct mesh_path *VAR_10;
 struct sta_info *VAR_11;
 bool VAR_12;
 const u8 *VAR_13, *VAR_14;
 u32 VAR_15, VAR_16;
 unsigned long VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 bool VAR_21 = 1;
 u8 VAR_22;

 FUNC_25();
 VAR_11 = FUNC_29(VAR_5, VAR_6->sa);
 if (!VAR_11) {
  FUNC_26();
  return 0;
 }

 VAR_19 = FUNC_14(VAR_9, VAR_11);

 VAR_12 = 1;

 switch (VAR_8) {
 case 128:
  VAR_13 = FUNC_9(VAR_7);
  VAR_15 = FUNC_10(VAR_7);
  VAR_17 = FUNC_7(VAR_7);
  VAR_16 = FUNC_8(VAR_7);
  VAR_22 = FUNC_6(VAR_7) + 1;
  break;
 case 129:





  VAR_13 = FUNC_4(VAR_7);
  VAR_15 = FUNC_5(VAR_7);
  VAR_17 = FUNC_2(VAR_7);
  VAR_16 = FUNC_3(VAR_7);
  VAR_22 = FUNC_1(VAR_7) + 1;
  break;
 default:
  FUNC_26();
  return 0;
 }
 VAR_20 = VAR_16 + VAR_19;
 if (VAR_20 < VAR_16)
  VAR_20 = VAR_0;
 VAR_18 = FUNC_13(VAR_17);

 if (FUNC_15(VAR_13, VAR_5->vif.addr)) {



  VAR_21 = 0;
  VAR_12 = 0;
 } else {
  VAR_10 = FUNC_21(VAR_5, VAR_13);
  if (VAR_10) {
   FUNC_27(&VAR_10->state_lock);
   if (VAR_10->flags & VAR_3)
    VAR_12 = 0;
   else if ((VAR_10->flags & VAR_2) &&
       (VAR_10->flags & VAR_4)) {
    if (FUNC_12(VAR_10->sn, VAR_15) ||
        (VAR_10->sn == VAR_15 &&
         (FUNC_24(VAR_10->next_hop) !=
            VAR_11 ?
           FUNC_23(VAR_20, 10, 9) :
           VAR_20) >= VAR_10->metric)) {
     VAR_21 = 0;
     VAR_12 = 0;
    }
   } else if (!(VAR_10->flags & VAR_2)) {
    bool VAR_23, VAR_24, VAR_25;

    VAR_23 = VAR_10->flags & VAR_4;
    VAR_24 = VAR_23 && FUNC_12(VAR_15, VAR_10->sn);
    VAR_25 = VAR_23 &&
       (FUNC_11(VAR_15, VAR_10->sn) >
       VAR_1);

    if (!VAR_23 || VAR_24) {

                              ;
    } else if (VAR_25) {


                                ;
    } else {
     VAR_21 = 0;
     VAR_12 = 0;
    }
   }
  } else {
   VAR_10 = FUNC_19(VAR_5, VAR_13);
   if (FUNC_0(VAR_10)) {
    FUNC_26();
    return 0;
   }
   FUNC_27(&VAR_10->state_lock);
  }

  if (VAR_12) {
   if (FUNC_24(VAR_10->next_hop) != VAR_11)
    VAR_10->path_change_count++;
   FUNC_20(VAR_10, VAR_11);
   VAR_10->flags |= VAR_4;
   VAR_10->metric = VAR_20;
   VAR_10->sn = VAR_15;
   VAR_10->exp_time = FUNC_30(VAR_10->exp_time, VAR_18)
       ? VAR_10->exp_time : VAR_18;
   VAR_10->hop_count = VAR_22;
   FUNC_18(VAR_10);
   FUNC_28(&VAR_10->state_lock);
   FUNC_17(&VAR_11->mesh->fail_avg);

   FUNC_16(&VAR_11->mesh->fail_avg, 1);
   FUNC_22(VAR_10);



  } else
   FUNC_28(&VAR_10->state_lock);
 }


 VAR_14 = VAR_6->sa;
 if (FUNC_15(VAR_13, VAR_14))
  VAR_12 = 0;
 else {
  VAR_12 = 1;

  VAR_10 = FUNC_21(VAR_5, VAR_14);
  if (VAR_10) {
   FUNC_27(&VAR_10->state_lock);
   if ((VAR_10->flags & VAR_3) ||
       ((VAR_10->flags & VAR_2) &&
        ((FUNC_24(VAR_10->next_hop) != VAR_11 ?
           FUNC_23(VAR_19, 10, 9) :
           VAR_19) > VAR_10->metric)))
    VAR_12 = 0;
  } else {
   VAR_10 = FUNC_19(VAR_5, VAR_14);
   if (FUNC_0(VAR_10)) {
    FUNC_26();
    return 0;
   }
   FUNC_27(&VAR_10->state_lock);
  }

  if (VAR_12) {
   if (FUNC_24(VAR_10->next_hop) != VAR_11)
    VAR_10->path_change_count++;
   FUNC_20(VAR_10, VAR_11);
   VAR_10->metric = VAR_19;
   VAR_10->exp_time = FUNC_30(VAR_10->exp_time, VAR_18)
       ? VAR_10->exp_time : VAR_18;
   VAR_10->hop_count = 1;
   FUNC_18(VAR_10);
   FUNC_28(&VAR_10->state_lock);
   FUNC_17(&VAR_11->mesh->fail_avg);

   FUNC_16(&VAR_11->mesh->fail_avg, 1);
   FUNC_22(VAR_10);
  } else
   FUNC_28(&VAR_10->state_lock);
 }

 FUNC_26();

 return VAR_21 ? VAR_20 : 0;
}
