
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uac_mixer_unit_descriptor {int dummy; } ;





 int* FUNC_0 (struct uac_mixer_unit_descriptor*,int) ;

__attribute__((used)) static bool FUNC_1(struct uac_mixer_unit_descriptor *VAR_0,
      int VAR_1, int VAR_2, int VAR_3)
{
 u8 *VAR_4 = (u8 *)VAR_0;
 u8 *VAR_5 = FUNC_0(VAR_0, VAR_1);
 size_t VAR_6;

 switch (VAR_1) {
 case 130:
 default:
  VAR_6 = 1;
  break;
 case 129:
  VAR_6 = 2;
  break;
 case 128:
  VAR_6 = 6;
  break;
 }


 return VAR_5 + (VAR_2 * VAR_3 + 7) / 8 + VAR_6 > VAR_4 + VAR_4[0];
}
