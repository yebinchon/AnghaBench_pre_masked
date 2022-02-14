
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int RAnalEsil ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static bool FUNC_2(RAnalEsil *VAR_0, const char *VAR_1, ut64 *VAR_2) {
 if (!VAR_0 || !VAR_1) {
  return 0;
 }
 if (FUNC_0 (*VAR_1)) {
  if (VAR_2) {
   *VAR_2 = FUNC_1 (((void*)0), VAR_1);
  }
  return 1;
 }
 if (VAR_2) {
  *VAR_2 = 0;
 }
 return 0;
}
