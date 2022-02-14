
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, u64 VAR_1){
  int VAR_2, VAR_3, VAR_4;
  unsigned char VAR_5[10];
  if( VAR_1 & (((u64)0xff000000)<<32) ){
    VAR_0[8] = (unsigned char)VAR_1;
    VAR_1 >>= 8;
    for(VAR_2=7; VAR_2>=0; VAR_2--){
      VAR_0[VAR_2] = (unsigned char)((VAR_1 & 0x7f) | 0x80);
      VAR_1 >>= 7;
    }
    return 9;
  }
  VAR_4 = 0;
  do{
    VAR_5[VAR_4++] = (unsigned char)((VAR_1 & 0x7f) | 0x80);
    VAR_1 >>= 7;
  }while( VAR_1!=0 );
  VAR_5[0] &= 0x7f;
  for(VAR_2=0, VAR_3=VAR_4-1; VAR_3>=0; VAR_3--, VAR_2++){
    VAR_0[VAR_2] = VAR_5[VAR_3];
  }
  return VAR_4;
}
