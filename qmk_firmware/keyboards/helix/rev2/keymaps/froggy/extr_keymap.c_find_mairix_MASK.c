
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int *** VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(uint16_t VAR_4, uint8_t *VAR_5, uint8_t *VAR_6){
  for(uint8_t VAR_7=0; VAR_7<VAR_1; VAR_7++){
    for(uint8_t VAR_8=0; VAR_8<VAR_0; VAR_8++){
      if( FUNC_0(&(VAR_3[VAR_2][VAR_7][VAR_8]))==VAR_4){
        *VAR_5 = VAR_7;
        *VAR_6 = VAR_8;
        return 1;
      }
    }
  }
  return 0;
}
