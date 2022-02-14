
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_2__ {int pcspkr; int timer_active; } ;



 int VAR_0 ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4, int VAR_5)
{
 unsigned int VAR_6 = 0;

 if (FUNC_0(&VAR_1.timer_active) || !VAR_1.pcspkr)
  return 0;

 switch (VAR_3) {
 case 130:
  switch (VAR_4) {
  case 129:
   if (VAR_5)
    VAR_5 = 1000;
  case 128:
   break;
  default:
   return -1;
  }
  break;

 default:
  return -1;
 }

 if (VAR_5 > 20 && VAR_5 < 32767)
  VAR_6 = VAR_0 / VAR_5;

 FUNC_1(VAR_6);

 return 0;
}
