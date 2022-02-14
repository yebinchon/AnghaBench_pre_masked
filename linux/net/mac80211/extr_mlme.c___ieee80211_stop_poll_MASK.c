
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__* local; TYPE_2__ u; } ;
struct TYPE_6__ {int mtx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_1)
{
 FUNC_1(&VAR_1->local->mtx);

 VAR_1->u.mgd.flags &= ~VAR_0;
 FUNC_0(VAR_1->local);
}
