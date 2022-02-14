
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rtBaseTime; scalar_t__ rtIntervalTime; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef int SystemClockImpl ;
typedef TYPE_1__ SystemClockAdviseEntry ;
typedef scalar_t__ REFERENCE_TIME ;



__attribute__((used)) static void FUNC_0(SystemClockImpl* VAR_0, SystemClockAdviseEntry* VAR_1, SystemClockAdviseEntry** VAR_2) {
  SystemClockAdviseEntry* VAR_3 = ((void*)0);
  SystemClockAdviseEntry* VAR_4 = ((void*)0);
  REFERENCE_TIME VAR_5 = VAR_1->rtBaseTime + VAR_1->rtIntervalTime;

  for (VAR_4 = *VAR_2; ((void*)0) != VAR_4 && (VAR_4->rtBaseTime + VAR_4->rtIntervalTime) < VAR_5; VAR_4 = VAR_4->next) {
    VAR_3 = VAR_4;
  }
  if (((void*)0) == VAR_3) {
    VAR_1->prev = ((void*)0);
    if (((void*)0) != (*VAR_2)) VAR_1->next = (*VAR_2)->next;

    if (((void*)0) != VAR_1->next) VAR_1->next->prev = VAR_1;
    (*VAR_2) = VAR_1;
  } else {
    VAR_1->prev = VAR_3;
    VAR_1->next = VAR_3->next;
    VAR_3->next = VAR_1;
    if (((void*)0) != VAR_1->next) VAR_1->next->prev = VAR_1;
  }
}
