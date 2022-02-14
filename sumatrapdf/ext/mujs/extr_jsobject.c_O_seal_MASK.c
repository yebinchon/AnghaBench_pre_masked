
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {TYPE_3__* properties; scalar_t__ extensible; } ;
typedef TYPE_1__ js_Object ;
struct TYPE_5__ {scalar_t__ level; } ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0)
{
 js_Object *VAR_1;

 if (!FUNC_2(VAR_0, 1))
  FUNC_4(VAR_0, "not an object");

 VAR_1 = FUNC_3(VAR_0, 1);
 VAR_1->extensible = 0;

 if (VAR_1->properties->level)
  FUNC_0(VAR_0, VAR_1->properties);

 FUNC_1(VAR_0, 1);
}
