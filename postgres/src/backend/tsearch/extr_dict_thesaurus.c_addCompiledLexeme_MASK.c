
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_9__ {TYPE_3__* entries; int * lexeme; } ;
typedef TYPE_1__ TheLexeme ;
struct TYPE_11__ {int tnvariant; int * nextentry; int posinsubst; int idsubst; } ;
struct TYPE_10__ {scalar_t__ lexeme; } ;
typedef TYPE_2__ TSLexeme ;
typedef TYPE_3__ LexemeInfo ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static TheLexeme *
FUNC_3(TheLexeme *VAR_0, int *VAR_1, int *VAR_2, TSLexeme *VAR_3, LexemeInfo *VAR_4, uint16 VAR_5)
{
 if (*VAR_1 >= *VAR_2)
 {
  *VAR_2 *= 2;
  VAR_0 = (TheLexeme *) FUNC_2(VAR_0, sizeof(TheLexeme) * *VAR_2);
 }

 VAR_0[*VAR_1].entries = (LexemeInfo *) FUNC_0(sizeof(LexemeInfo));

 if (VAR_3 && VAR_3->lexeme)
 {
  VAR_0[*VAR_1].lexeme = FUNC_1(VAR_3->lexeme);
  VAR_0[*VAR_1].entries->tnvariant = VAR_5;
 }
 else
 {
  VAR_0[*VAR_1].lexeme = ((void*)0);
  VAR_0[*VAR_1].entries->tnvariant = 1;
 }

 VAR_0[*VAR_1].entries->idsubst = VAR_4->idsubst;
 VAR_0[*VAR_1].entries->posinsubst = VAR_4->posinsubst;

 VAR_0[*VAR_1].entries->nextentry = ((void*)0);

 (*VAR_1)++;
 return VAR_0;
}
