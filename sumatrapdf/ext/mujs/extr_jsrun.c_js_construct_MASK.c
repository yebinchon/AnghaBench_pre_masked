
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {TYPE_4__* Object_prototype; int tracetop; } ;
typedef TYPE_3__ js_State ;
struct TYPE_24__ {scalar_t__ constructor; int length; int name; } ;
struct TYPE_25__ {TYPE_1__ c; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_4__ js_Object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int,char*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*,char*,int ) ;
 int FUNC_13 (TYPE_3__*,int) ;

void FUNC_14(js_State *VAR_4, int VAR_5)
{
 js_Object *VAR_6;
 js_Object *VAR_7;
 js_Object *VAR_8;

 if (!FUNC_5(VAR_4, -VAR_5-1))
  FUNC_12(VAR_4, "%s is not callable", FUNC_13(VAR_4, -VAR_5-1));

 VAR_6 = FUNC_11(VAR_4, -VAR_5-1);


 if (VAR_6->type == VAR_1 && VAR_6->u.c.constructor) {
  int VAR_9 = VAR_0;
  FUNC_8(VAR_4);
  if (VAR_5 > 0)
   FUNC_10(VAR_4, VAR_5 + 1);
  VAR_0 = VAR_3 - VAR_5 - 1;

  FUNC_1(VAR_4, VAR_6->u.c.name, "native", 0);
  FUNC_0(VAR_4, VAR_5, VAR_6->u.c.length, VAR_6->u.c.constructor);
  --VAR_4->tracetop;

  VAR_0 = VAR_9;
  return;
 }


 FUNC_4(VAR_4, -VAR_5 - 1, "prototype");
 if (FUNC_6(VAR_4, -1))
  VAR_7 = FUNC_11(VAR_4, -1);
 else
  VAR_7 = VAR_4->Object_prototype;
 FUNC_7(VAR_4, 1);


 VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_7);
 FUNC_9(VAR_4, VAR_8);
 if (VAR_5 > 0)
  FUNC_10(VAR_4, VAR_5 + 1);


 FUNC_3(VAR_4, VAR_5);


 if (!FUNC_6(VAR_4, -1)) {
  FUNC_7(VAR_4, 1);
  FUNC_9(VAR_4, VAR_8);
 }
}
