
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static bool FUNC_5(RCrypto *VAR_1, const ut8 *VAR_2, int VAR_3) {
 int VAR_4 = VAR_0;
 if (!VAR_1 || !VAR_2 || VAR_3 < 1) {
  return 0;
 }
 ut8 *VAR_5 = FUNC_1 (VAR_4);
 if (!VAR_5) {
  return 0;
 }
 if (VAR_1->dir == 0) {
  VAR_4 = FUNC_3 ((char *)VAR_5, (const ut8 *)VAR_2, VAR_3);
 } else if (VAR_1->dir == 1) {
  VAR_4 = FUNC_2 (VAR_5, (const char *)VAR_2, VAR_3);
 }
 FUNC_4 (VAR_1, VAR_5, VAR_4);
 FUNC_0 (VAR_5);
 return 1;
}
