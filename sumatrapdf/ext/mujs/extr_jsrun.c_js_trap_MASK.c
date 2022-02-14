
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {int E; } ;
typedef TYPE_5__ js_State ;
typedef int js_Function ;
struct TYPE_16__ {TYPE_3__* object; } ;
struct TYPE_13__ {int * function; } ;
struct TYPE_14__ {TYPE_1__ f; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_4__ u; } ;


 int VAR_0 ;
 TYPE_11__* VAR_1 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(js_State *VAR_2, int VAR_3)
{
 if (VAR_3 > 0) {
  js_Function *VAR_4 = VAR_1[VAR_0-1].u.object->u.f.function;
  FUNC_4("trap at %d in function ", VAR_3);
  FUNC_0(VAR_2, VAR_4);
 }
 FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_2->E, 0);
 FUNC_3(VAR_2);
}
