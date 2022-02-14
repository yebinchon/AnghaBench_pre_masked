
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int* comp_enabled; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_7,
     struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_7);
 struct wcd9335_codec *VAR_10 = FUNC_0(VAR_9->dev);
 int VAR_11 = ((struct soc_mixer_control *) VAR_7->private_value)->shift;
 int VAR_12 = VAR_8->value.integer.value[0];
 int VAR_13;

 VAR_10->comp_enabled[VAR_11] = VAR_12;
 VAR_13 = VAR_12 ? VAR_0 :
  VAR_2;


 switch (VAR_11) {
 case 131:

  FUNC_1(VAR_9, VAR_3,
          VAR_1, VAR_13);
  break;
 case 130:
  FUNC_1(VAR_9, VAR_4,
          VAR_1, VAR_13);
  break;
 case 129:
  FUNC_1(VAR_9, VAR_5,
          VAR_1, VAR_13);
  break;
 case 128:
  FUNC_1(VAR_9, VAR_6,
          VAR_1, VAR_13);
  break;
 default:
  break;
 };

 return 0;
}
