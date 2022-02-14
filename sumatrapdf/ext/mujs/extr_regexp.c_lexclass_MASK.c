
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {char yychar; } ;
typedef char Rune ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cstate*,char,char) ;
 int FUNC_1 (struct cstate*) ;
 int FUNC_2 (struct cstate*) ;
 int FUNC_3 (struct cstate*) ;
 int FUNC_4 (struct cstate*) ;
 int FUNC_5 (struct cstate*) ;
 int FUNC_6 (struct cstate*) ;
 int FUNC_7 (struct cstate*,char*) ;
 int FUNC_8 (struct cstate*) ;
 int FUNC_9 (struct cstate*) ;
 scalar_t__ FUNC_10 (char*,char) ;

__attribute__((used)) static int FUNC_11(struct cstate *VAR_2)
{
 int VAR_3 = VAR_0;
 int VAR_4, VAR_5, VAR_6;
 Rune VAR_7 = 0;

 FUNC_8(VAR_2);

 VAR_4 = FUNC_9(VAR_2);
 if (!VAR_4 && VAR_2->yychar == '^') {
  VAR_3 = VAR_1;
  VAR_4 = FUNC_9(VAR_2);
 }

 VAR_5 = VAR_6 = 0;
 for (;;) {
  if (VAR_2->yychar == 0)
   FUNC_7(VAR_2, "unterminated character class");
  if (!VAR_4 && VAR_2->yychar == ']')
   break;

  if (!VAR_4 && VAR_2->yychar == '-') {
   if (VAR_5) {
    if (VAR_6) {
     FUNC_0(VAR_2, VAR_7, '-');
     VAR_5 = VAR_6 = 0;
    } else {
     VAR_6 = 1;
    }
   } else {
    VAR_7 = '-';
    VAR_5 = 1;
   }
  } else if (VAR_4 && FUNC_10("DSWdsw", VAR_2->yychar)) {
   if (VAR_5) {
    FUNC_0(VAR_2, VAR_7, VAR_7);
    if (VAR_6)
     FUNC_0(VAR_2, '-', '-');
   }
   switch (VAR_2->yychar) {
   case 'd': FUNC_4(VAR_2); break;
   case 's': FUNC_5(VAR_2); break;
   case 'w': FUNC_6(VAR_2); break;
   case 'D': FUNC_1(VAR_2); break;
   case 'S': FUNC_2(VAR_2); break;
   case 'W': FUNC_3(VAR_2); break;
   }
   VAR_5 = VAR_6 = 0;
  } else {
   if (VAR_4) {
    if (VAR_2->yychar == 'b')
     VAR_2->yychar = '\b';
    else if (VAR_2->yychar == '0')
     VAR_2->yychar = 0;

   }
   if (VAR_5) {
    if (VAR_6) {
     FUNC_0(VAR_2, VAR_7, VAR_2->yychar);
     VAR_5 = VAR_6 = 0;
    } else {
     FUNC_0(VAR_2, VAR_7, VAR_7);
     VAR_7 = VAR_2->yychar;
    }
   } else {
    VAR_7 = VAR_2->yychar;
    VAR_5 = 1;
   }
  }

  VAR_4 = FUNC_9(VAR_2);
 }

 if (VAR_5) {
  FUNC_0(VAR_2, VAR_7, VAR_7);
  if (VAR_6)
   FUNC_0(VAR_2, '-', '-');
 }

 return VAR_3;
}
