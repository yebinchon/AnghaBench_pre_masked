
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RCrypto ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;
 char* FUNC_2 (char const*,int,int*) ;
 char* FUNC_3 (int const*,int,int*) ;

__attribute__((used)) static bool FUNC_4(RCrypto *VAR_1, const ut8 *VAR_2, int VAR_3) {
 char *VAR_4;
 int VAR_5;
 if (VAR_0) {
  VAR_4 = FUNC_2 ((const char *)VAR_2, VAR_3, &VAR_5);
 } else {
  VAR_4 = FUNC_3 (VAR_2, VAR_3, &VAR_5);
 }
 FUNC_1 (VAR_1, (ut8*)VAR_4, VAR_5);
 FUNC_0 (VAR_4);
 return 1;
}
