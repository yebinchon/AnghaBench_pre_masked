
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pipe_fd_read; int lock; int * thread; } ;
typedef TYPE_1__ location_geoclue2_state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(location_geoclue2_state_t *VAR_0)
{
 if (VAR_0->pipe_fd_read != -1) {
  FUNC_0(VAR_0->pipe_fd_read);
 }


 FUNC_3(VAR_0->thread);
 VAR_0->thread = ((void*)0);

 FUNC_2(&VAR_0->lock);

 FUNC_1(VAR_0);
}
