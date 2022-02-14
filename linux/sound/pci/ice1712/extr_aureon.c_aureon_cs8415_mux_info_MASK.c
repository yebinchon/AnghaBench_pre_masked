
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;
struct snd_ctl_elem_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_1(VAR_1);
 static const char * const VAR_4[] = {
  "CD",
  "Optical"
 };
 static const char * const VAR_5[] = {
  "CD",
  "Coax"
 };
 if (VAR_3->eeprom.subvendor == VAR_0)
  return FUNC_0(VAR_2, 1, 2, VAR_5);
 else
  return FUNC_0(VAR_2, 1, 2, VAR_4);
}
