
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mesh_csa_settings {int dummy; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {TYPE_4__ bss_conf; } ;
struct TYPE_7__ {int mtx; } ;
struct ieee80211_if_mesh {int csa; scalar_t__ chsw_ttl; int csa_role; } ;
struct TYPE_12__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_1__ wdev; TYPE_6__ u; } ;
struct TYPE_8__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct mesh_csa_settings*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ) ;
 struct mesh_csa_settings* FUNC_5 (int ,int ) ;
 int VAR_3 ;

int FUNC_6(struct ieee80211_sub_if_data *VAR_4)
{
 struct ieee80211_if_mesh *VAR_5 = &VAR_4->u.mesh;
 struct mesh_csa_settings *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;


 VAR_5->csa_role = VAR_2;
 VAR_5->chsw_ttl = 0;


 VAR_6 = FUNC_5(VAR_5->csa,
         FUNC_3(&VAR_4->wdev.mtx));
 FUNC_0(VAR_5->csa, ((void*)0));
 if (VAR_6)
  FUNC_2(VAR_6, VAR_3);
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  return -VAR_1;

 VAR_8 |= VAR_0;

 FUNC_4(VAR_4, "complete switching to center freq %d MHz",
   VAR_4->vif.bss_conf.chandef.chan->center_freq);
 return VAR_8;
}
