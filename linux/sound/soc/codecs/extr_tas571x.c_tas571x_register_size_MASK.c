
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tas571x_private {TYPE_1__* chip; } ;
struct TYPE_2__ {int vol_reg_size; } ;
__attribute__((used)) static int FUNC_0(struct tas571x_private *VAR_0, unsigned int VAR_1)
{
 switch (VAR_1) {
 case 129:
 case 133:
 case 132:
  return VAR_0->chip->vol_reg_size;
 case 130:
 case 131:
 case 128:
 case 136:
 case 137:
 case 135:
 case 134:
  return 4;
 default:
  return 1;
 }
}
