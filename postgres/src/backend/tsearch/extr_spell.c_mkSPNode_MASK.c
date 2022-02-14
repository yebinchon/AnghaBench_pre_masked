
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_16__ {TYPE_3__** Spell; } ;
struct TYPE_15__ {int length; TYPE_4__* data; } ;
struct TYPE_14__ {int isword; scalar_t__ affix; int compoundflag; TYPE_5__* node; int val; } ;
struct TYPE_11__ {int len; scalar_t__ affix; } ;
struct TYPE_12__ {TYPE_1__ d; } ;
struct TYPE_13__ {char* word; TYPE_2__ p; } ;
typedef TYPE_4__ SPNodeData ;
typedef TYPE_5__ SPNode ;
typedef TYPE_6__ IspellDict ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_6__*,scalar_t__) ;

__attribute__((used)) static SPNode *
FUNC_3(IspellDict *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 char VAR_9 = '\0';
 SPNode *VAR_10;
 SPNodeData *VAR_11;
 int VAR_12 = VAR_4;

 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++)
  if (VAR_3->Spell[VAR_7]->p.d.len > VAR_6 && VAR_9 != VAR_3->Spell[VAR_7]->word[VAR_6])
  {
   VAR_8++;
   VAR_9 = VAR_3->Spell[VAR_7]->word[VAR_6];
  }

 if (!VAR_8)
  return ((void*)0);

 VAR_10 = (SPNode *) FUNC_1(VAR_2 + VAR_8 * sizeof(SPNodeData));
 VAR_10->length = VAR_8;
 VAR_11 = VAR_10->data;

 VAR_9 = '\0';
 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++)
  if (VAR_3->Spell[VAR_7]->p.d.len > VAR_6)
  {
   if (VAR_9 != VAR_3->Spell[VAR_7]->word[VAR_6])
   {
    if (VAR_9)
    {

     VAR_11->node = FUNC_3(VAR_3, VAR_12, VAR_7, VAR_6 + 1);
     VAR_12 = VAR_7;
     VAR_11++;
    }
    VAR_9 = VAR_3->Spell[VAR_7]->word[VAR_6];
   }
   VAR_11->val = ((uint8 *) (VAR_3->Spell[VAR_7]->word))[VAR_6];
   if (VAR_3->Spell[VAR_7]->p.d.len == VAR_6 + 1)
   {
    bool VAR_13 = 0;

    if (VAR_11->isword && VAR_11->affix != VAR_3->Spell[VAR_7]->p.d.affix)
    {






     VAR_13 = (VAR_1 & VAR_11->compoundflag
           & FUNC_2(VAR_3, VAR_3->Spell[VAR_7]->p.d.affix))
      ? 0 : 1;
     VAR_11->affix = FUNC_0(VAR_3, VAR_11->affix, VAR_3->Spell[VAR_7]->p.d.affix);
    }
    else
     VAR_11->affix = VAR_3->Spell[VAR_7]->p.d.affix;
    VAR_11->isword = 1;

    VAR_11->compoundflag = FUNC_2(VAR_3, VAR_11->affix);

    if ((VAR_11->compoundflag & VAR_1) &&
     (VAR_11->compoundflag & VAR_0) == 0)
     VAR_11->compoundflag |= VAR_0;

    if (VAR_13)
     VAR_11->compoundflag &= ~VAR_1;
   }
  }


 VAR_11->node = FUNC_3(VAR_3, VAR_12, VAR_5, VAR_6 + 1);

 return VAR_10;
}
