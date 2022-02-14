
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * tail; TYPE_2__* head; } ;
struct TYPE_9__ {TYPE_1__ waste; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ ParsedLex ;
typedef TYPE_3__ LexizeData ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(LexizeData *VAR_0, ParsedLex **VAR_1)
{
 if (VAR_1)
 {
  *VAR_1 = VAR_0->waste.head;
 }
 else
 {
  ParsedLex *VAR_2,
       *VAR_3 = VAR_0->waste.head;

  while (VAR_3)
  {
   VAR_2 = VAR_3->next;
   FUNC_0(VAR_3);
   VAR_3 = VAR_2;
  }
 }
 VAR_0->waste.head = VAR_0->waste.tail = ((void*)0);
}
