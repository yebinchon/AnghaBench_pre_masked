
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0 (uint8_t *VAR_0, uint8_t* VAR_1, uint16_t *VAR_2)
{
  uint16_t VAR_3;
  uint16_t VAR_4;

  *VAR_2 = VAR_1[0];
  VAR_3 = 2 * VAR_1[0];
  VAR_1 ++;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4+=2 )
  {

    *VAR_0 = VAR_1[VAR_4];
    VAR_0++;
  }
  *VAR_0 = 0;
}
