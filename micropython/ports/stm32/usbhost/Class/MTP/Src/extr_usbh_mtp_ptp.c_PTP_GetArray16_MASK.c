
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static uint32_t FUNC_2 (uint16_t *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
  uint32_t VAR_3, VAR_4 = 0;

  VAR_3=FUNC_1(&VAR_1[VAR_2]);
  while (VAR_3 > VAR_4)
  {
    VAR_0[VAR_4] = FUNC_0(&VAR_1[VAR_2+(sizeof(uint16_t)*(VAR_4+2))]);
    VAR_4++;
  }
  return VAR_3;
}
