
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_server {int wl_event_loop; int wl_display; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {scalar_t__* sun_path; } ;
struct TYPE_5__ {int notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,int ) ;
 int * FUNC_4 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,scalar_t__*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__*,int *,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int,int ,int ,struct sway_server*) ;

void FUNC_14(struct sway_server *VAR_15) {
 VAR_14 = FUNC_8(VAR_0, VAR_6, 0);
 if (VAR_14 == -1) {
  FUNC_10("Unable to create IPC socket");
 }
 if (FUNC_3(VAR_14, VAR_3, VAR_1) == -1) {
  FUNC_10("Unable to set CLOEXEC on IPC socket");
 }
 if (FUNC_3(VAR_14, VAR_4, VAR_5) == -1) {
  FUNC_10("Unable to set NONBLOCK on IPC socket");
 }

 VAR_13 = FUNC_5();


 if (FUNC_4("SWAYSOCK") != ((void*)0) && FUNC_0(FUNC_4("SWAYSOCK"), VAR_2) == -1) {
  FUNC_9(VAR_13->sun_path, FUNC_4("SWAYSOCK"), sizeof(VAR_13->sun_path) - 1);
  VAR_13->sun_path[sizeof(VAR_13->sun_path) - 1] = 0;
 }

 FUNC_11(VAR_13->sun_path);
 if (FUNC_1(VAR_14, (struct sockaddr *)VAR_13, sizeof(*VAR_13)) == -1) {
  FUNC_10("Unable to bind IPC socket");
 }

 if (FUNC_6(VAR_14, 3) == -1) {
  FUNC_10("Unable to listen on IPC socket");
 }


 FUNC_7("I3SOCK", VAR_13->sun_path, 1);
 FUNC_7("SWAYSOCK", VAR_13->sun_path, 1);

 VAR_9 = FUNC_2();

 VAR_10.notify = VAR_8;
 FUNC_12(VAR_15->wl_display, &VAR_10);

 VAR_11 = FUNC_13(VAR_15->wl_event_loop, VAR_14,
   VAR_7, VAR_12, VAR_15);
}
