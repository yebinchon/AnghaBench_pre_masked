
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (uint32_t VAR_1)
{
 unsigned VAR_2, VAR_3;

 VAR_2 = VAR_1 >> 16;
 if (VAR_2)
 {
  VAR_3 = VAR_2 >> 8;
  if (VAR_3)
   return VAR_0[VAR_3];
  else
   return 8 + VAR_0[VAR_2];
 }
 else
 {
  VAR_2 = VAR_1 >> 8;
  if (VAR_2)
   return 16 + VAR_0[VAR_2];
  else
   return 24 + VAR_0[VAR_1];
 }
}
