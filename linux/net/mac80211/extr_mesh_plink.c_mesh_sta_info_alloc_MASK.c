
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct ieee802_11_elems {int total_len; int ie_start; } ;
struct TYPE_5__ {int security; scalar_t__ user_mpm; } ;
struct TYPE_6__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__* local; TYPE_3__ u; } ;
struct ieee80211_rx_status {int signal; } ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_1 (int ,int *,int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct ieee802_11_elems*) ;
 scalar_t__ FUNC_4 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static struct sta_info *
FUNC_5(struct ieee80211_sub_if_data *VAR_3, u8 *VAR_4,
      struct ieee802_11_elems *VAR_5,
      struct ieee80211_rx_status *VAR_6)
{
 struct sta_info *VAR_7 = ((void*)0);


 if (VAR_3->u.mesh.user_mpm ||
     VAR_3->u.mesh.security & VAR_1) {
  if (FUNC_3(VAR_5) &&
      FUNC_4(VAR_3)) {
   int VAR_8 = 0;

   if (FUNC_2(&VAR_3->local->hw, VAR_2))
    VAR_8 = VAR_6->signal;

   FUNC_1(VAR_3->dev, VAR_4,
          VAR_5->ie_start,
          VAR_5->total_len,
          VAR_8, VAR_0);
  }
 } else
  VAR_7 = FUNC_0(VAR_3, VAR_4);

 return VAR_7;
}
