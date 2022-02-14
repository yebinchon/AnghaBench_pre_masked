
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int id; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 int FUNC_1 (struct snd_kcontrol*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_info *VAR_1)
{
 static const char * const VAR_2[] = {
  "PCM Out",
  "H/W In 0", "H/W In 1", "H/W In 2", "H/W In 3",
  "H/W In 4", "H/W In 5", "H/W In 6", "H/W In 7",
  "IEC958 In L", "IEC958 In R",
  "Digital Mixer",
 };
 int VAR_3 = FUNC_1(VAR_0, &VAR_1->id) < 2 ? 12 : 11;
 return FUNC_0(VAR_1, 1, VAR_3, VAR_2);
}
