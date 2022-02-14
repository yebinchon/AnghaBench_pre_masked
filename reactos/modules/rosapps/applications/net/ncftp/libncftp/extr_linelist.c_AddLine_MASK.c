
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nLines; TYPE_1__* last; TYPE_1__* first; } ;
struct TYPE_6__ {char* line; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef int Line ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

LinePtr
FUNC_3(LineListPtr VAR_0, const char *VAR_1)
{
 LinePtr VAR_2;
 char *VAR_3;

 VAR_2 = (LinePtr) FUNC_2(sizeof(Line));
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 == ((void*)0)) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
  } else {
   VAR_2->line = VAR_3;
   VAR_2->next = ((void*)0);
   if (VAR_0->first == ((void*)0)) {
    VAR_0->first = VAR_0->last = VAR_2;
    VAR_2->prev = ((void*)0);
    VAR_0->nLines = 1;
   } else {
    VAR_2->prev = VAR_0->last;
    VAR_0->last->next = VAR_2;
    VAR_0->last = VAR_2;
    VAR_0->nLines++;
   }
  }
 }
 return VAR_2;
}
