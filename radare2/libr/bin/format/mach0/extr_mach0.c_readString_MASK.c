
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 char* FUNC_0 (char const*,int) ;

__attribute__((used)) static char *FUNC_1 (ut8 *VAR_0, int VAR_1, int VAR_2) {
 if (VAR_1 < 0 || VAR_1 >= VAR_2) {
  return ((void*)0);
 }
 return FUNC_0 ((const char *)VAR_0 + VAR_1, VAR_2 - VAR_1);
}
