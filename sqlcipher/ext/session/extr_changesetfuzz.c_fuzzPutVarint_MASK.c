
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, int VAR_1){
  FUNC_0( VAR_1>0 && VAR_1<2097152 );
  if( VAR_1<128 ){
    VAR_0[0] = (u8)VAR_1;
    return 1;
  }
  if( VAR_1<16384 ){
    VAR_0[0] = ((VAR_1 >> 7) & 0x7F) | 0x80;
    VAR_0[1] = (VAR_1 & 0x7F);
    return 2;
  }

  VAR_0[0] = ((VAR_1 >> 14) & 0x7F) | 0x80;
  VAR_0[1] = ((VAR_1 >> 7) & 0x7F) | 0x80;
  VAR_0[2] = (VAR_1 & 0x7F);
  return 3;
}
