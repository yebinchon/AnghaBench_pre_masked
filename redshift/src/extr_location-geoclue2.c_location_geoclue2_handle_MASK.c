
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lon; int lat; } ;
typedef TYPE_1__ location_t ;
struct TYPE_6__ {int error; int available; int lock; int longitude; int latitude; int pipe_fd_read; } ;
typedef TYPE_2__ location_geoclue2_state_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(
 location_geoclue2_state_t *VAR_0,
 location_t *VAR_1, int *VAR_2)
{
 FUNC_2(VAR_0->pipe_fd_read);

 FUNC_0(&VAR_0->lock);

 int VAR_3 = VAR_0->error;
 VAR_1->lat = VAR_0->latitude;
 VAR_1->lon = VAR_0->longitude;
 *VAR_2 = VAR_0->available;

 FUNC_1(&VAR_0->lock);

 if (VAR_3) return -1;

 return 0;
}
