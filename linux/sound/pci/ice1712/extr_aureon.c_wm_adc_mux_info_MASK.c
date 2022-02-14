
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
 static const char * const VAR_3[] = {
  "CD",
  "Aux",
  "Line",
  "Mic",
  "AC97"
 };
 static const char * const VAR_4[] = {
  "Aux1",
  "CD",
  "Phono",
  "Line",
  "Aux2",
  "Mic",
  "Aux3",
  "AC97"
 };
 struct snd_ice1712 *VAR_5 = FUNC_1(VAR_1);

 if (VAR_5->eeprom.subvendor == VAR_0)
  return FUNC_0(VAR_2, 2, 8, VAR_4);
 else
  return FUNC_0(VAR_2, 2, 5, VAR_3);
}
