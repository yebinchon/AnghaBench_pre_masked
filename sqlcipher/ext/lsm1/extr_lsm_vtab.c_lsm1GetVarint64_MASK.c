
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;



__attribute__((used)) static int FUNC_0(
  const unsigned char *VAR_0,
  int VAR_1,
  sqlite3_uint64 *VAR_2
){
  unsigned int VAR_3;
  if( VAR_1<1 ) return 0;
  if( VAR_0[0]<=240 ){
    *VAR_2 = VAR_0[0];
    return 1;
  }
  if( VAR_0[0]<=248 ){
    if( VAR_1<2 ) return 0;
    *VAR_2 = (VAR_0[0]-241)*256 + VAR_0[1] + 240;
    return 2;
  }
  if( VAR_1<VAR_0[0]-246 ) return 0;
  if( VAR_0[0]==249 ){
    *VAR_2 = 2288 + 256*VAR_0[1] + VAR_0[2];
    return 3;
  }
  if( VAR_0[0]==250 ){
    *VAR_2 = (VAR_0[1]<<16) + (VAR_0[2]<<8) + VAR_0[3];
    return 4;
  }
  VAR_3 = (VAR_0[1]<<24) + (VAR_0[2]<<16) + (VAR_0[3]<<8) + VAR_0[4];
  if( VAR_0[0]==251 ){
    *VAR_2 = VAR_3;
    return 5;
  }
  if( VAR_0[0]==252 ){
    *VAR_2 = (((sqlite3_uint64)VAR_3)<<8) + VAR_0[5];
    return 6;
  }
  if( VAR_0[0]==253 ){
    *VAR_2 = (((sqlite3_uint64)VAR_3)<<16) + (VAR_0[5]<<8) + VAR_0[6];
    return 7;
  }
  if( VAR_0[0]==254 ){
    *VAR_2 = (((sqlite3_uint64)VAR_3)<<24) + (VAR_0[5]<<16) + (VAR_0[6]<<8) + VAR_0[7];
    return 8;
  }
  *VAR_2 = (((sqlite3_uint64)VAR_3)<<32) +
               (0xffffffff & ((VAR_0[5]<<24) + (VAR_0[6]<<16) + (VAR_0[7]<<8) + VAR_0[8]));
  return 9;
}
