
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct echoaudio {int num_digital_modes; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int ,char const* const*) ;
 struct echoaudio* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_info *VAR_1)
{
 static const char * const VAR_2[4] = {
  "S/PDIF Coaxial", "S/PDIF Optical", "ADAT Optical",
  "S/PDIF Cdrom"
 };
 struct echoaudio *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1, 1, VAR_3->num_digital_modes, VAR_2);
}
