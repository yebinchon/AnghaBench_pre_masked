
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* Function_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_11__ {char* name; scalar_t__ length; int * constructor; int function; } ;
struct TYPE_10__ {TYPE_2__ c; } ;
struct TYPE_13__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*,int ,int) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;

void FUNC_4(js_State *VAR_7)
{
 VAR_7->Function_prototype->u.c.name = "Function.prototype";
 VAR_7->Function_prototype->u.c.function = VAR_6;
 VAR_7->Function_prototype->u.c.constructor = ((void*)0);
 VAR_7->Function_prototype->u.c.length = 0;

 FUNC_3(VAR_7, VAR_7->Function_prototype);
 {
  FUNC_0(VAR_7, "Function.prototype.toString", VAR_3, 2);
  FUNC_0(VAR_7, "Function.prototype.apply", VAR_0, 2);
  FUNC_0(VAR_7, "Function.prototype.call", VAR_2, 1);
  FUNC_0(VAR_7, "Function.prototype.bind", VAR_1, 1);
 }
 FUNC_2(VAR_7, VAR_5, VAR_5, "Function", 1);
 FUNC_1(VAR_7, "Function", VAR_4);
}
