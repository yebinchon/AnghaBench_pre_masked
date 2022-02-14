
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {double number; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Object ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static double FUNC_2(js_State *VAR_1, int VAR_2)
{
 js_Object *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3->type != VAR_0)
  FUNC_1(VAR_1, "not a date");
 return VAR_3->u.number;
}
