
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via82xx {unsigned char* playback_volume_c; int port; unsigned char** playback_volume; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned char* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 struct via82xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;
 unsigned char VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_6 = VAR_3->value.integer.value[VAR_7];
  if (VAR_6 > VAR_0)
   VAR_6 = VAR_0;
  VAR_6 = VAR_0 - VAR_6;
  if (VAR_6 != VAR_4->playback_volume_c[VAR_7]) {
   VAR_8 = 1;
   VAR_4->playback_volume_c[VAR_7] = VAR_6;
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
    unsigned long VAR_9 = VAR_4->port + 0x10 * VAR_5;
    VAR_4->playback_volume[VAR_5][VAR_7] = VAR_6;
    FUNC_0(VAR_6, VAR_9 + VAR_1 + VAR_7);
   }
  }
 }
 return VAR_8;
}
