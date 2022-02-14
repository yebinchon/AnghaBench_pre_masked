
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct sbq_wait {TYPE_2__* sbq; TYPE_1__ wait; } ;
struct TYPE_4__ {int ws_active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sbq_wait *VAR_0)
{
 FUNC_1(&VAR_0->wait.entry);
 if (VAR_0->sbq) {
  FUNC_0(&VAR_0->sbq->ws_active);
  VAR_0->sbq = ((void*)0);
 }
}
