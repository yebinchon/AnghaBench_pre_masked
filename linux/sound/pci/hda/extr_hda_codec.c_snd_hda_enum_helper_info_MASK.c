
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;

int FUNC_1(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_info *VAR_1,
        int VAR_2, const char * const *VAR_3)
{
 static const char * const VAR_4[] = {
  "Disabled", "Enabled"
 };

 if (!VAR_3 || !VAR_2) {
  VAR_2 = 2;
  VAR_3 = VAR_4;
 }

 return FUNC_0(VAR_1, 1, VAR_2, VAR_3);
}
