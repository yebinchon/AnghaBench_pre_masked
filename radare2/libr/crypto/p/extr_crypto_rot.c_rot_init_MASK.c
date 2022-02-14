
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static bool FUNC_2(ut8 *VAR_0, const ut8 *VAR_1, int VAR_2) {
 if (VAR_0 && VAR_1 && VAR_2 > 0) {
  int VAR_3 = FUNC_0 ((const char *)VAR_1);
  *VAR_0 = (ut8)FUNC_1 (VAR_3, 26);
  return 1;
 }
 return 0;
}
