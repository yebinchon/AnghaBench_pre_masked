
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long expires; int dwork; } ;
struct rpc_wait_queue {TYPE_1__ timer_list; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct rpc_wait_queue *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 VAR_2->timer_list.expires = VAR_3;
 if (FUNC_1(VAR_3, VAR_4))
  VAR_3 = 0;
 else
  VAR_3 -= VAR_4;
 FUNC_0(VAR_1, &VAR_2->timer_list.dwork, VAR_3);
}
