
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_16__ {int npos; scalar_t__* pos; } ;
typedef TYPE_1__ WordEntryPosVector1 ;
struct TYPE_17__ {int npos; int * pos; } ;
typedef TYPE_2__ WordEntryPosVector ;
typedef int WordEntryPos ;
struct TYPE_18__ {scalar_t__ haspos; } ;
typedef TYPE_3__ WordEntry ;
struct TYPE_19__ {int size; } ;
typedef int TSVector ;
typedef TYPE_4__* TSQuery ;
typedef TYPE_2__ QueryOperand ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__** FUNC_1 (TYPE_4__*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int) ;
 TYPE_2__* FUNC_4 (int ,TYPE_3__*) ;
 float FUNC_5 (float const*,int ,TYPE_4__*) ;
 TYPE_3__* FUNC_6 (int ,TYPE_4__*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__**) ;
 float FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static float
FUNC_12(const float *VAR_1, TSVector VAR_2, TSQuery VAR_3)
{
 WordEntryPosVector **VAR_4;
 WordEntryPosVector1 VAR_5;
 WordEntryPosVector *VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9,
    VAR_10;
 WordEntry *VAR_11,
      *VAR_12;
 WordEntryPos *VAR_13,
      *VAR_14;
 int32 VAR_15,
    VAR_16,
    VAR_17,
    VAR_18;
 float VAR_19 = -1.0;
 QueryOperand **VAR_20;
 int VAR_21 = VAR_3->size;

 VAR_20 = FUNC_1(VAR_3, &VAR_21);
 if (VAR_21 < 2)
 {
  FUNC_8(VAR_20);
  return FUNC_5(VAR_1, VAR_2, VAR_3);
 }
 VAR_4 = (WordEntryPosVector **) FUNC_7(sizeof(WordEntryPosVector *) * VAR_3->size);


 VAR_5.npos = 1;
 VAR_5.pos[0] = 0;
 FUNC_3(VAR_5.pos[0], VAR_0 - 1);
 VAR_6 = (WordEntryPosVector *) &VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_21; VAR_7++)
 {
  VAR_12 = VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_20[VAR_7], &VAR_18);
  if (!VAR_11)
   continue;

  while (VAR_11 - VAR_12 < VAR_18)
  {
   if (VAR_11->haspos)
    VAR_4[VAR_7] = FUNC_4(VAR_2, VAR_11);
   else
    VAR_4[VAR_7] = VAR_6;

   VAR_15 = VAR_4[VAR_7]->npos;
   VAR_13 = VAR_4[VAR_7]->pos;
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   {
    if (!VAR_4[VAR_8])
     continue;
    VAR_16 = VAR_4[VAR_8]->npos;
    VAR_14 = VAR_4[VAR_8]->pos;
    for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
    {
     for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++)
     {
      VAR_17 = FUNC_0((int) FUNC_2(VAR_13[VAR_9]) - (int) FUNC_2(VAR_14[VAR_10]));
      if (VAR_17 || (VAR_17 == 0 && (VAR_4[VAR_7] == VAR_6 || VAR_4[VAR_8] == VAR_6)))
      {
       float VAR_22;

       if (!VAR_17)
        VAR_17 = VAR_0;
       VAR_22 = FUNC_9(FUNC_11(VAR_13[VAR_9]) * FUNC_11(VAR_14[VAR_10]) * FUNC_10(VAR_17));
       VAR_19 = (VAR_19 < 0) ? VAR_22 : 1.0 - (1.0 - VAR_19) * (1.0 - VAR_22);
      }
     }
    }
   }

   VAR_11++;
  }
 }
 FUNC_8(VAR_4);
 FUNC_8(VAR_20);
 return VAR_19;
}
