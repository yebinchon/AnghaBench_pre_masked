
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_Value ;
typedef int js_State ;
struct TYPE_4__ {int numparams; int varlen; } ;
typedef TYPE_1__ js_Function ;
typedef int js_Environment ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_2, int VAR_3, js_Function *VAR_4, js_Environment *VAR_5)
{
 js_Value VAR_6;
 int VAR_7;

 FUNC_2(VAR_2, VAR_5);

 if (VAR_3 > VAR_4->numparams) {
  FUNC_3(VAR_2, VAR_3 - VAR_4->numparams);
  VAR_3 = VAR_4->numparams;
 }

 for (VAR_7 = VAR_3; VAR_7 < VAR_4->varlen; ++VAR_7)
  FUNC_4(VAR_2);

 FUNC_1(VAR_2, VAR_4);
 VAR_6 = *FUNC_6(VAR_2, -1);
 VAR_1 = --VAR_0;
 FUNC_5(VAR_2, VAR_6);

 FUNC_0(VAR_2);
}
