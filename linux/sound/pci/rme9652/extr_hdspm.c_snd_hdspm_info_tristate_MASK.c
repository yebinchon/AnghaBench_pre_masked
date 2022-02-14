
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,char const* const*) ;


__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_info *VAR_1)
{
 u32 VAR_2 = VAR_0->private_value;

 static const char *const VAR_3[] = { "Optical", "Coaxial", "Internal" };
 static const char *const VAR_4[] = { "Hi Gain", "+4 dBu", "-10 dBV" };

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_1, VAR_3);
  break;
 default:
  FUNC_0(VAR_1, VAR_4);
  break;
 }
 return 0;
}
