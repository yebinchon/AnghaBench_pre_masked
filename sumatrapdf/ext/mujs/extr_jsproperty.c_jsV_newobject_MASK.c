
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int gccounter; TYPE_2__* gcobj; } ;
typedef TYPE_1__ js_State ;
struct TYPE_10__ {int type; int extensible; struct TYPE_10__* prototype; int * properties; struct TYPE_10__* gcnext; scalar_t__ gcmark; } ;
typedef TYPE_2__ js_Object ;
typedef enum js_Class { ____Placeholder_js_Class } js_Class ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

js_Object *FUNC_2(js_State *VAR_1, enum js_Class VAR_2, js_Object *VAR_3)
{
 js_Object *VAR_4 = FUNC_0(VAR_1, sizeof *VAR_4);
 FUNC_1(VAR_4, 0, sizeof *VAR_4);
 VAR_4->gcmark = 0;
 VAR_4->gcnext = VAR_1->gcobj;
 VAR_1->gcobj = VAR_4;
 ++VAR_1->gccounter;

 VAR_4->type = VAR_2;
 VAR_4->properties = &VAR_0;
 VAR_4->prototype = VAR_3;
 VAR_4->extensible = 1;
 return VAR_4;
}
