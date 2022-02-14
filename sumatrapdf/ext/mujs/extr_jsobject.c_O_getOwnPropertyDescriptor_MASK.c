
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; int setter; int getter; int value; } ;
typedef TYPE_1__ js_Property ;
typedef int js_Object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_3)
{
 js_Object *VAR_4;
 js_Property *VAR_5;
 if (!FUNC_1(VAR_3, 1))
  FUNC_10(VAR_3, "not an object");
 VAR_4 = FUNC_8(VAR_3, 1);
 VAR_5 = FUNC_0(VAR_3, VAR_4, FUNC_9(VAR_3, 2));
 if (!VAR_5)
  FUNC_5(VAR_3);
 else {
  FUNC_2(VAR_3);
  if (!VAR_5->getter && !VAR_5->setter) {
   FUNC_6(VAR_3, VAR_5->value);
   FUNC_7(VAR_3, -2, "value");
   FUNC_3(VAR_3, !(VAR_5->atts & VAR_2));
   FUNC_7(VAR_3, -2, "writable");
  } else {
   if (VAR_5->getter)
    FUNC_4(VAR_3, VAR_5->getter);
   else
    FUNC_5(VAR_3);
   FUNC_7(VAR_3, -2, "get");
   if (VAR_5->setter)
    FUNC_4(VAR_3, VAR_5->setter);
   else
    FUNC_5(VAR_3);
   FUNC_7(VAR_3, -2, "set");
  }
  FUNC_3(VAR_3, !(VAR_5->atts & VAR_1));
  FUNC_7(VAR_3, -2, "enumerable");
  FUNC_3(VAR_3, !(VAR_5->atts & VAR_0));
  FUNC_7(VAR_3, -2, "configurable");
 }
}
