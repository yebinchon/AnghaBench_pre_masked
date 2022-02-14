
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {char* name; int numparams; char** vartab; } ;
typedef TYPE_1__ js_Function ;
typedef int js_Buffer ;


 int FUNC_0 (int *,int **,char) ;
 int FUNC_1 (int *,int **,char*) ;

__attribute__((used)) static void FUNC_2(js_State *VAR_0, js_Buffer **VAR_1, js_Function *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_0, VAR_1, "function ");
 FUNC_1(VAR_0, VAR_1, VAR_2->name);
 FUNC_0(VAR_0, VAR_1, '(');
 for (VAR_3 = 0; VAR_3 < VAR_2->numparams; ++VAR_3) {
  if (VAR_3 > 0)
   FUNC_1(VAR_0, VAR_1, ", ");
  FUNC_1(VAR_0, VAR_1, VAR_2->vartab[VAR_3]);
 }
 FUNC_1(VAR_0, VAR_1, ") { [byte code] }");
}
