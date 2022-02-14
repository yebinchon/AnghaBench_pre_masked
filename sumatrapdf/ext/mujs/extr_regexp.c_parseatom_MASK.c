
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cstate {scalar_t__ lookahead; scalar_t__ yychar; scalar_t__ nsub; TYPE_1__** sub; int yycc; } ;
struct TYPE_4__ {scalar_t__ c; size_t n; struct TYPE_4__* x; int cc; } ;
typedef TYPE_1__ Renode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct cstate*,char) ;
 int FUNC_1 (struct cstate*,char*) ;
 TYPE_1__* FUNC_2 (struct cstate*,int ) ;
 int FUNC_3 (struct cstate*) ;
 void* FUNC_4 (struct cstate*) ;

__attribute__((used)) static Renode *FUNC_5(struct cstate *VAR_16)
{
 Renode *VAR_17;
 if (VAR_16->lookahead == VAR_1) {
  VAR_17 = FUNC_2(VAR_16, VAR_10);
  VAR_17->c = VAR_16->yychar;
  FUNC_3(VAR_16);
  return VAR_17;
 }
 if (VAR_16->lookahead == VAR_0) {
  VAR_17 = FUNC_2(VAR_16, VAR_9);
  VAR_17->cc = VAR_16->yycc;
  FUNC_3(VAR_16);
  return VAR_17;
 }
 if (VAR_16->lookahead == VAR_3) {
  VAR_17 = FUNC_2(VAR_16, VAR_11);
  VAR_17->cc = VAR_16->yycc;
  FUNC_3(VAR_16);
  return VAR_17;
 }
 if (VAR_16->lookahead == VAR_6) {
  VAR_17 = FUNC_2(VAR_16, VAR_15);
  if (VAR_16->yychar == 0 || VAR_16->yychar >= VAR_16->nsub || !VAR_16->sub[VAR_16->yychar])
   FUNC_1(VAR_16, "invalid back-reference");
  VAR_17->n = VAR_16->yychar;
  VAR_17->x = VAR_16->sub[VAR_16->yychar];
  FUNC_3(VAR_16);
  return VAR_17;
 }
 if (FUNC_0(VAR_16, '.'))
  return FUNC_2(VAR_16, VAR_8);
 if (FUNC_0(VAR_16, '(')) {
  VAR_17 = FUNC_2(VAR_16, VAR_13);
  if (VAR_16->nsub == VAR_7)
   FUNC_1(VAR_16, "too many captures");
  VAR_17->n = VAR_16->nsub++;
  VAR_17->x = FUNC_4(VAR_16);
  VAR_16->sub[VAR_17->n] = VAR_17;
  if (!FUNC_0(VAR_16, ')'))
   FUNC_1(VAR_16, "unmatched '('");
  return VAR_17;
 }
 if (FUNC_0(VAR_16, VAR_2)) {
  VAR_17 = FUNC_4(VAR_16);
  if (!FUNC_0(VAR_16, ')'))
   FUNC_1(VAR_16, "unmatched '('");
  return VAR_17;
 }
 if (FUNC_0(VAR_16, VAR_5)) {
  VAR_17 = FUNC_2(VAR_16, VAR_14);
  VAR_17->x = FUNC_4(VAR_16);
  if (!FUNC_0(VAR_16, ')'))
   FUNC_1(VAR_16, "unmatched '('");
  return VAR_17;
 }
 if (FUNC_0(VAR_16, VAR_4)) {
  VAR_17 = FUNC_2(VAR_16, VAR_12);
  VAR_17->x = FUNC_4(VAR_16);
  if (!FUNC_0(VAR_16, ')'))
   FUNC_1(VAR_16, "unmatched '('");
  return VAR_17;
 }
 FUNC_1(VAR_16, "syntax error");
 return ((void*)0);
}
