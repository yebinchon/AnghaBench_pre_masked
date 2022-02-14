
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pos; scalar_t__ npos; } ;
struct TYPE_5__ {scalar_t__ npos; scalar_t__ reverseinsert; int pos; int operandexists; } ;
typedef TYPE_1__ QueryRepresentationOperand ;
typedef int QueryRepresentation ;
typedef int QueryOperand ;
typedef TYPE_2__ ExecPhraseData ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(void *VAR_1, QueryOperand *VAR_2, ExecPhraseData *VAR_3)
{
 QueryRepresentation *VAR_4 = (QueryRepresentation *) VAR_1;
 QueryRepresentationOperand *VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (!VAR_5->operandexists)
  return 0;

 if (VAR_3)
 {
  VAR_3->npos = VAR_5->npos;
  VAR_3->pos = VAR_5->pos;
  if (VAR_5->reverseinsert)
   VAR_3->pos += VAR_0 - VAR_5->npos;
 }

 return 1;
}
