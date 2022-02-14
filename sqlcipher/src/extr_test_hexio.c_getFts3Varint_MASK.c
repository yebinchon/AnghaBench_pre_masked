
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_uint64 ;
typedef scalar_t__ sqlite_int64 ;



__attribute__((used)) static int FUNC_0(const char *VAR_0, sqlite_int64 *VAR_1){
  const unsigned char *VAR_2 = (const unsigned char *) VAR_0;
  sqlite_uint64 VAR_3 = 0, VAR_4 = 1;
  while( (*VAR_2 & 0x80) == 0x80 ){
    VAR_3 += VAR_4 * (*VAR_2++ & 0x7f);
    VAR_4 <<= 7;
  }
  VAR_3 += VAR_4 * (*VAR_2++);
  *VAR_1 = (sqlite_int64) VAR_3;
  return (int) (VAR_2 - (unsigned char *)VAR_0);
}
