
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_uint64 ;
typedef scalar_t__ sqlite_int64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, sqlite_int64 *VAR_2){
  const unsigned char *VAR_3 = (const unsigned char *) VAR_1;
  sqlite_uint64 VAR_4 = 0, VAR_5 = 1;
  while( (*VAR_3 & 0x80) == 0x80 ){
    VAR_4 += VAR_5 * (*VAR_3++ & 0x7f);
    VAR_5 <<= 7;
    if( VAR_3 - (unsigned char *)VAR_1 >= VAR_0 ){
      FUNC_0( 0 );
      return 0;
    }
  }
  VAR_4 += VAR_5 * (*VAR_3++);
  *VAR_2 = (sqlite_int64) VAR_4;
  return (int) (VAR_3 - (unsigned char *)VAR_1);
}
