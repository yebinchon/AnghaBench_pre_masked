
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_mesh_sync_ops {int dummy; } ;
struct TYPE_3__ {scalar_t__ method; struct ieee80211_mesh_sync_ops const ops; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const struct ieee80211_mesh_sync_ops *FUNC_1(u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0 ; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_0[VAR_2].method == VAR_1)
   return &VAR_0[VAR_2].ops;
 }
 return ((void*)0);
}
