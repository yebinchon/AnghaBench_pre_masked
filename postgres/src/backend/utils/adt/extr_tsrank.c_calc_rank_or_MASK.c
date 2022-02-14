
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {int npos; scalar_t__* pos; } ;
typedef TYPE_1__ WordEntryPosVector1 ;
typedef scalar_t__ WordEntryPos ;
struct TYPE_11__ {scalar_t__ haspos; } ;
typedef TYPE_2__ WordEntry ;
struct TYPE_12__ {int size; } ;
typedef int TSVector ;
typedef TYPE_3__* TSQuery ;
typedef int QueryOperand ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__* FUNC_1 (int ,TYPE_2__*) ;
 int ** FUNC_2 (TYPE_3__*,int*) ;
 TYPE_2__* FUNC_3 (int ,TYPE_3__*,int *,int*) ;
 int FUNC_4 (int **) ;
 float FUNC_5 (scalar_t__) ;

__attribute__((used)) static float
FUNC_6(const float *VAR_0, TSVector VAR_1, TSQuery VAR_2)
{
 WordEntry *VAR_3,
      *VAR_4;
 WordEntryPosVector1 VAR_5;
 WordEntryPos *VAR_6;
 int32 VAR_7,
    VAR_8,
    VAR_9,
    VAR_10;
 float VAR_11 = 0.0;
 QueryOperand **VAR_12;
 int VAR_13 = VAR_2->size;


 VAR_5.npos = 1;
 VAR_5.pos[0] = 0;

 VAR_12 = FUNC_2(VAR_2, &VAR_13);

 for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
 {
  float VAR_14,
     VAR_15;
  int32 VAR_16;

  VAR_4 = VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_12[VAR_9], &VAR_10);
  if (!VAR_3)
   continue;

  while (VAR_3 - VAR_4 < VAR_10)
  {
   if (VAR_3->haspos)
   {
    VAR_7 = FUNC_0(VAR_1, VAR_3);
    VAR_6 = FUNC_1(VAR_1, VAR_3);
   }
   else
   {
    VAR_7 = VAR_5.npos;
    VAR_6 = VAR_5.pos;
   }

   VAR_14 = 0.0;
   VAR_15 = -1.0;
   VAR_16 = 0;
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   {
    VAR_14 = VAR_14 + FUNC_5(VAR_6[VAR_8]) / ((VAR_8 + 1) * (VAR_8 + 1));
    if (FUNC_5(VAR_6[VAR_8]) > VAR_15)
    {
     VAR_15 = FUNC_5(VAR_6[VAR_8]);
     VAR_16 = VAR_8;
    }
   }







   VAR_11 = VAR_11 + (VAR_15 + VAR_14 - VAR_15 / ((VAR_16 + 1) * (VAR_16 + 1))) / 1.64493406685;

   VAR_3++;
  }
 }
 if (VAR_13 > 0)
  VAR_11 = VAR_11 / VAR_13;
 FUNC_4(VAR_12);
 return VAR_11;
}
