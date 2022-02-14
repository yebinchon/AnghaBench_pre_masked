
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int Function_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_14__ {char const* name; int length; void* constructor; void* function; } ;
struct TYPE_15__ {TYPE_1__ c; } ;
struct TYPE_17__ {TYPE_2__ u; } ;
typedef TYPE_4__ js_Object ;
typedef void* js_CFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int,char*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6(js_State *VAR_4, js_CFunction VAR_5, js_CFunction VAR_6, const char *VAR_7, int VAR_8)
{
 js_Object *VAR_9 = FUNC_0(VAR_4, VAR_0, VAR_4->Function_prototype);
 VAR_9->u.c.name = VAR_7;
 VAR_9->u.c.function = VAR_5;
 VAR_9->u.c.constructor = VAR_6;
 VAR_9->u.c.length = VAR_8;
 FUNC_4(VAR_4, VAR_9);
 {
  FUNC_3(VAR_4, VAR_8);
  FUNC_2(VAR_4, -2, "length", VAR_3 | VAR_2 | VAR_1);
  FUNC_5(VAR_4);
  FUNC_1(VAR_4, -2);
  FUNC_2(VAR_4, -2, "constructor", VAR_2);
  FUNC_2(VAR_4, -2, "prototype", VAR_3 | VAR_2 | VAR_1);
 }
}
