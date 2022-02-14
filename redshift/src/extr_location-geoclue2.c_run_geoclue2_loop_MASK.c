
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int loop; int pipe_fd_write; } ;
typedef TYPE_1__ location_geoclue2_state_t ;
typedef int guint ;
typedef int GSourceFunc ;
typedef int GSource ;
typedef int GMainContext ;
typedef int GIOChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,TYPE_1__*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ,TYPE_1__*,int *) ;
 int FUNC_14 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void *
FUNC_15(void *VAR_9)
{
 location_geoclue2_state_t *VAR_10 = VAR_9;

 GMainContext *VAR_11 = FUNC_6();
 FUNC_7(VAR_11);
 VAR_10->loop = FUNC_9(VAR_11, VAR_0);

 guint VAR_12 = FUNC_2(
  VAR_2,
  "org.freedesktop.GeoClue2",
  VAR_1,
  VAR_6,
  VAR_7,
  VAR_10, ((void*)0));


 GIOChannel *VAR_13 = FUNC_3(VAR_10->pipe_fd_write);
 GSource *VAR_14 = FUNC_5(
  VAR_13, VAR_5 | VAR_4 | VAR_3);
        FUNC_13(
  VAR_14, (GSourceFunc)VAR_8, VAR_10, ((void*)0));
        FUNC_12(VAR_14, VAR_11);

 FUNC_10(VAR_10->loop);

 FUNC_14(VAR_14);
 FUNC_4(VAR_13);
 FUNC_0(VAR_10->pipe_fd_write);

 FUNC_1(VAR_12);

 FUNC_11(VAR_10->loop);
 FUNC_8(VAR_11);

 return ((void*)0);
}
