
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


struct TYPE_41__ {int lexline; char lookahead; } ;
typedef TYPE_1__ js_State ;
struct TYPE_42__ {scalar_t__ type; } ;
typedef TYPE_2__ js_Ast ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 char VAR_20 ;
 char VAR_21 ;
 char VAR_22 ;
 char VAR_23 ;
 char VAR_24 ;
 char VAR_25 ;
 char VAR_26 ;
 char VAR_27 ;
 char VAR_28 ;
 char VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_12 (TYPE_1__*) ;
 TYPE_2__* FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,char) ;
 int FUNC_15 (TYPE_1__*,char*,int ) ;
 int FUNC_16 (TYPE_1__*,char) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 int FUNC_18 (char) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_2__* FUNC_20 (TYPE_1__*,int ) ;

__attribute__((used)) static js_Ast *FUNC_21(js_State *VAR_34)
{
 js_Ast *VAR_35, *VAR_36, *VAR_37, *VAR_38;
 js_Ast *VAR_39;
 int VAR_40 = VAR_34->lexline;

 FUNC_1();

 if (VAR_34->lookahead == '{') {
  VAR_39 = FUNC_7(VAR_34);
 }

 else if (FUNC_14(VAR_34, VAR_27)) {
  VAR_35 = FUNC_20(VAR_34, 0);
  FUNC_19(VAR_34);
  VAR_39 = FUNC_3(VAR_31, VAR_35);
 }


 else if (FUNC_14(VAR_34, ';')) {
  VAR_39 = FUNC_2(VAR_5);
 }

 else if (FUNC_14(VAR_34, VAR_22)) {
  FUNC_16(VAR_34, '(');
  VAR_35 = FUNC_9(VAR_34, 0);
  FUNC_16(VAR_34, ')');
  VAR_36 = FUNC_21(VAR_34);
  if (FUNC_14(VAR_34, VAR_17))
   VAR_37 = FUNC_21(VAR_34);
  else
   VAR_37 = ((void*)0);
  VAR_39 = FUNC_5(VAR_7, VAR_35, VAR_36, VAR_37);
 }

 else if (FUNC_14(VAR_34, VAR_16)) {
  VAR_35 = FUNC_21(VAR_34);
  FUNC_16(VAR_34, VAR_28);
  FUNC_16(VAR_34, '(');
  VAR_36 = FUNC_9(VAR_34, 0);
  FUNC_16(VAR_34, ')');
  FUNC_19(VAR_34);
  VAR_39 = FUNC_4(VAR_4, VAR_35, VAR_36);
 }

 else if (FUNC_14(VAR_34, VAR_28)) {
  FUNC_16(VAR_34, '(');
  VAR_35 = FUNC_9(VAR_34, 0);
  FUNC_16(VAR_34, ')');
  VAR_36 = FUNC_21(VAR_34);
  VAR_39 = FUNC_4(VAR_32, VAR_35, VAR_36);
 }

 else if (FUNC_14(VAR_34, VAR_19)) {
  VAR_39 = FUNC_10(VAR_34, VAR_40);
 }

 else if (FUNC_14(VAR_34, VAR_14)) {
  VAR_35 = FUNC_13(VAR_34);
  FUNC_19(VAR_34);
  VAR_39 = FUNC_3(VAR_2, VAR_35);
 }

 else if (FUNC_14(VAR_34, VAR_12)) {
  VAR_35 = FUNC_13(VAR_34);
  FUNC_19(VAR_34);
  VAR_39 = FUNC_3(VAR_1, VAR_35);
 }

 else if (FUNC_14(VAR_34, VAR_23)) {
  if (VAR_34->lookahead != ';' && VAR_34->lookahead != '}' && VAR_34->lookahead != 0)
   VAR_35 = FUNC_9(VAR_34, 0);
  else
   VAR_35 = ((void*)0);
  FUNC_19(VAR_34);
  VAR_39 = FUNC_3(VAR_9, VAR_35);
 }

 else if (FUNC_14(VAR_34, VAR_29)) {
  FUNC_16(VAR_34, '(');
  VAR_35 = FUNC_9(VAR_34, 0);
  FUNC_16(VAR_34, ')');
  VAR_36 = FUNC_21(VAR_34);
  VAR_39 = FUNC_4(VAR_33, VAR_35, VAR_36);
 }

 else if (FUNC_14(VAR_34, VAR_24)) {
  FUNC_16(VAR_34, '(');
  VAR_35 = FUNC_9(VAR_34, 0);
  FUNC_16(VAR_34, ')');
  FUNC_16(VAR_34, '{');
  VAR_36 = FUNC_8(VAR_34);
  FUNC_16(VAR_34, '}');
  VAR_39 = FUNC_4(VAR_10, VAR_35, VAR_36);
 }

 else if (FUNC_14(VAR_34, VAR_25)) {
  VAR_35 = FUNC_9(VAR_34, 0);
  FUNC_19(VAR_34);
  VAR_39 = FUNC_3(VAR_11, VAR_35);
 }

 else if (FUNC_14(VAR_34, VAR_26)) {
  VAR_35 = FUNC_7(VAR_34);
  VAR_36 = VAR_37 = VAR_38 = ((void*)0);
  if (FUNC_14(VAR_34, VAR_13)) {
   FUNC_16(VAR_34, '(');
   VAR_36 = FUNC_12(VAR_34);
   FUNC_16(VAR_34, ')');
   VAR_37 = FUNC_7(VAR_34);
  }
  if (FUNC_14(VAR_34, VAR_18)) {
   VAR_38 = FUNC_7(VAR_34);
  }
  if (!VAR_36 && !VAR_38)
   FUNC_15(VAR_34, "unexpected token in try: %s (expected 'catch' or 'finally')", FUNC_18(VAR_34->lookahead));
  VAR_39 = FUNC_6(VAR_30, VAR_35, VAR_36, VAR_37, VAR_38);
 }

 else if (FUNC_14(VAR_34, VAR_15)) {
  FUNC_19(VAR_34);
  VAR_39 = FUNC_2(VAR_3);
 }

 else if (FUNC_14(VAR_34, VAR_20)) {
  FUNC_17(VAR_34, "function statements are not standard");
  VAR_39 = FUNC_11(VAR_34, VAR_40);
 }


 else if (VAR_34->lookahead == VAR_21) {
  VAR_35 = FUNC_9(VAR_34, 0);
  if (VAR_35->type == VAR_6 && FUNC_14(VAR_34, ':')) {
   VAR_35->type = VAR_0;
   VAR_36 = FUNC_21(VAR_34);
   VAR_39 = FUNC_4(VAR_8, VAR_35, VAR_36);
  } else {
   FUNC_19(VAR_34);
   VAR_39 = VAR_35;
  }
 }


 else {
  VAR_39 = FUNC_9(VAR_34, 0);
  FUNC_19(VAR_34);
 }

 FUNC_0();
 return VAR_39;
}
