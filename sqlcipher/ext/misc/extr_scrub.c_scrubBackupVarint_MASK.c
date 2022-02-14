
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sqlite3_int64 ;



__attribute__((used)) static int FUNC_0(const u8 *VAR_0, sqlite3_int64 *VAR_1){
  sqlite3_int64 VAR_2 = 0;
  int VAR_3;
  for(VAR_3=0; VAR_3<8; VAR_3++){
    VAR_2 = (VAR_2<<7) + (VAR_0[VAR_3]&0x7f);
    if( (VAR_0[VAR_3]&0x80)==0 ){ *VAR_1 = VAR_2; return VAR_3+1; }
  }
  VAR_2 = (VAR_2<<8) + (VAR_0[VAR_3]&0xff);
  *VAR_1 = VAR_2;
  return 9;
}
