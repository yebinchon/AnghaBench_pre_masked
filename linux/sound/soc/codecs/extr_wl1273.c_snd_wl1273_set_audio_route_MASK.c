
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1273_priv {scalar_t__ mode; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct wl1273_priv* FUNC_1 (struct snd_soc_component*) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_3);
 struct wl1273_priv *VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->mode == VAR_4->value.enumerated.item[0])
  return 0;


 if (FUNC_2(VAR_5))
  return -VAR_1;

 if (VAR_4->value.enumerated.item[0] >= FUNC_0(VAR_2))
  return -VAR_0;

 VAR_6->mode = VAR_4->value.enumerated.item[0];

 return 1;
}
