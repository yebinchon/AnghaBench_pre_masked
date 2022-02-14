
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char const*,int *) ;

__attribute__((used)) static bool FUNC_1(ut8 const VAR_0, char const* VAR_1, ut8 **VAR_2) {
 ut8 VAR_3;
 if (!FUNC_0 (VAR_1, &VAR_3)) {
  return 0;
 }
 (*VAR_2)[0] = VAR_0;
 (*VAR_2)[1] = VAR_3;
 *VAR_2 += 2;
 return 1;
}
