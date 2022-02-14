
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdmi_codec_priv {int eld; } ;


 int FUNC_0 (int ,int ,int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 struct hdmi_codec_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0);
 struct hdmi_codec_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_1->value.bytes.data, VAR_3->eld, sizeof(VAR_3->eld));

 return 0;
}
