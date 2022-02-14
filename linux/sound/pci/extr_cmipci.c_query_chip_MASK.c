
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {int chip_version; int can_ac3_sw; int can_ac3_hw; int max_channels; int can_96k; int can_multi_ch; int do_soft_ac3; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct cmipci*,int ) ;

__attribute__((used)) static void FUNC_1(struct cmipci *VAR_7)
{
 unsigned int VAR_8;


 VAR_8 = FUNC_0(VAR_7, VAR_6) & VAR_4;
 if (! VAR_8) {

  VAR_8 = FUNC_0(VAR_7, VAR_5) & VAR_3;
  switch (VAR_8) {
  case 0:
   VAR_7->chip_version = 33;
   if (VAR_7->do_soft_ac3)
    VAR_7->can_ac3_sw = 1;
   else
    VAR_7->can_ac3_hw = 1;
   break;
  case 128:
   VAR_7->chip_version = 37;
   VAR_7->can_ac3_hw = 1;
   break;
  default:
   VAR_7->chip_version = 39;
   VAR_7->can_ac3_hw = 1;
   break;
  }
  VAR_7->max_channels = 2;
 } else {
  if (VAR_8 & VAR_0) {
   VAR_7->chip_version = 39;
   if (VAR_8 & VAR_1)
    VAR_7->max_channels = 6;
   else
    VAR_7->max_channels = 4;
  } else if (VAR_8 & VAR_2) {
   VAR_7->chip_version = 68;
   VAR_7->max_channels = 8;
   VAR_7->can_96k = 1;
  } else {
   VAR_7->chip_version = 55;
   VAR_7->max_channels = 6;
   VAR_7->can_96k = 1;
  }
  VAR_7->can_ac3_hw = 1;
  VAR_7->can_multi_ch = 1;
 }
}
