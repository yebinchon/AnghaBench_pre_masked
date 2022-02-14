
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 scalar_t__ FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int,int **) ;
 int FUNC_3 (int,char const* const,int **) ;
 int FUNC_4 (char const* const,char*) ;

__attribute__((used)) static bool FUNC_5(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (!FUNC_1 (VAR_0[0], "a")) {
  if (FUNC_0 (VAR_0[1])) {
   return FUNC_3 (0xe2, VAR_0[1], VAR_2);
  }
  if (!FUNC_4 (VAR_0[1], "@dptr")
   || !FUNC_4 (VAR_0[1], "[dptr]")) {
   return FUNC_2 (0xe0, VAR_2);
  }
 }
 if (FUNC_1 (VAR_0[1], "a")) {
  return 0;
 }
 if (FUNC_0 (VAR_0[0])) {
  return FUNC_3 (0xf2, VAR_0[0], VAR_2);
 }
 if (!FUNC_4 (VAR_0[0], "@dptr")
  || !FUNC_4 (VAR_0[0], "[dptr]")) {
  return FUNC_2 (0xf0, VAR_2);
 }
 return 0;
}
