
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lookahead; int text; int number; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_4(js_State *VAR_4)
{
 js_Ast *VAR_5;
 if (VAR_4->lookahead == VAR_2) {
  VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_4->number);
  FUNC_3(VAR_4);
 } else if (VAR_4->lookahead == VAR_3) {
  VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_4->text);
  FUNC_3(VAR_4);
 } else {
  VAR_5 = FUNC_0(VAR_4);
 }
 return VAR_5;
}
