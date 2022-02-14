
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1 (const char *VAR_1, ut64 VAR_2, ut64 VAR_3, ut64 VAR_4, ut64 VAR_5, ut64 *VAR_6, int VAR_7) {
 ut64 VAR_8;
 if (VAR_7 == 64) {
  VAR_8 = VAR_0;
 } else {
  VAR_8 = 1ULL << VAR_7;
 }

 if (!FUNC_0 (VAR_1, "^")) {
  *VAR_6 = VAR_2 ^ VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "+")) {
  *VAR_6 = VAR_2 + VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "-")) {
  if (VAR_3 > VAR_2) {
   *VAR_6 = VAR_8 + (VAR_2 - VAR_3);
  } else {
   *VAR_6 = VAR_2 - VAR_3;
  }
  return 1;
 }
 if (!FUNC_0 (VAR_1, "*")) {
  *VAR_6 = VAR_2 * VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "|")) {
  *VAR_6 = VAR_2 | VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "/")) {
  *VAR_6 = VAR_2 / VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "%")) {
  *VAR_6 = VAR_2 % VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "<<")) {
  *VAR_6 = VAR_2 << VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, ">>")) {
  *VAR_6 = VAR_2 >> VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "&")) {
  *VAR_6 = VAR_2 & VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "+=")) {
  *VAR_6 = VAR_4 + VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "-=")) {
  if (VAR_3 > VAR_4) {
   *VAR_6 = VAR_8 + (VAR_4 - VAR_3);
  } else {
   *VAR_6 = VAR_4 - VAR_3;
  }
  return 1;
 }
 if (!FUNC_0 (VAR_1, "*=")) {
  *VAR_6 = VAR_4 * VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "/=")) {
  *VAR_6 = VAR_4 / VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "%=")) {
  *VAR_6 = VAR_4 % VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "<<")) {
  *VAR_6 = VAR_2 << VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, ">>")) {
  *VAR_6 = VAR_2 >> VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "&=")) {
  *VAR_6 = VAR_2 & VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "^=")) {
  *VAR_6 = VAR_2 ^ VAR_3;
  return 1;
 }
 if (!FUNC_0 (VAR_1, "|=")) {
  *VAR_6 = VAR_2 | VAR_3;
  return 1;
 }
 return 0;
}
