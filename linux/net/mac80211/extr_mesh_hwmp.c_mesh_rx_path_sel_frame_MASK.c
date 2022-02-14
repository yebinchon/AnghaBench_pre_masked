
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {TYPE_1__* mesh; } ;
struct ieee802_11_elems {int preq_len; int prep_len; int perr_len; scalar_t__ rann; scalar_t__ perr; scalar_t__ prep; scalar_t__ preq; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_7__ {scalar_t__ variable; } ;
struct TYPE_8__ {TYPE_2__ mesh_action; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {int bssid; TYPE_5__ u; int sa; } ;
struct TYPE_6__ {scalar_t__ plink_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,scalar_t__) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,size_t,int,struct ieee802_11_elems*,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct sta_info* FUNC_8 (struct ieee80211_sub_if_data*,int ) ;

void FUNC_9(struct ieee80211_sub_if_data *VAR_4,
       struct ieee80211_mgmt *VAR_5, size_t VAR_6)
{
 struct ieee802_11_elems VAR_7;
 size_t VAR_8;
 u32 VAR_9;
 struct sta_info *VAR_10;


 if (VAR_6 < VAR_0 + 1)
  return;

 FUNC_6();
 VAR_10 = FUNC_8(VAR_4, VAR_5->sa);
 if (!VAR_10 || VAR_10->mesh->plink_state != VAR_3) {
  FUNC_7();
  return;
 }
 FUNC_7();

 VAR_8 = (u8 *) VAR_5->u.action.u.mesh_action.variable - (u8 *) VAR_5;
 FUNC_5(VAR_5->u.action.u.mesh_action.variable,
          VAR_6 - VAR_8, 0, &VAR_7, VAR_5->bssid, ((void*)0));

 if (VAR_7.preq) {
  if (VAR_7.preq_len != 37)

   return;
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_7.preq,
        VAR_2);
  if (VAR_9)
   FUNC_2(VAR_4, VAR_5, VAR_7.preq,
      VAR_9);
 }
 if (VAR_7.prep) {
  if (VAR_7.prep_len != 31)

   return;
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_7.prep,
        VAR_1);
  if (VAR_9)
   FUNC_1(VAR_4, VAR_5, VAR_7.prep,
      VAR_9);
 }
 if (VAR_7.perr) {
  if (VAR_7.perr_len != 15)

   return;
  FUNC_0(VAR_4, VAR_5, VAR_7.perr);
 }
 if (VAR_7.rann)
  FUNC_3(VAR_4, VAR_5, VAR_7.rann);
}
