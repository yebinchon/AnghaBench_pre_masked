
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WordEntryPos ;
struct TYPE_5__ {int npos; int* pos; int allocated; } ;
typedef TYPE_1__ ExecPhraseData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool
FUNC_3(ExecPhraseData *VAR_4,
     ExecPhraseData *VAR_5,
     ExecPhraseData *VAR_6,
     int VAR_7,
     int VAR_8,
     int VAR_9,
     int VAR_10)
{
 int VAR_11,
    VAR_12;


 VAR_11 = VAR_12 = 0;
 while (VAR_11 < VAR_5->npos || VAR_12 < VAR_6->npos)
 {
  int VAR_13,
     VAR_14;
  int VAR_15 = 0;





  if (VAR_11 < VAR_5->npos)
   VAR_13 = FUNC_1(VAR_5->pos[VAR_11]) + VAR_8;
  else
  {

   if (!(VAR_7 & VAR_3))
    break;
   VAR_13 = VAR_0;
  }
  if (VAR_12 < VAR_6->npos)
   VAR_14 = FUNC_1(VAR_6->pos[VAR_12]) + VAR_9;
  else
  {

   if (!(VAR_7 & VAR_2))
    break;
   VAR_14 = VAR_0;
  }


  if (VAR_13 < VAR_14)
  {

   if (VAR_7 & VAR_2)
    VAR_15 = VAR_13;
   VAR_11++;
  }
  else if (VAR_13 == VAR_14)
  {

   if (VAR_7 & VAR_1)
    VAR_15 = VAR_14;
   VAR_11++;
   VAR_12++;
  }
  else
  {

   if (VAR_7 & VAR_3)
    VAR_15 = VAR_14;
   VAR_12++;
  }

  if (VAR_15 > 0)
  {
   if (VAR_4)
   {

    if (VAR_4->pos == ((void*)0))
    {
     VAR_4->pos = (WordEntryPos *)
      FUNC_2(VAR_10 * sizeof(WordEntryPos));
     VAR_4->allocated = 1;
    }
    VAR_4->pos[VAR_4->npos++] = VAR_15;
   }
   else
   {




    return 1;
   }
  }
 }

 if (VAR_4 && VAR_4->npos > 0)
 {

  FUNC_0(VAR_4->npos <= VAR_10);
  return 1;
 }
 return 0;
}
