
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid_using_dumpfile; scalar_t__ bgworker_pid; int lock; } ;
typedef int Datum ;


 void* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(int VAR_4, Datum VAR_5)
{
 FUNC_0(&VAR_3->lock, VAR_1);
 if (VAR_3->pid_using_dumpfile == VAR_2)
  VAR_3->pid_using_dumpfile = VAR_0;
 if (VAR_3->bgworker_pid == VAR_2)
  VAR_3->bgworker_pid = VAR_0;
 FUNC_1(&VAR_3->lock);
}
