
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 scalar_t__ FUNC_0 (char const* const,char*) ;
 int FUNC_1 (int,int **) ;
 int FUNC_2 (char const* const,char*) ;

__attribute__((used)) static bool FUNC_3(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (FUNC_0 (VAR_0[0], "a")) {
  return 0;
 }
 if (!FUNC_2 (VAR_0[1], "@a+dptr")
  || !FUNC_2 (VAR_0[1], "[a+dptr]")) {
  return FUNC_1 (0x93, VAR_2);
 }
 if (!FUNC_2 (VAR_0[1], "@a+pc")
  || !FUNC_2 (VAR_0[1], "[a+pc]")) {
  return FUNC_1 (0x83, VAR_2);
 }
 return 0;
}
