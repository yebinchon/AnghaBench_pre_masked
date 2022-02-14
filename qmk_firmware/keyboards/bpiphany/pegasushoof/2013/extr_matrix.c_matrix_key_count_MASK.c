
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;

uint8_t FUNC_1(void)
{
 uint8_t VAR_2 = 0;
 for (uint8_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 += FUNC_0(VAR_1[VAR_3]);
 }
 return VAR_2;
}
