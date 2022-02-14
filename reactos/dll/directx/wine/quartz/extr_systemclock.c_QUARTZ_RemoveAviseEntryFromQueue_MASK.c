
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* prev; } ;
struct TYPE_7__ {TYPE_3__* pPeriodicAdvise; TYPE_3__* pSingleShotAdvise; } ;
struct TYPE_6__ {TYPE_3__* next; } ;
typedef TYPE_2__ SystemClockImpl ;
typedef TYPE_3__ SystemClockAdviseEntry ;



__attribute__((used)) static void FUNC_0(SystemClockImpl* VAR_0, SystemClockAdviseEntry* VAR_1) {
  if (VAR_1->prev) VAR_1->prev->next = VAR_1->next;
  if (VAR_1->next) VAR_1->next->prev = VAR_1->prev;
  if (VAR_0->pSingleShotAdvise == VAR_1) VAR_0->pSingleShotAdvise = VAR_1->next;
  if (VAR_0->pPeriodicAdvise == VAR_1) VAR_0->pPeriodicAdvise = VAR_1->next;
}
