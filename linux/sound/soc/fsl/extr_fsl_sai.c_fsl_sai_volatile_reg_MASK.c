
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_sai {TYPE_1__* soc_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 struct fsl_sai* FUNC_2 (struct device*) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct fsl_sai *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = VAR_2->soc_data->reg_offset;

 if (VAR_1 == FUNC_1(VAR_3) || VAR_1 == FUNC_0(VAR_3))
  return 1;

 switch (VAR_1) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 151:
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
  return 1;
 default:
  return 0;
 }
}
