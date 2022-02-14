
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ newitemoff; TYPE_1__* splits; int nsplits; int interval; } ;
struct TYPE_6__ {scalar_t__ firstoldonright; scalar_t__ newitemonleft; } ;
typedef TYPE_1__ SplitPoint ;
typedef TYPE_2__ FindSplitData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(FindSplitData *VAR_0, SplitPoint **VAR_1,
       SplitPoint **VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0->interval, VAR_0->nsplits);
 SplitPoint *VAR_4;

 VAR_4 = VAR_0->splits;
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);






 for (int VAR_5 = VAR_3 - 1; VAR_5 >= 0; VAR_5--)
 {
  SplitPoint *VAR_6 = VAR_0->splits + VAR_5;

  if (VAR_6->firstoldonright < VAR_4->firstoldonright)
  {
   if (*VAR_1 == ((void*)0))
    *VAR_1 = VAR_6;
  }
  else if (VAR_6->firstoldonright > VAR_4->firstoldonright)
  {
   if (*VAR_2 == ((void*)0))
    *VAR_2 = VAR_6;
  }
  else if (!VAR_6->newitemonleft && VAR_4->newitemonleft)
  {





   FUNC_0(VAR_6->firstoldonright == VAR_0->newitemoff);
   if (*VAR_1 == ((void*)0))
    *VAR_1 = VAR_6;
  }
  else if (VAR_6->newitemonleft && !VAR_4->newitemonleft)
  {





   FUNC_0(VAR_6->firstoldonright == VAR_0->newitemoff);
   if (*VAR_2 == ((void*)0))
    *VAR_2 = VAR_6;
  }
  else
  {

   FUNC_0(VAR_6 == VAR_4);
   if (*VAR_1 == ((void*)0))
    *VAR_1 = VAR_6;
   if (*VAR_2 == ((void*)0))
    *VAR_2 = VAR_6;
  }

  if (*VAR_1 && *VAR_2)
   return;
 }

 FUNC_0(0);
}
