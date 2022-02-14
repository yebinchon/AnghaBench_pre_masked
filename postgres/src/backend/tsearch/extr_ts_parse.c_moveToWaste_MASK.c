
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* head; } ;
struct TYPE_9__ {int curSub; TYPE_1__ towork; } ;
struct TYPE_8__ {int next; } ;
typedef TYPE_2__ ParsedLex ;
typedef TYPE_3__ LexizeData ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(LexizeData *VAR_0, ParsedLex *VAR_1)
{
 bool VAR_2 = 1;

 while (VAR_0->towork.head && VAR_2)
 {
  if (VAR_0->towork.head == VAR_1)
  {
   VAR_0->curSub = VAR_1->next;
   VAR_2 = 0;
  }
  FUNC_0(VAR_0);
 }
}
