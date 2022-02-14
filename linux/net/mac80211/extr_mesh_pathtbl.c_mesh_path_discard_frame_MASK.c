
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dropped_frames_no_route; } ;
struct TYPE_5__ {TYPE_1__ mshstats; } ;
struct TYPE_6__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;


 int FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0,
        struct sk_buff *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->u.mesh.mshstats.dropped_frames_no_route++;
}
