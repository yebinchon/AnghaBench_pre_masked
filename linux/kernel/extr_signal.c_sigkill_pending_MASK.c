
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int signal; } ;
struct task_struct {TYPE_3__* signal; TYPE_1__ pending; } ;
struct TYPE_5__ {int signal; } ;
struct TYPE_6__ {TYPE_2__ shared_pending; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct task_struct *VAR_1)
{
 return FUNC_0(&VAR_1->pending.signal, VAR_0) ||
        FUNC_0(&VAR_1->signal->shared_pending.signal, VAR_0);
}
