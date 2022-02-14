
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; int settings_register; int control_register; } ;



 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static int FUNC_0(struct hdspm *VAR_2)
{
 switch (VAR_2->io_type) {
 case 129:
 case 128:
  if (VAR_2->settings_register & VAR_1)
   return 0;
  break;

 default:
  if (VAR_2->control_register & VAR_0)
   return 0;
 }

 return 1;
}
