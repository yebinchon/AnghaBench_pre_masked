
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut16 ;


 int FUNC_0 (char const* const,int*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int*) ;
 int FUNC_2 (char const* const,scalar_t__*) ;

__attribute__((used)) static bool FUNC_3(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 ut8 VAR_3;
 if (!FUNC_0 (VAR_0[0], &VAR_3)) {
  return 0;
 }
 ut16 VAR_4;
 if (!FUNC_2 (VAR_0[1], &VAR_4)
  || !FUNC_1 (VAR_1 + 1, VAR_4, (*VAR_2) + 2)) {
  return 0;
 }
 (*VAR_2)[0] = 0x20;
 (*VAR_2)[1] = VAR_3;

 *VAR_2 += 3;
 return 1;
}
