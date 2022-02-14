
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**,char const**,int,int *) ;

__attribute__((used)) static int FUNC_1(const char **VAR_2) {
 int VAR_3;
 const char *VAR_4[] = {
  "iy", "ix", "sp", "hl", "de", "bc", "", "b", "c", "d", "e", "h",
  "l", "( hl )", "a", "( ix +)", "( iy +)", ((void*)0)
 };
 VAR_3 = FUNC_0 (VAR_2, VAR_4, 1, &VAR_1);
 if (!VAR_3) {
  return 0;
 }
 if (VAR_3 < 16 && VAR_3 > 2) {
  return 7 - VAR_3;
 }
 if (VAR_3 > 15) {
  VAR_0 = 0xDD + (VAR_3 - 16) * 0x20;
  return -7;
 }
 VAR_0 = 0xDD + (2 - VAR_3) * 0x20;
 return 3;
}
