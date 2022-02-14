
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lastRes; TYPE_1__* tmpRes; } ;
struct TYPE_6__ {struct TYPE_6__* lexeme; } ;
typedef TYPE_1__ TSLexeme ;
typedef int ParsedLex ;
typedef TYPE_2__ LexizeData ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(LexizeData *VAR_0, ParsedLex *VAR_1, TSLexeme *VAR_2)
{
 if (VAR_0->tmpRes)
 {
  TSLexeme *VAR_3;

  for (VAR_3 = VAR_0->tmpRes; VAR_3->lexeme; VAR_3++)
   FUNC_0(VAR_3->lexeme);
  FUNC_0(VAR_0->tmpRes);
 }
 VAR_0->tmpRes = VAR_2;
 VAR_0->lastRes = VAR_1;
}
