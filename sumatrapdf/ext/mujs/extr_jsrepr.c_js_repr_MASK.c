
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int bot; int top; } ;
typedef TYPE_1__ js_State ;
struct TYPE_17__ {char* s; } ;
typedef TYPE_2__ js_Buffer ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__**,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__**) ;

void FUNC_9(js_State *VAR_0, int VAR_1)
{
 js_Buffer *VAR_2 = ((void*)0);
 int VAR_3;

 if (FUNC_7(VAR_0)) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_6(VAR_0);
 }

 FUNC_0(VAR_0, VAR_1);

 VAR_3 = VAR_0->bot;
 VAR_0->bot = VAR_0->top - 1;
 FUNC_8(VAR_0, &VAR_2);
 VAR_0->bot = VAR_3;

 FUNC_3(VAR_0, 1);

 FUNC_5(VAR_0, &VAR_2, 0);
 FUNC_4(VAR_0, VAR_2 ? VAR_2->s : "undefined");

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_2);
}
