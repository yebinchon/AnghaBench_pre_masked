
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_13__ {scalar_t__ vectorpos; } ;
struct TYPE_12__ {scalar_t__ type; int flags; struct TYPE_12__* lexeme; struct TYPE_12__* next; int lenlemm; int lemm; } ;
typedef int TSQuery ;
typedef TYPE_1__ TSLexeme ;
typedef TYPE_1__ ParsedLex ;
typedef TYPE_3__ HeadlineParsedText ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(HeadlineParsedText *VAR_1, TSQuery VAR_2, ParsedLex *VAR_3, TSLexeme *VAR_4)
{
 ParsedLex *VAR_5;
 TSLexeme *VAR_6;
 int32 VAR_7;

 while (VAR_3)
 {
  if (VAR_3->type > 0)
   FUNC_0(VAR_1, VAR_3->lemm, VAR_3->lenlemm, VAR_3->type);

  VAR_6 = VAR_4;
  VAR_7 = VAR_1->vectorpos;
  while (VAR_6 && VAR_6->lexeme)
  {
   if (VAR_6->flags & VAR_0)
    VAR_7++;
   FUNC_1(VAR_1, VAR_2, VAR_7, VAR_6->lexeme, FUNC_3(VAR_6->lexeme));
   VAR_6++;
  }

  VAR_5 = VAR_3->next;
  FUNC_2(VAR_3);
  VAR_3 = VAR_5;
 }

 if (VAR_4)
 {
  VAR_6 = VAR_4;
  while (VAR_6->lexeme)
  {
   if (VAR_6->flags & VAR_0)
    VAR_1->vectorpos++;
   FUNC_2(VAR_6->lexeme);
   VAR_6++;
  }
  FUNC_2(VAR_4);
 }
}
