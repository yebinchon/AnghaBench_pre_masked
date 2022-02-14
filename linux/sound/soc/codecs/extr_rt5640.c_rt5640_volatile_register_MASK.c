
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {unsigned int window_start; unsigned int window_len; unsigned int range_min; unsigned int range_max; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if ((VAR_2 >= VAR_0[VAR_3].window_start &&
       VAR_2 <= VAR_0[VAR_3].window_start +
       VAR_0[VAR_3].window_len) ||
      (VAR_2 >= VAR_0[VAR_3].range_min &&
       VAR_2 <= VAR_0[VAR_3].range_max))
   return 1;

 switch (VAR_2) {
 case 131:
 case 142:
 case 138:
 case 141:
 case 143:
 case 136:
 case 137:
 case 140:
 case 139:
 case 132:
 case 133:
 case 135:
 case 134:
 case 130:
 case 129:
 case 128:
  return 1;
 default:
  return 0;
 }
}
