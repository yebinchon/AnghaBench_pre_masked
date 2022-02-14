
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_info *VAR_1)
{
 static const char * const VAR_2[7] = {
  "Mic2 Jack", "Mic1 Jack", "Line In Jack",
  "Front Jack", "Rear Jack", "Center/LFE Jack", "Mute" };

 return FUNC_0(VAR_1, 1, 7, VAR_2);
}
