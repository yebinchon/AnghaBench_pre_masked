
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int indx; } ;
typedef TYPE_1__ SStreamParseFunc ;
typedef int RListIter ;
typedef int RList ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(RList *VAR_0, int VAR_1, SStreamParseFunc **VAR_2) {
 SStreamParseFunc *VAR_3 = 0;
 RListIter *VAR_4 = 0;

 *VAR_2 = 0;
 VAR_4 = FUNC_2 (VAR_0);
 while (FUNC_1 (VAR_4)) {
  VAR_3 = (SStreamParseFunc *) FUNC_0 (VAR_4);
  if (VAR_1 == VAR_3->indx) {
   *VAR_2 = VAR_3;
   return;
  }
 }
}
