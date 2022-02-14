
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8753_priv {int dai_func; int voice_fmt; int hifi_fmt; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8753_priv* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_4(VAR_2);
 struct wm8753_priv *VAR_5 = FUNC_0(VAR_4);
 u16 VAR_6;

 if (VAR_5->dai_func == VAR_3->value.enumerated.item[0])
  return 0;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_1);

 VAR_5->dai_func = VAR_3->value.enumerated.item[0];

 if (((VAR_6 >> 2) & 0x3) == VAR_5->dai_func)
  return 1;

 VAR_6 = (VAR_6 & 0x1f3) | (VAR_5->dai_func << 2);
 FUNC_3(VAR_4, VAR_1, VAR_6);


 FUNC_5(VAR_4, VAR_5->hifi_fmt);
 FUNC_6(VAR_4, VAR_5->voice_fmt);

 return 1;
}
