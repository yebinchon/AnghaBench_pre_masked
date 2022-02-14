
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int lexline; scalar_t__ lookahead; int number; int text; } ;
typedef TYPE_1__ js_State ;
struct TYPE_20__ {int number; } ;
typedef TYPE_2__ js_Ast ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 char VAR_8 ;
 scalar_t__ VAR_9 ;
 char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int * VAR_16 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_12(js_State *VAR_17)
{
 js_Ast *VAR_18;
 int VAR_19 = VAR_17->lexline;

 if (VAR_17->lookahead == VAR_9) {
  VAR_18 = FUNC_8(VAR_17, VAR_1, VAR_17->text);
  FUNC_9(VAR_17);
  return VAR_18;
 }
 if (VAR_17->lookahead == VAR_13) {
  VAR_18 = FUNC_8(VAR_17, VAR_4, VAR_17->text);
  FUNC_9(VAR_17);
  return VAR_18;
 }
 if (VAR_17->lookahead == VAR_12) {
  VAR_18 = FUNC_8(VAR_17, VAR_3, VAR_17->text);
  VAR_18->number = VAR_17->number;
  FUNC_9(VAR_17);
  return VAR_18;
 }
 if (VAR_17->lookahead == VAR_11) {
  VAR_18 = FUNC_7(VAR_17, VAR_2, VAR_17->number);
  FUNC_9(VAR_17);
  return VAR_18;
 }

 if (FUNC_4(VAR_17, VAR_14)) return FUNC_0(VAR_7);
 if (FUNC_4(VAR_17, VAR_10)) return FUNC_0(((void*)0));
 if (FUNC_4(VAR_17, VAR_15)) return FUNC_0(VAR_16);
 if (FUNC_4(VAR_17, VAR_8)) return FUNC_0(VAR_5);
 if (FUNC_4(VAR_17, '{')) {
  VAR_18 = FUNC_1(VAR_6, FUNC_11(VAR_17));
  FUNC_6(VAR_17, '}');
  return VAR_18;
 }
 if (FUNC_4(VAR_17, '[')) {
  VAR_18 = FUNC_1(VAR_0, FUNC_2(VAR_17));
  FUNC_6(VAR_17, ']');
  return VAR_18;
 }
 if (FUNC_4(VAR_17, '(')) {
  VAR_18 = FUNC_3(VAR_17, 0);
  FUNC_6(VAR_17, ')');
  return VAR_18;
 }

 FUNC_5(VAR_17, "unexpected token in expression: %s", FUNC_10(VAR_17->lookahead));
}
