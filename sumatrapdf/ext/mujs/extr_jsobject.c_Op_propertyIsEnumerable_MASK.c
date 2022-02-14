
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; } ;
typedef TYPE_1__ js_Property ;
typedef int js_Object ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_1)
{
 js_Object *VAR_2 = FUNC_2(VAR_1, 0);
 const char *VAR_3 = FUNC_3(VAR_1, 1);
 js_Property *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_4 && !(VAR_4->atts & VAR_0));
}
