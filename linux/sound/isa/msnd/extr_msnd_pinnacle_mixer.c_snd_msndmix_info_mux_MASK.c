
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {int flags; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,unsigned int,char const* const*) ;
 struct snd_msnd* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[3] = {
  "Analog", "MASS", "SPDIF",
 };
 struct snd_msnd *VAR_4 = FUNC_1(VAR_1);
 unsigned VAR_5 = FUNC_2(VAR_0, &VAR_4->flags) ? 3 : 2;

 return FUNC_0(VAR_2, 1, VAR_5, VAR_3);
}
