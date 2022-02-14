
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pid_persist; } ;
struct TYPE_3__ {int timeval; int packet_id_persist_interval; } ;
struct context {TYPE_2__ c1; TYPE_1__ c2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct context *VAR_1)
{
    if (FUNC_1(&VAR_1->c1.pid_persist)
        && FUNC_0(&VAR_1->c2.packet_id_persist_interval, &VAR_1->c2.timeval, VAR_0))
    {
        FUNC_2(&VAR_1->c1.pid_persist);
    }
}
