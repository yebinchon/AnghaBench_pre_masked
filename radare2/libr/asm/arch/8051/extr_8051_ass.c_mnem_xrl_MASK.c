
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (char const* const,int*) ;
 scalar_t__ FUNC_1 (char const* const) ;
 scalar_t__ FUNC_2 (char const* const) ;
 scalar_t__ FUNC_3 (char const* const,char*) ;
 int FUNC_4 (char const* const,int*) ;
 int FUNC_5 (int,char const* const,int**) ;
 int FUNC_6 (int,char const* const,int**) ;
 int FUNC_7 (int,char const* const,int**) ;

__attribute__((used)) static bool FUNC_8(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (!FUNC_3 (VAR_0[0], "a")) {
  if (FUNC_1 (VAR_0[1])) {
   return FUNC_7 (0x66, VAR_0[1], VAR_2);
  }
  if (VAR_0[1][0] == '#') {
   return FUNC_6 (0x64, VAR_0[1], VAR_2);
  }
  if (FUNC_2 (VAR_0[1])) {
   return FUNC_7 (0x68, VAR_0[1], VAR_2);
  }
  return FUNC_5 (0x65, VAR_0[1], VAR_2);
 }
 if (VAR_0[1][0] != '#') {
  if (FUNC_3 (VAR_0[1], "a")) {
   return 0;
  }
  return FUNC_5 (0x62, VAR_0[0], VAR_2);
 }
 ut8 VAR_3;
 if (!FUNC_0 (VAR_0[0], &VAR_3)) {
  return 0;
 }
 ut16 VAR_4;
 if (!FUNC_4 (VAR_0[1] + 1, &VAR_4)) {
  return 0;
 }
 (*VAR_2)[0] = 0x63;
 (*VAR_2)[1] = VAR_3;
 (*VAR_2)[2] = VAR_4 & 0x00FF;
 *VAR_2 += 3;
 return 1;
}
