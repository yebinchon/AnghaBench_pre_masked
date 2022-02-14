
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int prompt ;
typedef int msg ;
typedef int buf ;
struct TYPE_8__ {int config; TYPE_1__* log; } ;
struct TYPE_7__ {int last; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,char const*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(RCore *VAR_0) {
 char VAR_1[64];
 char VAR_2[1024];
 int VAR_3 = 0;
 const char *VAR_4 = FUNC_1 (VAR_0->config, "cfg.user");
 char VAR_5[2048];

 FUNC_0 ("Type '/help' for commands:\n");
 FUNC_8 (VAR_1, sizeof (VAR_1) - 1, "[%s]> ", VAR_4);
 FUNC_7 (VAR_1);
 for (;;) {
  FUNC_6 (VAR_0, VAR_3, 0, 0);
  VAR_3 = VAR_0->log->last;
  if (FUNC_3 (VAR_2, sizeof (VAR_2) - 1, 0, ((void*)0)) < 0) {
   return 1;
  }
  if (!*VAR_2) {
   continue;
  }
  if (!FUNC_9 (VAR_2, "/help")) {
   FUNC_0 ("/quit           quit the chat (same as ^D)\n");
   FUNC_0 ("/name <nick>    set cfg.user name\n");
   FUNC_0 ("/log            show full log\n");
   FUNC_0 ("/clear          clear text log messages\n");
  } else if (!FUNC_10 (VAR_2, "/name ", 6)) {
   FUNC_8 (VAR_5, sizeof (VAR_5) - 1, "* '%s' is now known as '%s'", VAR_4, VAR_2 + 6);
   FUNC_5 (VAR_0, VAR_5);
   FUNC_2 (VAR_0->config, "cfg.user", VAR_2 + 6);
   VAR_4 = FUNC_1 (VAR_0->config, "cfg.user");
   FUNC_8 (VAR_1, sizeof (VAR_1) - 1, "[%s]> ", VAR_4);
   FUNC_7 (VAR_1);
   return 0;
  } else if (!FUNC_9 (VAR_2, "/log")) {
   FUNC_6 (VAR_0, 0, 0, 0);
   return 0;
  } else if (!FUNC_9 (VAR_2, "/clear")) {

   FUNC_4 (VAR_0, "T-");
   return 0;
  } else if (!FUNC_9 (VAR_2, "/quit")) {
   return 0;
  } else if (*VAR_2 == '/') {
   FUNC_0 ("Unknown command: %s\n", VAR_2);
  } else {
   FUNC_8 (VAR_5, sizeof (VAR_5), "[%s] %s", VAR_4, VAR_2);
   FUNC_5 (VAR_0, VAR_5);
  }
 }
 return 1;
}
