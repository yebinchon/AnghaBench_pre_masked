
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (char const* const,int*) ;
 scalar_t__ FUNC_1 (char const* const) ;
 scalar_t__ FUNC_2 (char const* const) ;
 int FUNC_3 (char const* const,char*) ;
 int FUNC_4 (char const* const) ;
 int FUNC_5 (char const* const,int*) ;
 int FUNC_6 (int,char const* const,int**) ;
 int FUNC_7 (int,char const* const,int**) ;
 int FUNC_8 (int,char const* const,int**) ;
 int FUNC_9 (int,char const* const,int**) ;

__attribute__((used)) static bool FUNC_10(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (!FUNC_3 (VAR_0[0], "dptr")) {
  ut16 VAR_3;
  if (!FUNC_5 (VAR_0[1] + 1, &VAR_3)) {
   return 0;
  }
  (*VAR_2)[0] = 0x90;
  (*VAR_2)[1] = VAR_3 >> 8;
  (*VAR_2)[2] = VAR_3;
  *VAR_2 += 3;
  return 1;
 }
 if (FUNC_1 (VAR_0[0])) {
  if (!FUNC_3 (VAR_0[1], "a")) {
   return FUNC_9 (0xf6, VAR_0[0], VAR_2);
  }
  if (VAR_0[1][0] != '#' ) {
   return FUNC_7 (
    0xa6 | FUNC_4 (VAR_0[0])
    , VAR_0[1]
    , VAR_2);
  }
  return FUNC_8 (0x76 | FUNC_4 (VAR_0[0])
   , VAR_0[1]
   , VAR_2);
 }
 if (!FUNC_3 (VAR_0[0], "a")) {
  if (FUNC_1 (VAR_0[1])) {
   return FUNC_9 (0xe6, VAR_0[1], VAR_2);
  }
  if (FUNC_2 (VAR_0[1])) {
   return FUNC_9 (0xe8, VAR_0[1], VAR_2);
  }
  if (VAR_0[1][0] == '#') {
   return FUNC_8 (0x74, VAR_0[1], VAR_2);
  }
  return FUNC_7 (0xe5, VAR_0[1], VAR_2);
 }
 if (FUNC_2 (VAR_0[0])) {
  if (!FUNC_3 (VAR_0[1], "a")) {
   return FUNC_9 (0xf8, VAR_0[0], VAR_2);
  }
  if (VAR_0[1][0] == '#') {
   return FUNC_8 (
    0x78 | FUNC_4 (VAR_0[0])
    , VAR_0[1]
    , VAR_2);
  }
  return FUNC_7 (0xa8 | FUNC_4 (VAR_0[0])
   , VAR_0[1]
   , VAR_2);
 }
 if (!FUNC_3 (VAR_0[1], "c")) {
  return FUNC_6 (0x92, VAR_0[0], VAR_2);
 }
 if (!FUNC_3 (VAR_0[1], "a")) {
  return FUNC_7 (0xf5, VAR_0[0], VAR_2);
 }
 if (FUNC_2 (VAR_0[1])) {
  return FUNC_7 (0x88 | FUNC_4 (VAR_0[1])
   , VAR_0[0]
   , VAR_2);
 }
 if (FUNC_1 (VAR_0[1])) {
  return FUNC_7 (0x86 | FUNC_4 (VAR_0[1])
   , VAR_0[0]
   , VAR_2);
 }
 ut8 VAR_4;
 if (!FUNC_0 (VAR_0[0], &VAR_4)) {
  return 0;
 }
 if (VAR_0[1][0] == '#') {
  ut16 VAR_5;
  if (!FUNC_5 (VAR_0[1] + 1, &VAR_5)) {
   return 0;
  }
  (*VAR_2)[0] = 0x75;
  (*VAR_2)[1] = VAR_4;
  (*VAR_2)[2] = VAR_5 & 0x00FF;
  *VAR_2 += 3;
  return 1;
 }
 ut8 VAR_6;
 if (!FUNC_0 (VAR_0[1], &VAR_6)) {
  return 0;
 }
 (*VAR_2)[0] = 0x85;
 (*VAR_2)[1] = VAR_6;
 (*VAR_2)[2] = VAR_4;
 *VAR_2 += 3;
 return 1;
}
