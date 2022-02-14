
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaynag_button {scalar_t__ type; int action; scalar_t__ terminal; int text; } ;
struct TYPE_2__ {int visible; } ;
struct swaynag {int run_display; TYPE_1__ details; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct swaynag*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct swaynag*) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_11(struct swaynag *VAR_5,
  struct swaynag_button *VAR_6) {
 FUNC_6(VAR_4, "Executing [%s]: %s", VAR_6->text, VAR_6->action);
 if (VAR_6->type == VAR_2) {
  VAR_5->run_display = 0;
 } else if (VAR_6->type == VAR_3) {
  VAR_5->details.visible = !VAR_5->details.visible;
  FUNC_4(VAR_5);
 } else {
  pid_t VAR_7 = FUNC_2();
  if (VAR_7 < 0) {
   FUNC_7(VAR_4, "Failed to fork");
   return;
  } else if (VAR_7 == 0) {

   VAR_7 = FUNC_2();
   if (VAR_7 < 0) {
    FUNC_7(VAR_4, "Failed to fork");
    return;
   } else if (VAR_7 == 0) {

    char *VAR_8 = FUNC_3("TERMINAL");
    if (VAR_6->terminal && VAR_8 && FUNC_5(VAR_8)) {
     FUNC_6(VAR_4, "Found $TERMINAL: %s", VAR_8);
     if (!FUNC_9(VAR_8, VAR_6->action)) {
      FUNC_8(VAR_5);
      FUNC_0(VAR_0);
     }
    } else {
     if (VAR_6->terminal) {
      FUNC_6(VAR_4,
        "$TERMINAL not found. Running directly");
     }
     FUNC_1("/bin/sh", "/bin/sh", "-c", VAR_6->action, ((void*)0));
     FUNC_7(VAR_4, "execl failed");
     FUNC_0(VAR_0);
    }
   }
   FUNC_0(VAR_1);
  }
  if (FUNC_10(VAR_7, ((void*)0), 0) < 0) {
   FUNC_7(VAR_4, "waitpid failed");
  }
 }
}
