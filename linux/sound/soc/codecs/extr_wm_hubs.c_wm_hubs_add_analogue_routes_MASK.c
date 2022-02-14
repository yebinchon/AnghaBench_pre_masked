
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int dcs_done; int dcs_cache; struct snd_soc_component* component; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct wm_hubs_data* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;

int FUNC_6(struct snd_soc_component *VAR_5,
    int VAR_6, int VAR_7)
{
 struct wm_hubs_data *VAR_8 = FUNC_4(VAR_5);
 struct snd_soc_dapm_context *VAR_9 = FUNC_3(VAR_5);

 VAR_8->component = VAR_5;

 FUNC_1(&VAR_8->dcs_cache);
 FUNC_2(&VAR_8->dcs_done);

 FUNC_5(VAR_9, VAR_0,
    FUNC_0(VAR_0));

 if (VAR_6)
  FUNC_5(VAR_9,
     VAR_1,
     FUNC_0(VAR_1));
 else
  FUNC_5(VAR_9,
     VAR_2,
     FUNC_0(VAR_2));

 if (VAR_7)
  FUNC_5(VAR_9,
     VAR_3,
     FUNC_0(VAR_3));
 else
  FUNC_5(VAR_9,
     VAR_4,
     FUNC_0(VAR_4));

 return 0;
}
