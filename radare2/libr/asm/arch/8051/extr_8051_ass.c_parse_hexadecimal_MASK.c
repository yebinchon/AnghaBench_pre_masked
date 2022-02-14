
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;



__attribute__((used)) static bool FUNC_0(char const* VAR_0, ut16* VAR_1) {
 if ( !VAR_0 || VAR_0[0] != '0'
  || !(VAR_0[1] == 'x' || VAR_0[1] == 'X')) {
  return 0;
 }
 *VAR_1 = 0;
 char const*VAR_2;
 for (VAR_2 = VAR_0 + 2; VAR_2 < VAR_0 + 6 && *VAR_2 ; VAR_2 += 1) {
  *VAR_1 <<= 4;
  if ( '0' <= *VAR_2 && *VAR_2 <= '9' ) {
   *VAR_1 |= *VAR_2 - '0';
  } else if ( 'a' <= *VAR_2 && *VAR_2 <= 'f' ) {
   *VAR_1 |= *VAR_2 - 'a' + 10;
  } else if ( 'A' <= *VAR_2 && *VAR_2 <= 'F' ) {
   *VAR_1 |= *VAR_2 - 'A' + 10;
  } else {
   return 0;
  }
 }
 return ! *VAR_2;
}
