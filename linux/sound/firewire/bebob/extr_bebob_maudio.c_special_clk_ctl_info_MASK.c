
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int ,char const* const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_info *VAR_2)
{
 static const char *const VAR_3[] = {
  "Internal with Digital Mute",
  "Digital",
  "Word Clock",
  "Internal"
 };
 return FUNC_1(VAR_2, 1, FUNC_0(VAR_0),
     VAR_3);
}
