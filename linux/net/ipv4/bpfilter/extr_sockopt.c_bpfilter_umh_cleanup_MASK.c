
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umh_info {scalar_t__ pid; int pipe_from_umh; int pipe_to_umh; } ;
struct TYPE_2__ {int stop; int lock; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct umh_info *VAR_1)
{
 FUNC_1(&VAR_0.lock);
 VAR_0.stop = 1;
 FUNC_0(VAR_1->pipe_to_umh);
 FUNC_0(VAR_1->pipe_from_umh);
 VAR_1->pid = 0;
 FUNC_2(&VAR_0.lock);
}
