
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wayland_socket_str ;
struct TYPE_3__ {int notify; } ;
struct bar_config {char* swaybar_command; char* id; TYPE_1__ client_destroy; int * client; } ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {int wl_display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char* const,char* const*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (char*,int,char*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int *,int ) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int * FUNC_14 (int ,int) ;

__attribute__((used)) static void FUNC_15(struct bar_config *VAR_9) {
 int VAR_10[2];
 if (FUNC_8(VAR_0, VAR_4, 0, VAR_10) != 0) {
  FUNC_10(VAR_6, "socketpair failed");
  return;
 }
 if (!FUNC_11(VAR_10[0], 1) || !FUNC_11(VAR_10[1], 1)) {
  return;
 }

 VAR_9->client = FUNC_14(VAR_8.wl_display, VAR_10[0]);
 if (VAR_9->client == ((void*)0)) {
  FUNC_10(VAR_6, "wl_client_create failed");
  return;
 }

 VAR_9->client_destroy.notify = VAR_7;
 FUNC_13(VAR_9->client, &VAR_9->client_destroy);

 pid_t VAR_11 = FUNC_3();
 if (VAR_11 < 0) {
  FUNC_9(VAR_6, "Failed to create fork for swaybar");
  return;
 } else if (VAR_11 == 0) {

  sigset_t VAR_12;
  FUNC_5(&VAR_12);
  FUNC_6(VAR_3, &VAR_12, ((void*)0));

  VAR_11 = FUNC_3();
  if (VAR_11 < 0) {
   FUNC_10(VAR_6, "fork failed");
   FUNC_0(VAR_1);
  } else if (VAR_11 == 0) {
   if (!FUNC_11(VAR_10[1], 0)) {
    FUNC_0(VAR_1);
   }

   char VAR_13[16];
   FUNC_7(VAR_13, sizeof(VAR_13),
     "%d", VAR_10[1]);
   FUNC_4("WAYLAND_SOCKET", VAR_13, 1);


   char *const VAR_14[] = {
     VAR_9->swaybar_command ? VAR_9->swaybar_command : "swaybar",
     "-b", VAR_9->id, ((void*)0)};
   FUNC_2(VAR_14[0], VAR_14);
   FUNC_0(VAR_1);
  }
  FUNC_0(VAR_2);
 }

 if (FUNC_1(VAR_10[1]) != 0) {
  FUNC_10(VAR_6, "close failed");
  return;
 }

 if (FUNC_12(VAR_11, ((void*)0), 0) < 0) {
  FUNC_10(VAR_6, "waitpid failed");
  return;
 }

 FUNC_9(VAR_5, "Spawned swaybar %s", VAR_9->id);
 return;
}
