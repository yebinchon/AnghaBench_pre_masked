
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct TYPE_4__ {int * rcdir; } ;
struct ieee80211_local {TYPE_2__ debugfs; } ;
struct TYPE_3__ {int (* free ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rate_control_ref*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_local *VAR_0,
         struct rate_control_ref *VAR_1)
{
 VAR_1->ops->free(VAR_1->priv);






 FUNC_1(VAR_1);
}
