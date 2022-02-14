
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;

int FUNC_2(const ut8 *VAR_2, int VAR_3) {
 const ut8 *VAR_4;
 if (FUNC_0 (VAR_2, VAR_3) == VAR_1) {
  VAR_4 = VAR_2 + 1;
  while (FUNC_1 (VAR_4, VAR_3 - (VAR_4 - VAR_2)) == VAR_0) {
   VAR_4++;
  }
  return FUNC_1 (VAR_4, VAR_3 - (VAR_4 - VAR_2));
 }
 return FUNC_0 (VAR_2, VAR_3);
}
