
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {scalar_t__ no_series_update; scalar_t__ dcs_codes_r; scalar_t__ dcs_codes_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm_hubs_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_6,
          struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_3(VAR_6);
 struct wm_hubs_data *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6, VAR_7);



 if (VAR_9->dcs_codes_l || VAR_9->dcs_codes_r || VAR_9->no_series_update)
  return VAR_10;


 if (FUNC_1(VAR_8, VAR_5)
     & (VAR_3 | VAR_4))
  FUNC_2(VAR_8,
        VAR_2,
        VAR_0 |
        VAR_1,
        VAR_0 |
        VAR_1);

 return VAR_10;
}
