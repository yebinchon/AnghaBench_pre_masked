
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int expires; } ;
struct TYPE_5__ {TYPE_3__ timer; } ;
struct TYPE_6__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int FUNC_0 (TYPE_3__*,unsigned long) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_0,
        unsigned long VAR_1)
{
 FUNC_1(VAR_0);

 if (!FUNC_3(&VAR_0->u.mgd.timer) ||
     FUNC_2(VAR_1, VAR_0->u.mgd.timer.expires))
  FUNC_0(&VAR_0->u.mgd.timer, VAR_1);
}
