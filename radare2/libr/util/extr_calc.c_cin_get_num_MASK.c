
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {double n; double d; } ;
typedef TYPE_1__ RNumCalcValue ;
typedef int RNumCalc ;
typedef int RNum ;


 scalar_t__ FUNC_0 (char) ;
 TYPE_1__ FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (double) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,int *,char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,char*,double*) ;
 scalar_t__ FUNC_8 (char*,char) ;

__attribute__((used)) static int FUNC_9(RNum *VAR_1, RNumCalc *VAR_2, RNumCalcValue *VAR_3) {
 double VAR_4;
 char VAR_5[VAR_0 + 1];
 int VAR_6 = 0;
 char VAR_7;
 VAR_5[0] = 0;
 while (FUNC_3 (VAR_1, VAR_2, &VAR_7)) {
  if (VAR_7 != '_' && VAR_7!=':' && VAR_7!='.' && !FUNC_5 ((ut8)VAR_7)) {
   FUNC_4 (VAR_1, VAR_2, VAR_7);
   break;
  }
  if (VAR_6 < VAR_0) {
   VAR_5[VAR_6++] = VAR_7;
  }
 }
 VAR_5[VAR_6] = 0;
 *VAR_3 = FUNC_1 (FUNC_6 (VAR_1, VAR_5));
 if (FUNC_0 (*VAR_5) && FUNC_8 (VAR_5, '.')) {
  if (FUNC_7 (VAR_5, "%lf", &VAR_4) < 1) {
   return 0;
  }
  if (VAR_3->n < VAR_4) {
   *VAR_3 = FUNC_2 (VAR_4);
  }
  VAR_3->d = VAR_4;
 }
 return 1;
}
