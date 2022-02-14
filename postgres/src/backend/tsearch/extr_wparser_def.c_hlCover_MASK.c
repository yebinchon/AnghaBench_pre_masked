
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int len; TYPE_1__* words; } ;
typedef TYPE_2__ hlCheck ;
struct TYPE_16__ {int curwords; TYPE_1__* words; } ;
struct TYPE_15__ {scalar_t__ type; int qoperand; } ;
struct TYPE_14__ {int size; } ;
struct TYPE_12__ {int * item; } ;
typedef TYPE_3__* TSQuery ;
typedef TYPE_4__ QueryItem ;
typedef TYPE_5__ HeadlineParsedText ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_2__*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_2(HeadlineParsedText *VAR_4, TSQuery VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8,
    VAR_9;
 QueryItem *VAR_10 = FUNC_0(VAR_5);
 int VAR_11 = *VAR_6;

 *VAR_7 = -1;
 *VAR_6 = VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_5->size; VAR_9++)
 {
  if (VAR_10->type != VAR_1)
  {
   VAR_10++;
   continue;
  }
  for (VAR_8 = VAR_11; VAR_8 < VAR_4->curwords; VAR_8++)
  {
   if (VAR_4->words[VAR_8].item == &VAR_10->qoperand)
   {
    if (VAR_8 > *VAR_7)
     *VAR_7 = VAR_8;
    break;
   }
  }
  VAR_10++;
 }

 if (*VAR_7 < 0)
  return 0;

 VAR_10 = FUNC_0(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_5->size; VAR_9++)
 {
  if (VAR_10->type != VAR_1)
  {
   VAR_10++;
   continue;
  }
  for (VAR_8 = *VAR_7; VAR_8 >= VAR_11; VAR_8--)
  {
   if (VAR_4->words[VAR_8].item == &VAR_10->qoperand)
   {
    if (VAR_8 < *VAR_6)
     *VAR_6 = VAR_8;
    break;
   }
  }
  VAR_10++;
 }

 if (*VAR_6 <= *VAR_7)
 {
  hlCheck VAR_12;

  VAR_12.words = &(VAR_4->words[*VAR_6]);
  VAR_12.len = *VAR_7 - *VAR_6 + 1;
  if (FUNC_1(FUNC_0(VAR_5), &VAR_12, VAR_2, VAR_3))
   return 1;
  else
  {
   (*VAR_6)++;
   return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
  }
 }

 return 0;
}
