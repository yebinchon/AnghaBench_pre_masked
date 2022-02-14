
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int addr; int support_p2p_ps; } ;
struct sta_info {int sta_state; TYPE_2__ sta; TYPE_3__* sdata; int _flags; int assoc_at; int local; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_9__ {int type; } ;
struct TYPE_11__ {int dev; TYPE_1__ vif; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,TYPE_3__*,struct sta_info*,int const,int) ;
 int FUNC_4 (struct sta_info*) ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct sta_info*) ;
 int FUNC_7 (struct sta_info*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (TYPE_3__*,char*,int ,int) ;
 scalar_t__ FUNC_16 (struct sta_info*,int ) ;

int FUNC_17(struct sta_info *VAR_7,
   enum ieee80211_sta_state VAR_8)
{
 FUNC_13();

 if (VAR_7->sta_state == VAR_8)
  return 0;



 switch (VAR_8) {
 case 128:
  if (VAR_7->sta_state != 130)
   return -VAR_0;
  break;
 case 130:
  if (VAR_7->sta_state != 128 &&
      VAR_7->sta_state != 131)
   return -VAR_0;
  break;
 case 131:
  if (VAR_7->sta_state != 130 &&
      VAR_7->sta_state != 129)
   return -VAR_0;
  break;
 case 129:
  if (VAR_7->sta_state != 131)
   return -VAR_0;
  break;
 default:
  FUNC_0(1, "invalid state %d", VAR_8);
  return -VAR_0;
 }

 FUNC_15(VAR_7->sdata, "moving STA %pM to state %d\n",
  VAR_7->sta.addr, VAR_8);





 if (FUNC_16(VAR_7, VAR_6)) {
  int VAR_9 = FUNC_3(VAR_7->local, VAR_7->sdata, VAR_7,
     VAR_7->sta_state, VAR_8);
  if (VAR_9)
   return VAR_9;
 }



 switch (VAR_8) {
 case 128:
  if (VAR_7->sta_state == 130)
   FUNC_2(VAR_4, &VAR_7->_flags);
  break;
 case 130:
  if (VAR_7->sta_state == 128) {
   FUNC_14(VAR_4, &VAR_7->_flags);
  } else if (VAR_7->sta_state == 131) {
   FUNC_2(VAR_3, &VAR_7->_flags);
   FUNC_8(VAR_7->sdata);
   if (!VAR_7->sta.support_p2p_ps)
    FUNC_9(VAR_7->sdata);
  }
  break;
 case 131:
  if (VAR_7->sta_state == 130) {
   FUNC_14(VAR_3, &VAR_7->_flags);
   VAR_7->assoc_at = FUNC_12();
   FUNC_8(VAR_7->sdata);
   if (!VAR_7->sta.support_p2p_ps)
    FUNC_9(VAR_7->sdata);
  } else if (VAR_7->sta_state == 129) {
   FUNC_10(VAR_7->sdata);
   FUNC_2(VAR_5, &VAR_7->_flags);
   FUNC_7(VAR_7);
   FUNC_6(VAR_7);
  }
  break;
 case 129:
  if (VAR_7->sta_state == 131) {
   FUNC_11(VAR_7->sdata);
   FUNC_14(VAR_5, &VAR_7->_flags);
   FUNC_5(VAR_7);
   FUNC_4(VAR_7);
  }
  if (VAR_7->sdata->vif.type == VAR_2 ||
      VAR_7->sdata->vif.type == VAR_1)
   FUNC_1(VAR_7->sdata->dev,
          VAR_7->sta.addr);
  break;
 default:
  break;
 }

 VAR_7->sta_state = VAR_8;

 return 0;
}
