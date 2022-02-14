
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8 ;
struct TYPE_14__ {int replen; } ;
struct TYPE_13__ {int length; TYPE_2__* data; } ;
struct TYPE_12__ {int naff; char val; TYPE_4__** aff; TYPE_3__* node; } ;
struct TYPE_11__ {TYPE_4__* Affix; } ;
typedef TYPE_1__ IspellDict ;
typedef TYPE_2__ AffixNodeData ;
typedef TYPE_3__ AffixNode ;
typedef TYPE_4__ AFFIX ;


 scalar_t__ VAR_0 ;
 char FUNC_0 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__**,TYPE_4__**,int) ;
 int FUNC_4 (TYPE_4__**) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static AffixNode *
FUNC_6(IspellDict *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 uint8 VAR_8 = '\0';
 AffixNode *VAR_9;
 AffixNodeData *VAR_10;
 int VAR_11 = VAR_2;
 int VAR_12;
 AFFIX **VAR_13;

 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++)
  if (VAR_1->Affix[VAR_6].replen > VAR_4 && VAR_8 != FUNC_0(VAR_1->Affix + VAR_6, VAR_4, VAR_5))
  {
   VAR_7++;
   VAR_8 = FUNC_0(VAR_1->Affix + VAR_6, VAR_4, VAR_5);
  }

 if (!VAR_7)
  return ((void*)0);

 VAR_13 = (AFFIX **) FUNC_5(sizeof(AFFIX *) * (VAR_3 - VAR_2 + 1));
 VAR_12 = 0;

 VAR_9 = (AffixNode *) FUNC_2(VAR_0 + VAR_7 * sizeof(AffixNodeData));
 VAR_9->length = VAR_7;
 VAR_10 = VAR_9->data;

 VAR_8 = '\0';
 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++)
  if (VAR_1->Affix[VAR_6].replen > VAR_4)
  {
   if (VAR_8 != FUNC_0(VAR_1->Affix + VAR_6, VAR_4, VAR_5))
   {
    if (VAR_8)
    {

     VAR_10->node = FUNC_6(VAR_1, VAR_11, VAR_6, VAR_4 + 1, VAR_5);
     if (VAR_12)
     {
      VAR_10->naff = VAR_12;
      VAR_10->aff = (AFFIX **) FUNC_1(sizeof(AFFIX *) * VAR_12);
      FUNC_3(VAR_10->aff, VAR_13, sizeof(AFFIX *) * VAR_12);
      VAR_12 = 0;
     }
     VAR_10++;
     VAR_11 = VAR_6;
    }
    VAR_8 = FUNC_0(VAR_1->Affix + VAR_6, VAR_4, VAR_5);
   }
   VAR_10->val = FUNC_0(VAR_1->Affix + VAR_6, VAR_4, VAR_5);
   if (VAR_1->Affix[VAR_6].replen == VAR_4 + 1)
   {
    VAR_13[VAR_12++] = VAR_1->Affix + VAR_6;
   }
  }


 VAR_10->node = FUNC_6(VAR_1, VAR_11, VAR_3, VAR_4 + 1, VAR_5);
 if (VAR_12)
 {
  VAR_10->naff = VAR_12;
  VAR_10->aff = (AFFIX **) FUNC_1(sizeof(AFFIX *) * VAR_12);
  FUNC_3(VAR_10->aff, VAR_13, sizeof(AFFIX *) * VAR_12);
  VAR_12 = 0;
 }

 FUNC_4(VAR_13);

 return VAR_9;
}
