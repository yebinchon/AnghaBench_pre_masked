
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

 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 struct fsl_sai* FUNC_4 (struct device*) ;

__attribute__((used)) static bool FUNC_5(struct device *VAR_0, unsigned int VAR_1)
{
 struct fsl_sai *VAR_2 = FUNC_4(VAR_0);
 unsigned int VAR_3 = VAR_2->soc_data->reg_offset;

 if (VAR_1 >= FUNC_3(VAR_3) && VAR_1 <= FUNC_2(VAR_3))
  return 1;

 if (VAR_1 >= FUNC_1(VAR_3) && VAR_1 <= FUNC_0(VAR_3))
  return 1;

 switch (VAR_1) {
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 137:
  return 1;
 default:
  return 0;
 }
}
