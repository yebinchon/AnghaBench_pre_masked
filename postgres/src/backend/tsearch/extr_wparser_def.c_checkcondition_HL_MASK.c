
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; TYPE_1__* words; } ;
typedef TYPE_2__ hlCheck ;
typedef int WordEntryPos ;
struct TYPE_7__ {scalar_t__* pos; int allocated; int npos; } ;
struct TYPE_5__ {scalar_t__ pos; int * item; } ;
typedef int QueryOperand ;
typedef TYPE_3__ ExecPhraseData ;


 scalar_t__* FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(void *VAR_0, QueryOperand *VAR_1, ExecPhraseData *VAR_2)
{
 int VAR_3;
 hlCheck *VAR_4 = (hlCheck *) VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_4->len; VAR_3++)
 {
  if (VAR_4->words[VAR_3].item == VAR_1)
  {

   if (!VAR_2)
    return 1;

   if (!VAR_2->pos)
   {
    VAR_2->pos = FUNC_0(sizeof(WordEntryPos) * VAR_4->len);
    VAR_2->allocated = 1;
    VAR_2->npos = 1;
    VAR_2->pos[0] = VAR_4->words[VAR_3].pos;
   }
   else if (VAR_2->pos[VAR_2->npos - 1] < VAR_4->words[VAR_3].pos)
   {
    VAR_2->pos[VAR_2->npos++] = VAR_4->words[VAR_3].pos;
   }
  }
 }

 if (VAR_2 && VAR_2->npos > 0)
  return 1;

 return 0;
}
