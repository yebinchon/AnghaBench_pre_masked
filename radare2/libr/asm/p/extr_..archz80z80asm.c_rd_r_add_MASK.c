
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (char const**,char const**,int ,char const**) ;
 char const* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(const char **VAR_5) {

 int VAR_6;
 const char *VAR_7[] = {
  "ixl", "ixh", "iyl", "iyh", "b", "c", "d", "e", "h", "l",
  "( hl )", "a", "( ix +)", "( iy +)", "hl", "ix", "iy", "*", ((void*)0)
 };
 const char *VAR_8;
 VAR_6 = FUNC_0 (VAR_5, VAR_7, 0, &VAR_8);
 if (VAR_6 == 18) {
  VAR_3 = VAR_8;
  VAR_4 = 1;
  return 7;
 }
 if (VAR_6 > 14) {
  if (VAR_6 > 15) {
   VAR_1 = 0xDD + 0x20 * (VAR_6 - 16);
  }
  return 15;
 }
 if (VAR_6 <= 4) {
  VAR_1 = 0xdd + 0x20 * (VAR_6 > 2);
  return 6 - (VAR_6 & 1);
 }
 VAR_6 -= 4;
 if (VAR_6 < 9) {
  return VAR_6;
 }
 VAR_1 = 0xDD + 0x20 * (VAR_6 - 9);
 VAR_2 = VAR_8;
 return 7;
}
