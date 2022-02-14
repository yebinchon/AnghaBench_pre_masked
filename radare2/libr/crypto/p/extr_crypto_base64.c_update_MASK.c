
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static bool FUNC_5(RCrypto *VAR_0, const ut8 *VAR_1, int VAR_2) {
 int VAR_3 = 0;
 ut8 *VAR_4 = ((void*)0);
 if (VAR_0->dir == 0) {
  VAR_3 = ((VAR_2 + 2) / 3 ) * 4;
  VAR_4 = FUNC_1 (VAR_3 + 1);
  if (!VAR_4) {
   return 0;
  }
  FUNC_3 ((char *)VAR_4, (const ut8 *)VAR_1, VAR_2);
 } else if (VAR_0->dir == 1) {
  VAR_3 = 4 + ((VAR_2 / 4) * 3);
  if (VAR_2 > 0) {
   VAR_3 -= (VAR_1[VAR_2-1] == '=') ? ((VAR_1[VAR_2-2] == '=') ? 2 : 1) : 0;
  }
  VAR_4 = FUNC_1 (VAR_3 + 4);
  if (!VAR_4) {
   return 0;
  }
  VAR_3 = FUNC_2 (VAR_4, (const char *)VAR_1, VAR_2);
 }
 if (VAR_3 > 0) {
  FUNC_4 (VAR_0, VAR_4, VAR_3);
 }
 FUNC_0 (VAR_4);
 return 1;
}
