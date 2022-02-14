
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_12__ {char* name; } ;
struct TYPE_11__ {TYPE_5__* function; } ;
struct TYPE_13__ {TYPE_2__ c; TYPE_1__ f; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ js_Object ;
struct TYPE_15__ {char* name; int numparams; char** vartab; } ;
typedef TYPE_5__ js_Function ;
struct TYPE_16__ {int s; } ;
typedef TYPE_6__ js_Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_6__**,char) ;
 int FUNC_6 (int *,TYPE_6__**,char*) ;
 int FUNC_7 (int *) ;
 TYPE_4__* FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_3)
{
 js_Object *VAR_4 = FUNC_8(VAR_3, 0);
 js_Buffer *VAR_5 = ((void*)0);
 int VAR_6;

 if (!FUNC_2(VAR_3, 0))
  FUNC_10(VAR_3, "not a function");

 if (VAR_4->type == VAR_1 || VAR_4->type == VAR_2) {
  js_Function *VAR_7 = VAR_4->u.f.function;

  if (FUNC_9(VAR_3)) {
   FUNC_1(VAR_3, VAR_5);
   FUNC_7(VAR_3);
  }

  FUNC_6(VAR_3, &VAR_5, "function ");
  FUNC_6(VAR_3, &VAR_5, VAR_7->name);
  FUNC_5(VAR_3, &VAR_5, '(');
  for (VAR_6 = 0; VAR_6 < VAR_7->numparams; ++VAR_6) {
   if (VAR_6 > 0) FUNC_5(VAR_3, &VAR_5, ',');
   FUNC_6(VAR_3, &VAR_5, VAR_7->vartab[VAR_6]);
  }
  FUNC_6(VAR_3, &VAR_5, ") { [byte code] }");
  FUNC_5(VAR_3, &VAR_5, 0);

  FUNC_4(VAR_3, VAR_5->s);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, VAR_5);
 } else if (VAR_4->type == VAR_0) {
  if (FUNC_9(VAR_3)) {
   FUNC_1(VAR_3, VAR_5);
   FUNC_7(VAR_3);
  }

  FUNC_6(VAR_3, &VAR_5, "function ");
  FUNC_6(VAR_3, &VAR_5, VAR_4->u.c.name);
  FUNC_6(VAR_3, &VAR_5, "() { [native code] }");
  FUNC_5(VAR_3, &VAR_5, 0);

  FUNC_4(VAR_3, VAR_5->s);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, VAR_5);
 } else {
  FUNC_3(VAR_3, "function () { }");
 }
}
