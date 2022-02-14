
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {scalar_t__ ss_channels; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct snd_rme9652* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[4] = {
  "IEC958 In", "ADAT1 In", "ADAT2 In", "ADAT3 In"
 };
 struct snd_rme9652 *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, 1,
     VAR_4->ss_channels == VAR_0 ? 4 : 3,
     VAR_3);
}
