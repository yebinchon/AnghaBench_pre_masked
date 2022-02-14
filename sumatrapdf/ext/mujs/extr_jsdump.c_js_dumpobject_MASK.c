
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {TYPE_2__* properties; } ;
typedef TYPE_1__ js_Object ;
struct TYPE_5__ {scalar_t__ level; } ;


 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(js_State *VAR_1, js_Object *VAR_2)
{
 VAR_0 = 0;
 FUNC_1("{\n");
 if (VAR_2->properties->level)
  FUNC_0(VAR_1, VAR_2->properties);
 FUNC_1("}\n");
}
