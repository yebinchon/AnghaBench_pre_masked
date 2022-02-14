
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mesh_rmc {int dummy; } ;
struct TYPE_4__ {TYPE_3__* rmc; } ;
struct TYPE_5__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct TYPE_6__ {int idx_mask; int * bucket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int,int ) ;

int FUNC_2(struct ieee80211_sub_if_data *VAR_3)
{
 int VAR_4;

 VAR_3->u.mesh.rmc = FUNC_1(sizeof(struct mesh_rmc), VAR_1);
 if (!VAR_3->u.mesh.rmc)
  return -VAR_0;
 VAR_3->u.mesh.rmc->idx_mask = VAR_2 - 1;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_3->u.mesh.rmc->bucket[VAR_4]);
 return 0;
}
