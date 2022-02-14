
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int version; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct snd_es18xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[5] = {
  "Mic", "CD", "Line", "Master", "Mix"
 };
 static const char * const VAR_4[8] = {
  "Mic", "Mic Master", "CD", "AOUT",
  "Mic1", "Mix", "Line", "Master"
 };
 struct snd_es18xx *VAR_5 = FUNC_1(VAR_1);

 switch (VAR_5->version) {
 case 0x1868:
 case 0x1878:
  return FUNC_0(VAR_2, 1, 4, VAR_3);
 case 0x1887:
 case 0x1888:
  return FUNC_0(VAR_2, 1, 5, VAR_3);
 case 0x1869:
 case 0x1879:
  return FUNC_0(VAR_2, 1, 8, VAR_4);
 default:
  return -VAR_0;
 }
}
