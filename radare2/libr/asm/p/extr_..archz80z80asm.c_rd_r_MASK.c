
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (char const**,char const**,int ,char const**) ;
 char const* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const char **VAR_4) {
 int VAR_5;
 const char *VAR_6;
 const char *VAR_7[] = {
  "ixl", "ixh", "iyl", "iyh", "b", "c", "d", "e", "h", "l", "( hl )",
  "a", "( ix +)", "( iy +)", "*", ((void*)0)
 };
 VAR_5 = FUNC_0 (VAR_4, VAR_7, 0, &VAR_6);
 if (VAR_5 == 15) {
  VAR_2 = VAR_6;
  VAR_3 = 1;
  return 7;
 }
 if (VAR_5 <= 4) {
  VAR_0 = 0xdd + 0x20 * (VAR_5 > 2);
  return 6 - (VAR_5 & 1);
 }
 VAR_5 -= 4;
 if (VAR_5 < 9) {
  return VAR_5;
 }
 VAR_0 = 0xDD + 0x20 * (VAR_5 - 9);
 VAR_1 = VAR_6;
 return 7;
}
