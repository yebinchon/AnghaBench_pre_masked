
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pcm512x_priv {int mute; int mutex; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcm512x_priv*) ;
 struct pcm512x_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
            struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_5(VAR_0);
 struct pcm512x_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4, VAR_5 = 0;

 FUNC_1(&VAR_3->mutex);

 if ((VAR_3->mute & 0x4) == (VAR_1->value.integer.value[0] << 2)) {
  VAR_3->mute ^= 0x4;
  VAR_5 = 1;
 }
 if ((VAR_3->mute & 0x2) == (VAR_1->value.integer.value[1] << 1)) {
  VAR_3->mute ^= 0x2;
  VAR_5 = 1;
 }

 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 != 0) {
   FUNC_0(VAR_2->dev,
    "Failed to update digital mute: %d\n", VAR_4);
   FUNC_2(&VAR_3->mutex);
   return VAR_4;
  }
 }

 FUNC_2(&VAR_3->mutex);

 return VAR_5;
}
