
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lookahead; int text; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int * FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static js_Ast *FUNC_4(js_State *VAR_3)
{
 if (VAR_3->lookahead == VAR_2 || VAR_3->lookahead >= VAR_1) {
  js_Ast *VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_3->text);
  FUNC_2(VAR_3);
  return VAR_4;
 }
 FUNC_0(VAR_3, "unexpected token: %s (expected identifier or keyword)", FUNC_3(VAR_3->lookahead));
}
