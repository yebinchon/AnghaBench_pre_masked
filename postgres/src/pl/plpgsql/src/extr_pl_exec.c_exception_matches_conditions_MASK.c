
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sqlerrcode; } ;
struct TYPE_5__ {int sqlerrstate; struct TYPE_5__* next; } ;
typedef TYPE_1__ PLpgSQL_condition ;
typedef TYPE_2__ ErrorData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(ErrorData *VAR_2, PLpgSQL_condition *VAR_3)
{
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 {
  int VAR_4 = VAR_3->sqlerrstate;






  if (VAR_4 == 0)
  {
   if (VAR_2->sqlerrcode != VAR_1 &&
    VAR_2->sqlerrcode != VAR_0)
    return 1;
  }

  else if (VAR_2->sqlerrcode == VAR_4)
   return 1;

  else if (FUNC_0(VAR_4) &&
     FUNC_1(VAR_2->sqlerrcode) == VAR_4)
   return 1;
 }
 return 0;
}
