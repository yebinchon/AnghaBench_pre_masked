
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static ut32 FUNC_1(const char *VAR_1) {
 ut32 VAR_2 = FUNC_0 (VAR_1);
 if (VAR_0) {
  return 0;
 }
 ut32 VAR_3;
 if (VAR_2 <= 0xff) {
  return VAR_2;
 } else {
  for (VAR_3 = 1; VAR_3 < 16; VAR_3++) {

   VAR_2 = ((VAR_2 << 2) | (VAR_2 >> 30));
   if (VAR_2 == (VAR_2 & 0xff)) {
    return (VAR_2 | (VAR_3 << 8));
   }
  }
  VAR_0 = 1;
  return 0;
 }
}
