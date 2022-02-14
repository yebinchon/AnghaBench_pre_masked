
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct utsname {int machine; int release; int nodename; int sysname; } ;
struct TYPE_10__ {int offset; } ;
struct TYPE_9__ {int * glob; int minstamp; int addr; } ;
typedef TYPE_1__ RCoreUndoCondition ;
typedef int RCoreUndo ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,char*,char const*) ;
 int * FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (struct utsname*) ;

__attribute__((used)) static int FUNC_14(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 switch (VAR_2[0]) {
 case '?':
  FUNC_5 (VAR_1, VAR_0);
  return 1;
 case 'c':
  switch (VAR_2[1]) {
  case ' ': {
   char *VAR_4 = FUNC_12 (VAR_2 + 2);
   char *VAR_5 = FUNC_11 (VAR_4, ',');
   if (VAR_5) {
    *VAR_5++ = 0;
    RCoreUndo *VAR_6 = FUNC_7 (VAR_3->offset, VAR_4, VAR_5);
    FUNC_10 (VAR_3, VAR_6);
   } else {
    FUNC_2 ("Usage: uc [cmd] [revert-cmd]");
   }
   FUNC_3 (VAR_4);
   }
   break;
  case '?':
   FUNC_2 ("Usage: uc [cmd],[revert-cmd]\n");
   FUNC_2 (" uc. - list all reverts in current\n");
   FUNC_2 (" uc* - list all core undos\n");
   FUNC_2 (" uc  - list all core undos\n");
   FUNC_2 (" uc- - undo last action\n");
   break;
  case '.': {
   RCoreUndoCondition VAR_7 = {
    .addr = VAR_3->offset,
    .minstamp = 0,
    .glob = ((void*)0)
   };
   FUNC_9 (VAR_3, 1, &VAR_7);
   } break;
  case '*':
   FUNC_9 (VAR_3, 1, ((void*)0));
   break;
  case '-':
   FUNC_8 (VAR_3);
   break;
  default:
   FUNC_9 (VAR_3, 0, ((void*)0));
   break;
  }
  return 1;
 case 's':
  FUNC_6 (VAR_1, "s-%s", VAR_2 + 1);
  return 1;
 case 'w':
  FUNC_6 (VAR_1, "wc%s", VAR_2 + 1);
  return 1;
 case 'n':
  if (VAR_2[1] == 'a') {
   (void)FUNC_0 (VAR_3, VAR_2);
  } else if (VAR_2[1] == 'i' && VAR_2[2] == 'q') {
   (void)FUNC_1 (VAR_3, VAR_2);
  }
  return 1;
 }
 FUNC_4 ("unknown\n");

 return 0;
}
