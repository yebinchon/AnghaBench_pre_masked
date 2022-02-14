
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int* VAR_0 ;

void FUNC_0(u8 *VAR_1, u8 *VAR_2){
  int VAR_3 = 0;
  int VAR_4 = 0;
  while( VAR_3<128 ){
    int VAR_5 = VAR_1[ VAR_0[VAR_4] & 0x1F ];
    int VAR_6 = (VAR_0[VAR_4] >> 5) + VAR_3;
    for(; VAR_3<128 && VAR_3<VAR_6; VAR_3++){
      VAR_2[VAR_3] = (u8)VAR_5;
    }
    VAR_4++;
  }
}
