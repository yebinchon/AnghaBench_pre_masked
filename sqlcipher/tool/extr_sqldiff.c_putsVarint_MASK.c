
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int FILE ;


 int FUNC_0 (unsigned char*,int,int,int *) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, sqlite3_uint64 VAR_1){
  int VAR_2, VAR_3;
  unsigned char VAR_4[12];
  if( VAR_1 & (((sqlite3_uint64)0xff000000)<<32) ){
    VAR_4[8] = (unsigned char)VAR_1;
    VAR_1 >>= 8;
    for(VAR_2=7; VAR_2>=0; VAR_2--){
      VAR_4[VAR_2] = (unsigned char)((VAR_1 & 0x7f) | 0x80);
      VAR_1 >>= 7;
    }
    FUNC_0(VAR_4, 8, 1, VAR_0);
  }else{
    VAR_3 = 9;
    do{
      VAR_4[VAR_3--] = (unsigned char)((VAR_1 & 0x7f) | 0x80);
      VAR_1 >>= 7;
    }while( VAR_1!=0 );
    VAR_4[9] &= 0x7f;
    FUNC_0(VAR_4+VAR_3+1, 9-VAR_3, 1, VAR_0);
  }
}
