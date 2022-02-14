
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RCrypto ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *,int const*,int *) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_6(RCrypto *VAR_3, const ut8 *VAR_4, int VAR_5) {
 if (VAR_5 % VAR_0 != 0) {
  FUNC_1 ("Input should be multiple of 128bit.\n");
  return 0;
 }

 const int VAR_6 = VAR_5 / VAR_0;

 ut8 *VAR_7 = FUNC_0 (1, VAR_5);
 if (!VAR_7) {
  return 0;
 }

 int VAR_8;
 if (VAR_1) {
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   FUNC_4 (&VAR_2, VAR_4 + VAR_0 * VAR_8, VAR_7 + VAR_0 * VAR_8);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   FUNC_5 (&VAR_2, VAR_4 + VAR_0 * VAR_8, VAR_7 + VAR_0 * VAR_8);
  }
 }

 FUNC_3 (VAR_3, VAR_7, VAR_5);
 FUNC_2 (VAR_7);
 return 1;
}
