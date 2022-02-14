
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int pipe_fd_write; int lock; } ;
typedef TYPE_1__ location_geoclue2_state_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(location_geoclue2_state_t *VAR_0)
{
 FUNC_0(&VAR_0->lock);

 VAR_0->error = 1;

 FUNC_1(&VAR_0->lock);

 FUNC_2(VAR_0->pipe_fd_write);
}
