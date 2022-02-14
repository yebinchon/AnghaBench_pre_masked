
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct cmipci {int chip_version; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct cmipci* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_info *VAR_1)
{
 struct cmipci *VAR_2 = FUNC_1(VAR_0);
 static const char *const VAR_3[3] = {
  "Line-In", "Rear Output", "Bass Output"
 };

 return FUNC_0(VAR_1, 1,
     VAR_2->chip_version >= 39 ? 3 : 2, VAR_3);
}
