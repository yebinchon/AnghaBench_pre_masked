
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;


 int FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sta_info*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sta_info*,struct ieee80211_hdr*) ;
 int FUNC_5 (struct sta_info*,struct ieee80211_hdr*) ;

void FUNC_6(struct sta_info *VAR_0,
        struct ieee80211_hdr *VAR_1)
{
 if (FUNC_3(VAR_1->addr1) &&
     FUNC_1(VAR_1->frame_control)) {




  FUNC_5(VAR_0, VAR_1);


  FUNC_2(FUNC_0(VAR_1),
            VAR_0, 0, 0);
 } else {




  FUNC_4(VAR_0, VAR_1);
 }
}
