
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {int yychar; char* source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cstate*) ;
 int FUNC_1 (struct cstate*) ;
 int FUNC_2 (struct cstate*) ;
 int FUNC_3 (struct cstate*) ;
 int FUNC_4 (struct cstate*) ;
 int FUNC_5 (struct cstate*) ;
 int FUNC_6 (struct cstate*) ;

__attribute__((used)) static int FUNC_7(struct cstate *VAR_9)
{
 int VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  switch (VAR_9->yychar) {
  case 'b': return VAR_8;
  case 'B': return VAR_5;
  case 'd': FUNC_5(VAR_9); FUNC_0(VAR_9); return VAR_0;
  case 's': FUNC_5(VAR_9); FUNC_1(VAR_9); return VAR_0;
  case 'w': FUNC_5(VAR_9); FUNC_2(VAR_9); return VAR_0;
  case 'D': FUNC_5(VAR_9); FUNC_0(VAR_9); return VAR_3;
  case 'S': FUNC_5(VAR_9); FUNC_1(VAR_9); return VAR_3;
  case 'W': FUNC_5(VAR_9); FUNC_2(VAR_9); return VAR_3;
  case '0': VAR_9->yychar = 0; return VAR_1;
  }
  if (VAR_9->yychar >= '0' && VAR_9->yychar <= '9') {
   VAR_9->yychar -= '0';
   if (*VAR_9->source >= '0' && *VAR_9->source <= '9')
    VAR_9->yychar = VAR_9->yychar * 10 + *VAR_9->source++ - '0';
   return VAR_7;
  }
  return VAR_1;
 }

 switch (VAR_9->yychar) {
 case 0:
 case '$': case ')': case '*': case '+':
 case '.': case '?': case '^': case '|':
  return VAR_9->yychar;
 }

 if (VAR_9->yychar == '{')
  return FUNC_4(VAR_9);
 if (VAR_9->yychar == '[')
  return FUNC_3(VAR_9);
 if (VAR_9->yychar == '(') {
  if (VAR_9->source[0] == '?') {
   if (VAR_9->source[1] == ':') {
    VAR_9->source += 2;
    return VAR_2;
   }
   if (VAR_9->source[1] == '=') {
    VAR_9->source += 2;
    return VAR_6;
   }
   if (VAR_9->source[1] == '!') {
    VAR_9->source += 2;
    return VAR_4;
   }
  }
  return '(';
 }

 return VAR_1;
}
