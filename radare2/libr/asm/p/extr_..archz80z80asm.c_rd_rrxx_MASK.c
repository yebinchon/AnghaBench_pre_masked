
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**,char const**,int,int *) ;

__attribute__((used)) static int FUNC_1(const char **VAR_1) {
 const char *VAR_2[] = {
  "bc", "de", "ix", "sp", ((void*)0)
 };
 const char *VAR_3[] = {
  "bc", "de", "iy", "sp", ((void*)0)
 };
 const char *VAR_4[] = {
  "bc", "de", "hl", "sp", ((void*)0)
 };
 if (VAR_0 == 0xdd) {
  return FUNC_0 (VAR_1, VAR_2, 1, ((void*)0));
 }
 if (VAR_0 == 0xfd) {
  return FUNC_0 (VAR_1, VAR_3, 1, ((void*)0));
 }
 return FUNC_0 (VAR_1, VAR_4, 1, ((void*)0));
}
