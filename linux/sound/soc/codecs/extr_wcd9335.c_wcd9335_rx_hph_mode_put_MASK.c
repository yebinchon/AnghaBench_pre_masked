
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wcd9335_codec {scalar_t__ hph_mode; int dev; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct wcd9335_codec* FUNC_1 (int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_1);
 struct wcd9335_codec *VAR_4 = FUNC_1(VAR_3->dev);
 u32 VAR_5;

 VAR_5 = VAR_2->value.enumerated.item[0];

 if (VAR_5 == 0) {
  FUNC_0(VAR_4->dev, "Invalid HPH Mode, default to ClSH HiFi\n");
  VAR_5 = VAR_0;
 }
 VAR_4->hph_mode = VAR_5;

 return 0;
}
