
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WordEntryPos ;
struct TYPE_11__ {int len; scalar_t__ pos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_14__ {scalar_t__ values; scalar_t__ operand; TYPE_1__* arre; TYPE_1__* arrb; } ;
struct TYPE_13__ {int npos; int allocated; int * pos; } ;
struct TYPE_12__ {int length; scalar_t__ distance; scalar_t__ prefix; } ;
typedef TYPE_2__ QueryOperand ;
typedef TYPE_3__ ExecPhraseData ;
typedef TYPE_4__ CHKVAL ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*,TYPE_2__*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int,int,int ) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__,int ,int) ;

__attribute__((used)) static bool
FUNC_7(void *VAR_1, QueryOperand *VAR_2, ExecPhraseData *VAR_3)
{
 CHKVAL *VAR_4 = (CHKVAL *) VAR_1;
 WordEntry *VAR_5 = VAR_4->arrb;
 WordEntry *VAR_6 = VAR_4->arre;
 WordEntry *VAR_7 = VAR_6;
 int VAR_8 = -1;
 bool VAR_9 = 0;


 while (VAR_5 < VAR_6)
 {
  VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;
  VAR_8 = FUNC_6(VAR_4->operand + VAR_2->distance,
          VAR_2->length,
          VAR_4->values + VAR_7->pos,
          VAR_7->len,
          0);

  if (VAR_8 == 0)
  {

   VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_2, VAR_3);
   break;
  }
  else if (VAR_8 > 0)
   VAR_5 = VAR_7 + 1;
  else
   VAR_6 = VAR_7;
 }

 if ((!VAR_9 || VAR_3) && VAR_2->prefix)
 {
  WordEntryPos *VAR_10 = ((void*)0);
  int VAR_11 = 0,
     VAR_12 = 0;





  if (VAR_5 >= VAR_6)
   VAR_7 = VAR_6;

  while ((!VAR_9 || VAR_3) && VAR_7 < VAR_4->arre &&
      FUNC_6(VAR_4->operand + VAR_2->distance,
          VAR_2->length,
          VAR_4->values + VAR_7->pos,
          VAR_7->len,
          1) == 0)
  {
   if (VAR_3)
   {



    VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_2, VAR_3);

    if (VAR_9)
    {
     while (VAR_11 + VAR_3->npos >= VAR_12)
     {
      if (VAR_12 == 0)
      {
       VAR_12 = 256;
       VAR_10 = FUNC_2(sizeof(WordEntryPos) * VAR_12);
      }
      else
      {
       VAR_12 *= 2;
       VAR_10 = FUNC_5(VAR_10, sizeof(WordEntryPos) * VAR_12);
      }
     }

     FUNC_1(VAR_10 + VAR_11, VAR_3->pos, sizeof(WordEntryPos) * VAR_3->npos);
     VAR_11 += VAR_3->npos;
    }
   }
   else
   {
    VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_2, ((void*)0));
   }

   VAR_7++;
  }

  if (VAR_9 && VAR_3)
  {

   VAR_3->pos = VAR_10;
   FUNC_3(VAR_3->pos, VAR_11, sizeof(WordEntryPos), VAR_0);
   VAR_3->npos = FUNC_4(VAR_3->pos, VAR_11, sizeof(WordEntryPos),
         VAR_0);
   VAR_3->allocated = 1;
  }
 }

 return VAR_9;
}
