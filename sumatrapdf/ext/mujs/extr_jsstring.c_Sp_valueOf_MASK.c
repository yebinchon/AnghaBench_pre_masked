
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {int string; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ js_Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_1)
{
 js_Object *VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2->type != VAR_0) FUNC_2(VAR_1, "not a string");
 FUNC_0(VAR_1, VAR_2->u.s.string);
}
