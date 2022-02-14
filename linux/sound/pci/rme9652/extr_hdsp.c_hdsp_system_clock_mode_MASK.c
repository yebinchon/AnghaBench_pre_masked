
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; scalar_t__ system_sample_rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hdsp*) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_1)
{
 if (VAR_1->control_register & VAR_0)
  return 0;
 else if (FUNC_0(VAR_1) != VAR_1->system_sample_rate)
   return 0;
 return 1;
}
