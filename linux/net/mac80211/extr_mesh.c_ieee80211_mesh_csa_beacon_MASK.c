
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mesh_csa_settings {int settings; } ;
struct TYPE_4__ {int mtx; } ;
struct ieee80211_if_mesh {int csa; } ;
struct TYPE_3__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ wdev; TYPE_1__ u; } ;
struct cfg80211_csa_settings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct mesh_csa_settings*,int ) ;
 struct mesh_csa_settings* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct cfg80211_csa_settings*,int) ;
 int FUNC_6 (int ,struct mesh_csa_settings*) ;
 struct mesh_csa_settings* FUNC_7 (int ) ;
 int VAR_3 ;

int FUNC_8(struct ieee80211_sub_if_data *VAR_4,
         struct cfg80211_csa_settings *VAR_5)
{
 struct ieee80211_if_mesh *VAR_6 = &VAR_4->u.mesh;
 struct mesh_csa_settings *VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_4->wdev.mtx);

 VAR_7 = FUNC_3(sizeof(*VAR_7),
       VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_5(&VAR_7->settings, VAR_5,
        sizeof(struct cfg80211_csa_settings));

 FUNC_6(VAR_6->csa, VAR_7);

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8) {
  VAR_7 = FUNC_7(VAR_6->csa);
  FUNC_0(VAR_6->csa, ((void*)0));
  FUNC_2(VAR_7, VAR_3);
  return VAR_8;
 }

 return VAR_0;
}
