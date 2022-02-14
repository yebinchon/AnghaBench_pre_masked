
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int js_Value ;
struct TYPE_22__ {int strict; } ;
typedef TYPE_1__ js_State ;
struct TYPE_23__ {int numparams; char** vartab; int varlen; scalar_t__ arguments; } ;
typedef TYPE_2__ js_Function ;
typedef int js_Environment ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int * FUNC_15 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_16(js_State *VAR_4, int VAR_5, js_Function *VAR_6, js_Environment *VAR_7)
{
 js_Value VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4, FUNC_4(VAR_4, VAR_1, ((void*)0)), VAR_7);

 FUNC_3(VAR_4, VAR_7);

 if (VAR_6->arguments) {
  FUNC_9(VAR_4);
  if (!VAR_4->strict) {
   FUNC_6(VAR_4);
   FUNC_7(VAR_4, -2, "callee", VAR_2);
  }
  FUNC_11(VAR_4, VAR_5);
  FUNC_7(VAR_4, -2, "length", VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
   FUNC_5(VAR_4, VAR_9 + 1);
   FUNC_14(VAR_4, -2, VAR_9);
  }
  FUNC_8(VAR_4, "arguments", -1);
  FUNC_10(VAR_4, 1);
 }

 for (VAR_9 = 0; VAR_9 < VAR_5 && VAR_9 < VAR_6->numparams; ++VAR_9)
  FUNC_8(VAR_4, VAR_6->vartab[VAR_9], VAR_9 + 1);
 FUNC_10(VAR_4, VAR_5);

 for (; VAR_9 < VAR_6->varlen; ++VAR_9) {
  FUNC_12(VAR_4);
  FUNC_8(VAR_4, VAR_6->vartab[VAR_9], -1);
  FUNC_10(VAR_4, 1);
 }

 FUNC_2(VAR_4, VAR_6);
 VAR_8 = *FUNC_15(VAR_4, -1);
 VAR_3 = --VAR_0;
 FUNC_13(VAR_4, VAR_8);

 FUNC_1(VAR_4);
}
