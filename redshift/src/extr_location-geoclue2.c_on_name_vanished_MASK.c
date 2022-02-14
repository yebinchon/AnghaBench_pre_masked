
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pipe_fd_write; int lock; scalar_t__ available; } ;
typedef TYPE_1__ location_geoclue2_state_t ;
typedef TYPE_1__* gpointer ;
typedef int gchar ;
typedef int GDBusConnection ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(GDBusConnection *VAR_0, const gchar *VAR_1,
   gpointer VAR_2)
{
 location_geoclue2_state_t *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->lock);

 VAR_3->available = 0;

 FUNC_1(&VAR_3->lock);

 FUNC_2(VAR_3->pipe_fd_write);
}
