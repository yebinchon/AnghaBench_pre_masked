
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
 int FUNC_5 (int,int,int*) ;
 int FUNC_6 (char const* const,int*) ;
 int FUNC_7 (char const* const,int*) ;

__attribute__((used)) static bool FUNC_8(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 ut16 VAR_3;
 if (!FUNC_7 (VAR_0[2], &VAR_3)
  || !FUNC_5 (VAR_1+1, VAR_3, (*VAR_2)+2)) {
  return 0;
 }
 if (!FUNC_3 (VAR_0[0], "a")) {
  if (VAR_0[1][0] == '#') {
   ut16 VAR_4;
   if (!FUNC_6 (VAR_0[1] + 1, &VAR_4)) {
    return 0;
   }
   (*VAR_2)[0] = 0xb4;
   (*VAR_2)[1] = VAR_4 & 0x00FF;

   *VAR_2 += 3;
   return 1;
  }
  ut8 VAR_5;
  if (!FUNC_0 (VAR_0[1], &VAR_5)) {
   return 0;
  }
  (*VAR_2)[0] = 0xb5;
  (*VAR_2)[1] = VAR_5;

  *VAR_2 += 3;
  return 1;
 }
 if (FUNC_2 (VAR_0[0])) {
  ut16 VAR_6;
  if (!FUNC_6 (VAR_0[1] + 1, &VAR_6)) {
   return 0;
  }
  (*VAR_2)[0] = 0xbf | FUNC_4 (VAR_0[0]) ;
  (*VAR_2)[1] = VAR_6 & 0x00FF;

  *VAR_2 += 3;
  return 1;
 }
 if (FUNC_1 (VAR_0[0])) {
  ut16 VAR_7;
  if (!FUNC_6 (VAR_0[1] + 1, &VAR_7)) {
   return 0;
  }
  (*VAR_2)[0] = 0xb6 | FUNC_4 (VAR_0[0]) ;
  (*VAR_2)[1] = VAR_7 & 0x00FF;

  *VAR_2 += 3;
  return 1;
 }
 return 0;
}
