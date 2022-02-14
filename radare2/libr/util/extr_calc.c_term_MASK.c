
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int dbz; } ;
struct TYPE_20__ {scalar_t__ curr_tok; } ;
struct TYPE_19__ {int n; int d; } ;
typedef TYPE_1__ RNumCalcValue ;
typedef TYPE_2__ RNumCalc ;
typedef TYPE_3__ RNum ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;

__attribute__((used)) static RNumCalcValue FUNC_4(RNum *VAR_3, RNumCalc *VAR_4, int VAR_5) {
 RNumCalcValue VAR_6 = FUNC_3 (VAR_3, VAR_4, VAR_5);
 for (;;) {
  if (VAR_4->curr_tok == VAR_2) {
   VAR_6 = FUNC_2 (VAR_6, FUNC_3 (VAR_3, VAR_4, 1));
  } else if (VAR_4->curr_tok == VAR_1) {
   RNumCalcValue VAR_7 = FUNC_3 (VAR_3, VAR_4, 1);
   if (!VAR_7.d) {

    return VAR_7;
   }
   VAR_6 = FUNC_1 (VAR_6, VAR_7);
  } else if (VAR_4->curr_tok == VAR_0) {
   RNumCalcValue VAR_8 = FUNC_3 (VAR_3, VAR_4, 1);
   if (VAR_3 != ((void*)0) && (!VAR_8.d || !VAR_8.n)) {
    VAR_3->dbz = 1;
    return VAR_8;
   }
   VAR_6 = FUNC_0 (VAR_6, VAR_8);
  } else {
   return VAR_6;
  }
 }
}
