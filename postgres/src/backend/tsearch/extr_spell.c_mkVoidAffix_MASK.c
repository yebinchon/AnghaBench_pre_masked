
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_9__ {scalar_t__ replen; } ;
struct TYPE_8__ {int length; int isvoid; TYPE_1__* data; } ;
struct TYPE_7__ {int naffixes; TYPE_4__* Affix; TYPE_3__* Prefix; TYPE_3__* Suffix; } ;
struct TYPE_6__ {TYPE_4__** aff; scalar_t__ naff; TYPE_3__* node; } ;
typedef TYPE_2__ IspellDict ;
typedef int AffixNodeData ;
typedef TYPE_3__ AffixNode ;
typedef TYPE_4__ AFFIX ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(IspellDict *VAR_1, bool VAR_2, int VAR_3)
{
 int VAR_4,
    VAR_5 = 0;
 int VAR_6 = (VAR_2) ? VAR_3 : 0;
 int VAR_7 = (VAR_2) ? VAR_1->naffixes : VAR_3;
 AffixNode *VAR_8 = (AffixNode *) FUNC_1(VAR_0 + sizeof(AffixNodeData));

 VAR_8->length = 1;
 VAR_8->isvoid = 1;

 if (VAR_2)
 {
  VAR_8->data->node = VAR_1->Suffix;
  VAR_1->Suffix = VAR_8;
 }
 else
 {
  VAR_8->data->node = VAR_1->Prefix;
  VAR_1->Prefix = VAR_8;
 }


 for (VAR_4 = VAR_6; VAR_4 < VAR_7; VAR_4++)
  if (VAR_1->Affix[VAR_4].replen == 0)
   VAR_5++;


 if (VAR_5 == 0)
  return;

 VAR_8->data->aff = (AFFIX **) FUNC_0(sizeof(AFFIX *) * VAR_5);
 VAR_8->data->naff = (uint32) VAR_5;

 VAR_5 = 0;
 for (VAR_4 = VAR_6; VAR_4 < VAR_7; VAR_4++)
  if (VAR_1->Affix[VAR_4].replen == 0)
  {
   VAR_8->data->aff[VAR_5] = VAR_1->Affix + VAR_4;
   VAR_5++;
  }
}
