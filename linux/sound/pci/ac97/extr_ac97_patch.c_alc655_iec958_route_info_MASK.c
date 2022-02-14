
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ dev_flags; } ;
struct snd_ac97 {TYPE_1__ spec; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_info *VAR_1)
{
 static const char * const VAR_2[3] = {
  "PCM", "Analog In", "IEC958 In"
 };
 static const char * const VAR_3[4] = {
  "PCM", "Analog1 In", "Analog2 In", "IEC958 In"
 };
 struct snd_ac97 *VAR_4 = FUNC_1(VAR_0);

 if (VAR_4->spec.dev_flags)
  return FUNC_0(VAR_1, 1, 4, VAR_3);
 else
  return FUNC_0(VAR_1, 1, 3, VAR_2);
}
