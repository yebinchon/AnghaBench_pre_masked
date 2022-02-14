
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {TYPE_7__* properties; } ;
typedef TYPE_1__ js_Object ;
struct TYPE_9__ {scalar_t__ level; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_7__*) ;
 TYPE_1__* FUNC_1 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_1)
{
 js_Object *VAR_2;
 js_Object *VAR_3;
 js_Object *VAR_4;

 if (FUNC_4(VAR_1, 1))
  VAR_3 = FUNC_6(VAR_1, 1);
 else if (FUNC_3(VAR_1, 1))
  VAR_3 = ((void*)0);
 else
  FUNC_7(VAR_1, "not an object or null");

 VAR_2 = FUNC_1(VAR_1, VAR_0, VAR_3);
 FUNC_5(VAR_1, VAR_2);

 if (FUNC_2(VAR_1, 2)) {
  if (!FUNC_4(VAR_1, 2))
   FUNC_7(VAR_1, "not an object");
  VAR_4 = FUNC_6(VAR_1, 2);
  if (VAR_4->properties->level)
   FUNC_0(VAR_1, VAR_2, VAR_4->properties);
 }
}
