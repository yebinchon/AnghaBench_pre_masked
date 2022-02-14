
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 scalar_t__ FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int,char const* const,int **) ;
 int FUNC_3 (int,char const* const,int **) ;
 int FUNC_4 (int,char const* const,int **) ;

__attribute__((used)) static bool FUNC_5(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (FUNC_1 (VAR_0[0], "a")) {
  return 0;
 }
 switch (VAR_0[1][0]) {
 break; case '@': case '[':
  return FUNC_4 (0x26, VAR_0[1], VAR_2);
 break; case '#':
  return FUNC_3 (0x24, VAR_0[1], VAR_2);
 }
 if (FUNC_0 (VAR_0[1])) {
  return FUNC_4 (0x28, VAR_0[1], VAR_2);
 } else {
  return FUNC_2 (0x25, VAR_0[1], VAR_2);
 }
}
