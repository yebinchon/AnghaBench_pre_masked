
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hdspm *VAR_2, int VAR_3)
{
 if (VAR_3 <= 48000) {
  if (VAR_2->control_register & VAR_1)
   return VAR_3 * 4;
  else if (VAR_2->control_register &
    VAR_0)
   return VAR_3 * 2;
 }
 return VAR_3;
}
