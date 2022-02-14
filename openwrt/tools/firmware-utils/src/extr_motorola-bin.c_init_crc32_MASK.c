
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1()
{
 const uint32_t VAR_2 = FUNC_0(0x2083b8ed);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 1<<VAR_0; VAR_3++) {
  uint32_t VAR_4 = VAR_3;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4 = (VAR_4 & 1) ? (VAR_2 ^ (VAR_4 >> 1)) : (VAR_4 >> 1);
  VAR_1[VAR_3] = VAR_4;
 }
}
