
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int FUNC_0 (int *,int const*,int *,int) ;
 int FUNC_1 (int *,int const*,int *,int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_5(RCrypto *VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (!VAR_1 || !VAR_2) {
  return 0;
 }
 ut8 *VAR_4 = FUNC_2 (1, VAR_3);
 if (!VAR_4) {
  return 0;
 }
 if (VAR_1->dir == 0) {
  FUNC_0 (&VAR_0, VAR_2, VAR_4, VAR_3);
 } else if (VAR_1->dir == 1) {
  FUNC_1 (&VAR_0, VAR_2, VAR_4, VAR_3);
 }
 FUNC_4 (VAR_1, VAR_4, VAR_3);
 FUNC_3 (VAR_4);
 return 1;
}
