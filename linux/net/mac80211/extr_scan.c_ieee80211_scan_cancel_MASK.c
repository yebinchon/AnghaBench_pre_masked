
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int mtx; int hw; int scan_info; int scan_work; int scan_sdata; TYPE_1__* ops; int scanning; int scan_req; } ;
struct TYPE_2__ {scalar_t__ cancel_hw_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct ieee80211_local *VAR_3)
{
 FUNC_5(&VAR_3->mtx);
 if (!VAR_3->scan_req)
  goto out;






 if (FUNC_9(VAR_2, &VAR_3->scanning) &&
     FUNC_9(VAR_0, &VAR_3->scanning)) {
  FUNC_8(VAR_1, &VAR_3->scanning);
  goto out;
 }

 if (FUNC_9(VAR_2, &VAR_3->scanning)) {




  FUNC_8(VAR_1, &VAR_3->scanning);
  if (VAR_3->ops->cancel_hw_scan)
   FUNC_2(VAR_3,
    FUNC_7(VAR_3->scan_sdata,
      FUNC_3(&VAR_3->mtx)));
  goto out;
 }






 FUNC_1(&VAR_3->scan_work);

 FUNC_4(&VAR_3->scan_info, 0, sizeof(VAR_3->scan_info));
 FUNC_0(&VAR_3->hw, 1);
out:
 FUNC_6(&VAR_3->mtx);
}
