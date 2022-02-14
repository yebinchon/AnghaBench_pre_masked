
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * cur; } ;
struct TYPE_9__ {TYPE_2__* lang; } ;
typedef int RLangPlugin ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,char**) ;
 scalar_t__ FUNC_8 (int ) ;
 char** FUNC_9 (char const*,int*) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char const*,char*) ;

__attribute__((used)) static int FUNC_13 (RCore *VAR_0, const char *VAR_1) {
 if (FUNC_8 (0)) {
  FUNC_0 ("hashbang disabled in sandbox mode\n");
  return 0;
 }
 int VAR_2;
 char **VAR_3 = FUNC_9 (VAR_1 + 1, &VAR_2);
 if (VAR_2 > 0) {
  RLangPlugin *VAR_4 = FUNC_2 (VAR_0->lang, VAR_3[0]);
  if (VAR_4) {


   VAR_0->lang->cur = VAR_4;
   if (VAR_2 > 1) {
    if (!FUNC_11 (VAR_3[1], "-e")) {
     char *VAR_5 = FUNC_12 (VAR_1 + 2, "-e") + 2;
     FUNC_6 (VAR_0->lang, VAR_5);
    } else {
     if (FUNC_7 (VAR_0->lang, VAR_2 - 1, &VAR_3[1])) {
      FUNC_5 (VAR_0->lang, VAR_3[1]);
     } else {
      char *VAR_6 = FUNC_12 (VAR_1 + 2, VAR_3[1]);
      FUNC_5 (VAR_0->lang, VAR_6);
     }
    }
   } else {
    if (FUNC_1 ()) {
     FUNC_4 (VAR_0->lang);
    } else {
     FUNC_0 ("Error: scr.interactive required to run the rlang prompt\n");
    }
   }
  } else if (VAR_3[0][0]=='?' || VAR_3[0][0]=='*') {
   FUNC_3 (VAR_0->lang);
  }
 } else {
  FUNC_3 (VAR_0->lang);
 }
 FUNC_10(VAR_3);
 return 1;
}
