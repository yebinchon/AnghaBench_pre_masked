
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int * VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static bool FUNC_1(RCrypto *VAR_1, const ut8 *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 VAR_1->dir = VAR_5;
 if (VAR_3 == 8) {

  const ut32 *VAR_6 = (const ut32*)VAR_2;
  VAR_0[0] = FUNC_0 (VAR_6);
  VAR_0[1] = FUNC_0 (VAR_6 + 1);
  return 1;
 }
 return 0;
}
