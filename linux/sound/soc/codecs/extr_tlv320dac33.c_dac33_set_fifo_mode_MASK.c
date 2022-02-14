
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tlv320dac33_priv {scalar_t__ fifo_mode; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tlv320dac33_priv* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_3);
 struct tlv320dac33_priv *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;

 if (VAR_6->fifo_mode == VAR_4->value.enumerated.item[0])
  return 0;

 if (FUNC_1(VAR_5))
  return -VAR_2;

 if (VAR_4->value.enumerated.item[0] >= VAR_0)
  VAR_7 = -VAR_1;
 else
  VAR_6->fifo_mode = VAR_4->value.enumerated.item[0];

 return VAR_7;
}
