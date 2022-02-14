
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint8
FUNC_1(unsigned VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == -1)
  return 96 + (VAR_0 & 0x1F);

 for (VAR_2 = 0; VAR_2 <= 255; VAR_2++)
  if (FUNC_0(VAR_2) >= VAR_1)
   return VAR_2;
 return 255;
}
