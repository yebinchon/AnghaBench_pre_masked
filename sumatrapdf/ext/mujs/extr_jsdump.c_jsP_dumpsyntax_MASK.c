
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ js_Ast ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (char) ;

void FUNC_4(js_State *VAR_2, js_Ast *VAR_3, int VAR_4)
{
 VAR_1 = VAR_4;
 if (VAR_3->type == VAR_0)
  FUNC_2(-1, VAR_3);
 else {
  FUNC_1(0, VAR_3);
  FUNC_0();
 }
 if (VAR_1 > 1)
  FUNC_3('\n');
}
