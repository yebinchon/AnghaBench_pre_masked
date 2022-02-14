
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {int number; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_1)
{
 js_Object *VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2->type != VAR_0) FUNC_2(VAR_1, "not a number");
 FUNC_0(VAR_1, VAR_2->u.number);
}
