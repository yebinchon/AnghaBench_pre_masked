
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 scalar_t__ FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char const* const) ;
 scalar_t__ FUNC_2 (char const* const,char*) ;
 int FUNC_3 (int,char const* const,int **) ;
 int FUNC_4 (int,char const* const,int **) ;
 int FUNC_5 (int,char const* const,int **) ;

__attribute__((used)) static bool FUNC_6(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (FUNC_2 (VAR_0[0], "a")) {
  return 0;
 }
 if (FUNC_0 (VAR_0[1])) {
  return FUNC_5 (0x96, VAR_0[1], VAR_2);
 }
 if (VAR_0[1][0] == '#') {
  return FUNC_4 (0x94, VAR_0[1], VAR_2);
 }
 if (FUNC_1 (VAR_0[1])) {
  return FUNC_5 (0x98, VAR_0[1], VAR_2);
 }
 return FUNC_3 (0x95, VAR_0[1], VAR_2);
}
