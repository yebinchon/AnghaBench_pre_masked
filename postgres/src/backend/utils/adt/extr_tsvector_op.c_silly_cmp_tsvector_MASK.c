
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WordEntryPos ;
struct TYPE_13__ {scalar_t__ haspos; int len; scalar_t__ pos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_2__* TSVector ;


 TYPE_1__* FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__*) ;
 int * FUNC_2 (TYPE_2__* const,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__* const) ;
 scalar_t__ FUNC_4 (TYPE_2__* const) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_8(const TSVector VAR_0, const TSVector VAR_1)
{
 if (FUNC_4(VAR_0) < FUNC_4(VAR_1))
  return -1;
 else if (FUNC_4(VAR_0) > FUNC_4(VAR_1))
  return 1;
 else if (VAR_0->size < VAR_1->size)
  return -1;
 else if (VAR_0->size > VAR_1->size)
  return 1;
 else
 {
  WordEntry *VAR_2 = FUNC_0(VAR_0);
  WordEntry *VAR_3 = FUNC_0(VAR_1);
  int VAR_4 = 0;
  int VAR_5;


  for (VAR_4 = 0; VAR_4 < VAR_0->size; VAR_4++)
  {
   if (VAR_2->haspos != VAR_3->haspos)
   {
    return (VAR_2->haspos > VAR_3->haspos) ? -1 : 1;
   }
   else if ((VAR_5 = FUNC_7(FUNC_3(VAR_0) + VAR_2->pos, VAR_2->len, FUNC_3(VAR_1) + VAR_3->pos, VAR_3->len, 0)) != 0)
   {
    return VAR_5;
   }
   else if (VAR_2->haspos)
   {
    WordEntryPos *VAR_6 = FUNC_2(VAR_0, VAR_2);
    WordEntryPos *VAR_7 = FUNC_2(VAR_1, VAR_3);
    int VAR_8;

    if (FUNC_1(VAR_0, VAR_2) != FUNC_1(VAR_1, VAR_3))
     return (FUNC_1(VAR_0, VAR_2) > FUNC_1(VAR_1, VAR_3)) ? -1 : 1;

    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_0, VAR_2); VAR_8++)
    {
     if (FUNC_5(*VAR_6) != FUNC_5(*VAR_7))
     {
      return (FUNC_5(*VAR_6) > FUNC_5(*VAR_7)) ? -1 : 1;
     }
     else if (FUNC_6(*VAR_6) != FUNC_6(*VAR_7))
     {
      return (FUNC_6(*VAR_6) > FUNC_6(*VAR_7)) ? -1 : 1;
     }
     VAR_6++, VAR_7++;
    }
   }

   VAR_2++;
   VAR_3++;
  }
 }

 return 0;
}
