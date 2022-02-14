
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pipe_fd_read; int pipe_fd_write; int thread; int lock; scalar_t__ longitude; scalar_t__ latitude; scalar_t__ error; scalar_t__ available; } ;
typedef TYPE_1__ location_geoclue2_state_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,TYPE_1__*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(location_geoclue2_state_t *VAR_2)
{
 VAR_2->pipe_fd_read = -1;
 VAR_2->pipe_fd_write = -1;

 VAR_2->available = 0;
 VAR_2->error = 0;
 VAR_2->latitude = 0;
 VAR_2->longitude = 0;

 int VAR_3[2];
 int VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(FUNC_0("Failed to start GeoClue2 provider!\n"), VAR_1);
  return -1;
 }

 VAR_2->pipe_fd_read = VAR_3[0];
 VAR_2->pipe_fd_write = VAR_3[1];

 FUNC_5(VAR_2->pipe_fd_write);

 FUNC_2(&VAR_2->lock);
 VAR_2->thread = FUNC_3("geoclue2", VAR_0, VAR_2);

 return 0;
}
