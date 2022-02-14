
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {struct TYPE_5__* b; } ;
typedef TYPE_1__ js_Ast ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static js_Ast *FUNC_4(js_State *VAR_0, int VAR_1)
{
 js_Ast *VAR_2, *VAR_3;
 VAR_2 = VAR_3 = FUNC_0(FUNC_3(VAR_0, VAR_1));
 while (FUNC_1(VAR_0, ','))
  VAR_3 = VAR_3->b = FUNC_0(FUNC_3(VAR_0, VAR_1));
 return FUNC_2(VAR_2);
}
