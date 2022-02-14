
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int*) ;

__attribute__((used)) static int FUNC_1(const ut8* VAR_1) {

 ut32 VAR_2 = 0;
 int VAR_3;

 ut8 const* VAR_4 = FUNC_0 (VAR_1, &VAR_2);

 if (!VAR_2 || VAR_2 > 1024) {
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (!(VAR_4 = FUNC_0 (VAR_4, &VAR_2))) {
   return 0;
  }
 }
 return 1;
}
