
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * error; TYPE_2__* output; } ;
typedef TYPE_1__ mpc_result_t ;
typedef int mpc_parser_t ;
typedef int mpc_err_t ;
struct TYPE_10__ {int children_num; int contents; int tag; struct TYPE_10__** children; } ;
typedef TYPE_2__ mpc_ast_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_10 (char*,int ,int *,TYPE_1__*) ;
 int * FUNC_11 (int ,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_13(int VAR_3, char **VAR_4) {
 mpc_parser_t* VAR_5 = FUNC_8("ident");
 mpc_parser_t* VAR_6 = FUNC_8("number");
 mpc_parser_t* VAR_7 = FUNC_8("character");
 mpc_parser_t* VAR_8 = FUNC_8("string");
 mpc_parser_t* VAR_9 = FUNC_8("factor");
 mpc_parser_t* VAR_10 = FUNC_8("term");
 mpc_parser_t* VAR_11 = FUNC_8("lexp");
 mpc_parser_t* VAR_12 = FUNC_8("stmt");
 mpc_parser_t* VAR_13 = FUNC_8("exp");
 mpc_parser_t* VAR_14 = FUNC_8("vartype");
 mpc_parser_t* VAR_15 = FUNC_8("typeident");
 mpc_parser_t* VAR_16 = FUNC_8("decls");
 mpc_parser_t* VAR_17 = FUNC_8("args");
 mpc_parser_t* VAR_18 = FUNC_8("body");
 mpc_parser_t* VAR_19 = FUNC_8("comment");
 mpc_parser_t* VAR_20 = FUNC_8("linecomment");
 mpc_parser_t* VAR_21 = FUNC_8("asm");
 mpc_parser_t* VAR_22 = FUNC_8("procedure");
 mpc_parser_t* VAR_23 = FUNC_8("cprocedure");
 mpc_parser_t* VAR_24 = FUNC_8("sigdef");
 mpc_parser_t* VAR_25 = FUNC_8("sigbody");
 mpc_parser_t* VAR_26 = FUNC_8("includes");
 mpc_parser_t* VAR_27 = FUNC_8("smallc");

 mpc_err_t* VAR_28 = FUNC_11(VAR_0,
   " ident     : /[a-zA-Z_][a-zA-Z0-9_]*/ ;                           \n"
   " number    : /[0-9]+/ ;                                           \n"
   " character : /'.'/ ;                                              \n"
   " string    : /\"(\\\\.|[^\"])*\"/ ;                               \n"
   "                                                                  \n"
   " factor    : '(' <lexp> ')'                                       \n"
   "           | <number>                                             \n"
   "           | <character>                                          \n"
   "           | <string>                                             \n"
   "           | <ident> '(' <lexp>? (',' <lexp>)* ')'                \n"
   "           | <ident> ;                                            \n"
   "                                                                  \n"
   " term      : <factor> (('*' | '/' | '%') <factor>)* ;             \n"
   " lexp      : <term> (('+' | '-') <term>)* ;                       \n"
   "                                                                  \n"
   " stmt      : '{' <stmt>* '}'                                      \n"
   "           | \"while\" '(' <exp> ')' <stmt>                       \n"
   "           | \"if\"    '(' <exp> ')' <stmt>                       \n"
   "           | <ident> '=' <lexp> ';'                               \n"
   "           | \"print\" '(' <lexp>? ')' ';'                        \n"
   "           | \"return\" <lexp>? ';'                               \n"
   "           | <ident> '(' (<number>|<ident>|<string>)? (',' (<string>|<number>|<ident>))* ')' ';' ;        \n"
   "                                                                  \n"
   " exp       : <lexp> '>' <lexp>                                    \n"
   "           | <lexp> '<' <lexp>                                    \n"
   "           | <lexp> \">=\" <lexp>                                 \n"
   "           | <lexp> \"<=\" <lexp>                                 \n"
   "           | <lexp> \"!=\" <lexp>                                 \n"
   "           | <lexp> \"==\" <lexp> ;                               \n"
   "                                                                  \n"
   " vartype   : (\"int\" | \"char\") ;                               \n"
   " typeident : <vartype> <ident> ;                                  \n"
   " decls     : (<typeident> ';')* ;                                 \n"
   " args      : <typeident>? (',' <typeident>)* ;                    \n"
   " body      : '{' <decls> <stmt>* '}' ;                            \n"
   " comment   : /\\/\\*([^\\*])*\\*\\// ;                            \n"
   " linecomment : /\\/\\/([^\\n])*/ ;                                \n"
   " asm       : /\\:([^\\n])*/ ;                                \n"
   " procedure : <ident> '@' \"global\" '(' <number>? ')' <body> ; \n"
   " cprocedure : <vartype> <ident> '(' <args> ')' <body> ; \n"
   " sigdef    : <ident> '@' <ident> '(' <number> ')' ';' ; \n"
   " sigbody   : '@' <ident> '(' <number> ')' ';' ; \n"
   " includes  : (\"#include\" <string>)* ;                           \n"
   " smallc    : /^/ (<comment>|<asm>|<linecomment>|<sigdef>|<sigbody>|<procedure>|<cprocedure>)* <includes> <decls> /$/ ; \n",
  VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
  VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
  VAR_24, VAR_25, VAR_26, VAR_27, ((void*)0));

 if (VAR_28 != ((void*)0)) {
  FUNC_7 (VAR_28);
  FUNC_6 (VAR_28);
  FUNC_1(1);
 }


 if (VAR_3 > 1) {

  mpc_result_t VAR_29;
  if (FUNC_9(VAR_4[1], VAR_27, &VAR_29)) {
   FUNC_4(VAR_29.output, VAR_1);
   {
    int VAR_30;
    mpc_ast_t *VAR_31 = VAR_29.output;
    for (VAR_30=0; VAR_30< VAR_31->children_num; VAR_30++) {
     mpc_ast_t *VAR_32 = VAR_31->children[VAR_30];
     FUNC_0 ("; TAG = %s    (%s)\n", VAR_32->tag, VAR_32->contents);
     FUNC_12 (VAR_32);
    }
   }
   FUNC_2(VAR_29.output);
  } else {
   FUNC_7(VAR_29.error);
   FUNC_6(VAR_29.error);
  }

 } else {

  mpc_result_t VAR_33;
  if (FUNC_10("<stdin>", VAR_2, VAR_27, &VAR_33)) {
   FUNC_3(VAR_33.output);
   FUNC_2(VAR_33.output);
  } else {
   FUNC_7(VAR_33.error);
   FUNC_6(VAR_33.error);
  }
 }


 FUNC_5(17, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
   VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_22, VAR_23,
   VAR_24, VAR_26, VAR_27);

 return 0;

}
