
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__ const* next; struct TYPE_4__ const* prev; } ;
typedef TYPE_1__ SHM_QUEUE ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;

bool
FUNC_2(const SHM_QUEUE *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));

 if (VAR_0->prev == VAR_0)
 {
  FUNC_0(VAR_0->next == VAR_0);
  return 1;
 }
 return 0;
}
