
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (uint8_t* VAR_1,
                                  uint8_t* VAR_2,
                                  uint16_t VAR_3)
{
  uint16_t VAR_4;
  uint16_t VAR_5;
  if ( VAR_1[1] == VAR_0)
  {


    VAR_4 = ( ( (VAR_1[0]-2) <= VAR_3) ? (VAR_1[0]-2) :VAR_3);
    VAR_1 += 2;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5+=2 )
    {
      *VAR_2 = VAR_1[VAR_5];
      VAR_2++;
    }
    *VAR_2 = 0;
  }
}
