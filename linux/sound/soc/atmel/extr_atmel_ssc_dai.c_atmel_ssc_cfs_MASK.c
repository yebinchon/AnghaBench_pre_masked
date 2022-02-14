
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_ssc_info {int daifmt; } ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct atmel_ssc_info *VAR_1)
{
 switch (VAR_1->daifmt & VAR_0) {
 case 129:
 case 128:
  return 1;
 }
 return 0;
}
