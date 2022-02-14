
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef char uint16_t ;


 int FUNC_0 (char*) ;
 char VAR_0 ;

void FUNC_1(uint8_t *VAR_1, uint8_t *VAR_2, uint16_t *VAR_3)
{
  uint8_t VAR_4 = 0;

  if (VAR_1 != ((void*)0))
  {
    *VAR_3 = FUNC_0(VAR_1) * 2 + 2;
    VAR_2[VAR_4++] = *VAR_3;
    VAR_2[VAR_4++] = VAR_0;

    while (*VAR_1 != '\0')
    {
      VAR_2[VAR_4++] = *VAR_1++;
      VAR_2[VAR_4++] = 0x00;
    }
  }
}
