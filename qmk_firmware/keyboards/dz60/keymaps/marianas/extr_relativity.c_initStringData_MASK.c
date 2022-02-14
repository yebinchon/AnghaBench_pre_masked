
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

void FUNC_1()
{
  if (VAR_2 == 0)
  {
    VAR_2 = FUNC_0(VAR_3*sizeof(uint16_t));
    for(int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
      VAR_2[VAR_6] = 0;
    }
  }
  if (VAR_4 == 0)
  {
    VAR_4 = FUNC_0(VAR_5*sizeof(char));
    for(int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      VAR_4[VAR_7] = 0;
    }
  }
  if (VAR_0 == 0)
  {
    VAR_0 = FUNC_0(VAR_1*sizeof(uint8_t));
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    {
      VAR_0[VAR_8] = 0;
    }
  }
}
