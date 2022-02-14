
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int prototype; } ;
typedef TYPE_1__ js_Object ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0)
{
 js_Object *VAR_1;
 if (!FUNC_0(VAR_0, 1))
  FUNC_4(VAR_0, "not an object");
 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1->prototype)
  FUNC_2(VAR_0, VAR_1->prototype);
 else
  FUNC_1(VAR_0);
}
