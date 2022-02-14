
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_oxfw {int unit; struct fw_spkr* spec; } ;
struct snd_kcontrol {struct snd_oxfw* private_data; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fw_spkr {unsigned int mixer_channels; scalar_t__ volume_min; scalar_t__ volume_max; scalar_t__* volume; int volume_fb_id; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*,unsigned int,int ,int ) ;
 size_t* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_oxfw *VAR_6 = VAR_4->private_data;
 struct fw_spkr *VAR_7 = VAR_6->spec;
 unsigned int VAR_8, VAR_9;
 bool VAR_10 = 1;
 s16 VAR_11;
 int VAR_12;

 for (VAR_8 = 0; VAR_8 < VAR_7->mixer_channels; ++VAR_8) {
  if (VAR_5->value.integer.value[VAR_8] < VAR_7->volume_min ||
      VAR_5->value.integer.value[VAR_8] > VAR_7->volume_max)
   return -VAR_2;
  if (VAR_5->value.integer.value[VAR_8] !=
      VAR_5->value.integer.value[0])
   VAR_10 = 0;
 }

 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7->mixer_channels; ++VAR_8)
  if (VAR_5->value.integer.value[VAR_3[VAR_8]] !=
       VAR_7->volume[VAR_8])
   VAR_9 |= 1 << (VAR_8 + 1);

 if (VAR_10 && VAR_9 != 0)
  VAR_9 = 1 << 0;

 for (VAR_8 = 0; VAR_8 <= VAR_7->mixer_channels; ++VAR_8) {
  VAR_11 = VAR_5->value.integer.value[VAR_3[VAR_8 ? VAR_8 - 1 : 0]];
  if (VAR_9 & (1 << VAR_8)) {
   VAR_12 = FUNC_0(VAR_6->unit,
        VAR_7->volume_fb_id, &VAR_11,
        VAR_8, VAR_0, VAR_1);
   if (VAR_12 < 0)
    return VAR_12;
  }
  if (VAR_8 > 0)
   VAR_7->volume[VAR_8 - 1] = VAR_11;
 }

 return VAR_9 != 0;
}
