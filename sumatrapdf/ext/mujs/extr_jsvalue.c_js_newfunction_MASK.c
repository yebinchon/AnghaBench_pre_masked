
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int Function_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_16__ {int * scope; TYPE_5__* function; } ;
struct TYPE_17__ {TYPE_1__ f; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
typedef TYPE_4__ js_Object ;
struct TYPE_20__ {int numparams; } ;
typedef TYPE_5__ js_Function ;
typedef int js_Environment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int,char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;

void FUNC_6(js_State *VAR_4, js_Function *VAR_5, js_Environment *VAR_6)
{
 js_Object *VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_4->Function_prototype);
 VAR_7->u.f.function = VAR_5;
 VAR_7->u.f.scope = VAR_6;
 FUNC_5(VAR_4, VAR_7);
 {
  FUNC_4(VAR_4, VAR_5->numparams);
  FUNC_2(VAR_4, -2, "length", VAR_3 | VAR_2 | VAR_1);
  FUNC_3(VAR_4);
  {
   FUNC_1(VAR_4, -2);
   FUNC_2(VAR_4, -2, "constructor", VAR_2);
  }
  FUNC_2(VAR_4, -2, "prototype", VAR_1);
 }
}
