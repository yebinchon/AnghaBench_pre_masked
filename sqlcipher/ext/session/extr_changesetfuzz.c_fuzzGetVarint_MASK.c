
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sqlite3_uint64 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, int *VAR_1){
  int VAR_2;
  sqlite3_uint64 VAR_3 = 0;
  for(VAR_2=0; VAR_2<9; VAR_2++){
    VAR_3 = (VAR_3<<7) + (VAR_0[VAR_2] & 0x7F);
    if( (VAR_0[VAR_2] & 0x80)==0 ){
      VAR_2++;
      break;
    }
  }
  *VAR_1 = (int)VAR_3;
  return VAR_2;
}
