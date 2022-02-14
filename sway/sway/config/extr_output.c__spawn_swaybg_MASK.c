
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wayland_socket_str ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {int notify; } ;
struct TYPE_6__ {TYPE_1__ swaybg_client_destroy; int * swaybg_client; } ;
struct TYPE_5__ {int wl_display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (char*,char**) ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int *,int ) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(char **VAR_8) {
 if (VAR_5->swaybg_client != ((void*)0)) {
  FUNC_12(VAR_5->swaybg_client);
 }
 int VAR_9[2];
 if (FUNC_6(VAR_0, VAR_3, 0, VAR_9) != 0) {
  FUNC_7(VAR_4, "socketpair failed");
  return 0;
 }
 if (!FUNC_8(VAR_9[0], 1) || !FUNC_8(VAR_9[1], 1)) {
  return 0;
 }

 VAR_5->swaybg_client = FUNC_11(VAR_7.wl_display, VAR_9[0]);
 if (VAR_5->swaybg_client == ((void*)0)) {
  FUNC_7(VAR_4, "wl_client_create failed");
  return 0;
 }

 VAR_5->swaybg_client_destroy.notify = VAR_6;
 FUNC_10(VAR_5->swaybg_client,
  &VAR_5->swaybg_client_destroy);

 pid_t VAR_10 = FUNC_3();
 if (VAR_10 < 0) {
  FUNC_7(VAR_4, "fork failed");
  return 0;
 } else if (VAR_10 == 0) {
  VAR_10 = FUNC_3();
  if (VAR_10 < 0) {
   FUNC_7(VAR_4, "fork failed");
   FUNC_0(VAR_1);
  } else if (VAR_10 == 0) {
   if (!FUNC_8(VAR_9[1], 0)) {
    FUNC_0(VAR_1);
   }

   char VAR_11[16];
   FUNC_5(VAR_11, sizeof(VAR_11),
    "%d", VAR_9[1]);
   FUNC_4("WAYLAND_SOCKET", VAR_11, 1);

   FUNC_2(VAR_8[0], VAR_8);
   FUNC_7(VAR_4, "execvp failed");
   FUNC_0(VAR_1);
  }
  FUNC_0(VAR_2);
 }

 if (FUNC_1(VAR_9[1]) != 0) {
  FUNC_7(VAR_4, "close failed");
  return 0;
 }
 if (FUNC_9(VAR_10, ((void*)0), 0) < 0) {
  FUNC_7(VAR_4, "waitpid failed");
  return 0;
 }

 return 1;
}
