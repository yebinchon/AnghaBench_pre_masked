
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;



 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct hdsp *VAR_1)
{
 switch (VAR_1->control_register & VAR_0) {
 case 130:
  return 0;
 case 128:
  return 1;
 case 129:
  return 2;
 default:
  return 1;
 }
}
