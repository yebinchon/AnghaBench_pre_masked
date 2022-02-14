
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RCrypto ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int const*,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_5(RCrypto *VAR_2, const ut8 *VAR_3, int VAR_4) {
 if (VAR_0) {
  FUNC_1 ("USE ROL\n");
  return 0;
 }
 ut8 *VAR_5 = FUNC_0 (1, VAR_4);
 if (!VAR_5) {
  return 0;
 }
 FUNC_4 (&VAR_1, VAR_3, VAR_5, VAR_4);
 FUNC_3 (VAR_2, VAR_5, VAR_4);
 FUNC_2 (VAR_5);
 return 1;
}
