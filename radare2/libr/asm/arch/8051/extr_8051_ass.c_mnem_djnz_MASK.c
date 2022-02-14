
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (char const* const,int*) ;
 scalar_t__ FUNC_1 (char const* const) ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (char const* const,int *) ;

__attribute__((used)) static bool FUNC_5(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 ut16 VAR_3;
 if (!FUNC_4 (VAR_0[1], &VAR_3)) {
  return 0;
 }
 if (!FUNC_3 (VAR_1, VAR_3, (*VAR_2) + 2)) {
  return 0;
 }

 if (FUNC_1 (VAR_0[0])) {
  (*VAR_2)[0] = 0xd8 | FUNC_2 (VAR_0[0]);
  (*VAR_2)[1] = (*VAR_2)[2];
  *VAR_2 += 2;
  return 1;
 }
 ut8 VAR_4;
 if (!FUNC_0 (VAR_0[0], &VAR_4)) {
  return 0;
 }
 (*VAR_2)[0] = 0xd5;
 (*VAR_2)[1] = VAR_4;
 (*VAR_2)[2] -= 1;
 *VAR_2 += 3;
 return 1;
}
