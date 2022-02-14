
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_uint64 ;
typedef int sqlite_int64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, sqlite_int64 VAR_2){
  unsigned char *VAR_3 = (unsigned char *) VAR_1;
  sqlite_uint64 VAR_4 = VAR_2;
  do{
    *VAR_3++ = (unsigned char) ((VAR_4 & 0x7f) | 0x80);
    VAR_4 >>= 7;
  }while( VAR_4!=0 );
  VAR_3[-1] &= 0x7f;
  FUNC_0( VAR_3 - (unsigned char *)VAR_1 <= VAR_0 );
  return (int) (VAR_3 - (unsigned char *)VAR_1);
}
