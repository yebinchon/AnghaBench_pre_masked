
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_1 (char const**,char const**,int ,char const**) ;
 char const* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(const char **VAR_4) {
 int VAR_5;
 const char *VAR_6[] = {
  "b", "c", "d", "e", "h", "l", "( hl )", "a", "( ix +)", "( iy +)", "ixh",
  "ixl", "iyh", "iyl", "*", ((void*)0)
 };
 const char *VAR_7;
 VAR_5 = FUNC_1 (VAR_4, VAR_6, 0, &VAR_7);
 if (VAR_5 == 15) {
  VAR_2 = VAR_7;
  VAR_3 = 1;
  return 7;
 }
 if (VAR_5 > 10) {
  int VAR_8;
  VAR_8 = 0xdd + 0x20 * (VAR_5 > 12);
  if (VAR_0 && VAR_0 != VAR_8) {
   FUNC_0 ("illegal use of index registers\n");
   return 0;
  }
  VAR_0 = VAR_8;
  return 6 - (VAR_5 & 1);
 }
 if (VAR_5 > 8) {
  if (VAR_0) {
   FUNC_0 ("illegal use of index registers\n");
   return 0;
  }
  VAR_0 = 0xDD + 0x20 * (VAR_5 == 10);
  VAR_1 = VAR_7;
  return 7;
 }
 return VAR_5;
}
