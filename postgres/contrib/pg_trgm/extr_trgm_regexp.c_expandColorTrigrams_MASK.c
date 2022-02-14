
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int bytes; } ;
typedef TYPE_2__ trgm_mb_char ;
typedef int trgm ;
struct TYPE_14__ {int totalTrgmCount; int colorTrgmsCount; TYPE_4__* colorInfo; TYPE_6__* colorTrgms; } ;
typedef TYPE_3__ TrgmNFA ;
struct TYPE_15__ {int wordCharsCount; TYPE_2__* wordChars; } ;
typedef TYPE_4__ TrgmColorInfo ;
struct TYPE_12__ {size_t* colors; } ;
struct TYPE_17__ {TYPE_1__ ctrgm; int expanded; } ;
struct TYPE_16__ {int flag; } ;
typedef TYPE_5__ TRGM ;
typedef int MemoryContext ;
typedef TYPE_6__ ColorTrgmInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 size_t VAR_1 ;
 int * FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static TRGM *
FUNC_6(TrgmNFA *VAR_3, MemoryContext VAR_4)
{
 TRGM *VAR_5;
 trgm *VAR_6;
 int VAR_7;
 TrgmColorInfo VAR_8;
 trgm_mb_char VAR_9;


 FUNC_5(VAR_9.bytes, 0, sizeof(VAR_9.bytes));
 VAR_8.wordCharsCount = 1;
 VAR_8.wordChars = &VAR_9;


 VAR_5 = (TRGM *)
  FUNC_2(VAR_4,
          VAR_2 +
          VAR_3->totalTrgmCount * sizeof(trgm));
 VAR_5->flag = VAR_0;
 FUNC_3(VAR_5, FUNC_0(VAR_0, VAR_3->totalTrgmCount));
 VAR_6 = FUNC_1(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_3->colorTrgmsCount; VAR_7++)
 {
  ColorTrgmInfo *VAR_10 = &VAR_3->colorTrgms[VAR_7];
  TrgmColorInfo *VAR_11[3];
  trgm_mb_char VAR_12[3];
  int VAR_13,
     VAR_14,
     VAR_15,
     VAR_16;


  if (!VAR_10->expanded)
   continue;


  for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
  {
   if (VAR_10->ctrgm.colors[VAR_13] != VAR_1)
    VAR_11[VAR_13] = &VAR_3->colorInfo[VAR_10->ctrgm.colors[VAR_13]];
   else
    VAR_11[VAR_13] = &VAR_8;
  }


  for (VAR_14 = 0; VAR_14 < VAR_11[0]->wordCharsCount; VAR_14++)
  {
   VAR_12[0] = VAR_11[0]->wordChars[VAR_14];
   for (VAR_15 = 0; VAR_15 < VAR_11[1]->wordCharsCount; VAR_15++)
   {
    VAR_12[1] = VAR_11[1]->wordChars[VAR_15];
    for (VAR_16 = 0; VAR_16 < VAR_11[2]->wordCharsCount; VAR_16++)
    {
     VAR_12[2] = VAR_11[2]->wordChars[VAR_16];
     FUNC_4(VAR_6, VAR_12);
     VAR_6++;
    }
   }
  }
 }

 return VAR_5;
}
