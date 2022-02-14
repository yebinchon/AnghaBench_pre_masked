
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int prompt ;
typedef int msg ;
typedef int buf ;
typedef int TextLog ;
struct TYPE_6__ {int prompt; } ;
struct TYPE_5__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*) ;
 TYPE_3__* FUNC_9 () ;
 char* FUNC_10 (char*,char const*,char*) ;
 char* FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,int,char*,...) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (char*,char*,int) ;

__attribute__((used)) static void FUNC_17 (RCore *VAR_0, TextLog VAR_1) {
 char VAR_2[64];
 char VAR_3[1024];
 int VAR_4 = 0;
 const char *VAR_5 = FUNC_3 (VAR_0->config, "cfg.user");
 char *VAR_6, VAR_7[1024];

 FUNC_1 ("Type '/help' for commands and ^D to quit:\n");
 char *VAR_8 = FUNC_15 (FUNC_9 ()->prompt);
 FUNC_12 (VAR_2, sizeof (VAR_2) - 1, "[%s]> ", VAR_5);
 FUNC_8 (VAR_2);
 VAR_6 = FUNC_11 (VAR_1, VAR_7);
 for (;;) {
  if (VAR_4 >= 0) {
   FUNC_12 (VAR_7, sizeof (VAR_7) - 1, "T %d", VAR_4);
  } else {
   FUNC_14 (VAR_7, "T");
  }
  VAR_6 = FUNC_11 (VAR_1, VAR_7);
  FUNC_6 (VAR_6);
  FUNC_2 (VAR_6);
  VAR_6 = FUNC_11 (VAR_1, "Tl");
  VAR_4 = FUNC_0 (VAR_6)-1;
  FUNC_2 (VAR_6);
  if (FUNC_5 (VAR_3, sizeof (VAR_3) - 1, 0, ((void*)0)) < 0) {
   goto beach;
  }
  if (!*VAR_3) {
   continue;
  }
  if (!FUNC_13 (VAR_3, "/help")) {
   FUNC_1 ("/quit           quit the chat (same as ^D)\n");
   FUNC_1 ("/nick <nick>    set cfg.user nick name\n");
   FUNC_1 ("/log            show full log\n");
   FUNC_1 ("/clear          clear text log messages\n");
  } else if (!FUNC_16 (VAR_3, "/nick ", 6)) {
   FUNC_12 (VAR_7, sizeof (VAR_7) - 1, "* '%s' is now known as '%s'", VAR_5, VAR_3+6);
   FUNC_6 (VAR_7);
   FUNC_7 (VAR_0, VAR_7);
   FUNC_4 (VAR_0->config, "cfg.user", VAR_3+6);
   VAR_5 = FUNC_3 (VAR_0->config, "cfg.user");
   FUNC_12 (VAR_2, sizeof (VAR_2) - 1, "[%s]> ", VAR_5);
   FUNC_8 (VAR_2);
  } else if (!FUNC_13 (VAR_3, "/log")) {
   char *VAR_9 = FUNC_11 (VAR_1, "T");
   if (VAR_9) {
    FUNC_6 (VAR_9);
    FUNC_2 (VAR_9);
   }
  } else if (!FUNC_13 (VAR_3, "/clear")) {

   FUNC_2 (FUNC_11 (VAR_1, "T-"));
  } else if (!FUNC_13 (VAR_3, "/quit")) {
   goto beach;
  } else if (*VAR_3=='/') {
   FUNC_1 ("Unknown command: %s\n", VAR_3);
  } else {
   char *VAR_10 = FUNC_10 ("T [%s] %s", VAR_5, VAR_3);
   FUNC_2 (FUNC_11 (VAR_1, VAR_10));
   FUNC_2 (VAR_10);
  }
 }
beach:
 FUNC_8 (VAR_8);
 FUNC_2 (VAR_8);
}
