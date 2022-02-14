
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const**,char) ;

__attribute__((used)) static int FUNC_2(const char **VAR_1) {
 *VAR_1 = FUNC_0 (*VAR_1);
 if (**VAR_1 == 0) {
  return 0;
 }
 VAR_0 = *VAR_1;
 FUNC_1 (VAR_1, ',');
 return 1;
}
