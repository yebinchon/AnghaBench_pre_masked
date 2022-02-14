
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(const u8 *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<8; VAR_1++){
    if( (VAR_0[VAR_1]&0x80)==0 ){ return VAR_1+1; }
  }
  return 9;
}
