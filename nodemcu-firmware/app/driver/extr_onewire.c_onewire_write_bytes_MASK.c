
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;


 int FUNC_0 (int ,int const,int) ;
 int VAR_0 ;

void FUNC_1(uint8_t VAR_1, const uint8_t *VAR_2, uint16_t VAR_3, bool VAR_4 ) {
  uint16_t VAR_5;
  for (VAR_5 = 0 ; VAR_5 < VAR_3 ; VAR_5++)
    FUNC_0(VAR_1, VAR_2[VAR_5], VAR_5 < VAR_3-1 ? VAR_0 : VAR_4);
}
