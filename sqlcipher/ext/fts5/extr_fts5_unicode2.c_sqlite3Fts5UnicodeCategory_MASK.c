
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int) ;

int FUNC_1(u32 VAR_3) {
  int VAR_4 = -1;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  u16 VAR_8;

  if( VAR_3>=(1<<20) ){
    return 0;
  }
  VAR_6 = VAR_0[(VAR_3>>16)];
  VAR_5 = VAR_0[1+(VAR_3>>16)];
  VAR_8 = (VAR_3 & 0xFFFF);
  while( VAR_5>VAR_6 ){
    int VAR_9 = (VAR_5 + VAR_6) / 2;
    FUNC_0( VAR_9>=VAR_6 && VAR_9<VAR_5 );
    if( VAR_8>=VAR_2[VAR_9] ){
      VAR_4 = VAR_9;
      VAR_6 = VAR_9+1;
    }else{
      VAR_5 = VAR_9;
    }
  }

  if( VAR_4<0 ) return 0;
  if( VAR_8>=(VAR_2[VAR_4]+(VAR_1[VAR_4]>>5)) ) return 0;
  VAR_7 = VAR_1[VAR_4] & 0x1F;
  if( VAR_7!=30 ) return VAR_7;
  return ((VAR_8 - VAR_2[VAR_4]) & 0x01) ? 5 : 9;
}
