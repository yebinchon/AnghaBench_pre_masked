
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16 ;
struct TYPE_5__ {int reslen; TYPE_2__* res; } ;
typedef TYPE_1__ TheSubstitute ;
struct TYPE_6__ {int * lexeme; } ;
typedef TYPE_2__ TSLexeme ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static TSLexeme *
FUNC_2(TheSubstitute *VAR_0)
{
 TSLexeme *VAR_1;
 uint16 VAR_2;

 VAR_1 = (TSLexeme *) FUNC_0(sizeof(TSLexeme) * (VAR_0->reslen + 1));
 for (VAR_2 = 0; VAR_2 < VAR_0->reslen; VAR_2++)
 {
  VAR_1[VAR_2] = VAR_0->res[VAR_2];
  VAR_1[VAR_2].lexeme = FUNC_1(VAR_0->res[VAR_2].lexeme);
 }

 VAR_1[VAR_0->reslen].lexeme = ((void*)0);

 return VAR_1;
}
