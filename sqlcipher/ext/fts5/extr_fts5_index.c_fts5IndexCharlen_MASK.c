
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1){
  int VAR_2 = 0;
  int VAR_3 = 0;
  while( VAR_3<VAR_1 ){
    if( (unsigned char)VAR_0[VAR_3++]>=0xc0 ){
      while( VAR_3<VAR_1 && (VAR_0[VAR_3] & 0xc0)==0x80 ) VAR_3++;
    }
    VAR_2++;
  }
  return VAR_2;
}
