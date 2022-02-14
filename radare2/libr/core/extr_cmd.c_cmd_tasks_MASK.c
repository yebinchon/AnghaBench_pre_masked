
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int num; int current_task; } ;
struct TYPE_17__ {int transient; int res; } ;
typedef TYPE_1__ RCoreTask ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,char const) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,int,char const*,int *,TYPE_2__*) ;
 int FUNC_12 (int ,char const*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 switch (VAR_1[0]) {
 case '\0':
 case 'j':
  FUNC_10 (VAR_2, *VAR_1);
  break;
 case 'b': {
  if (FUNC_13 (0)) {
   FUNC_0 ("This command is disabled in sandbox mode\n");
   return 0;
  }
  int VAR_3 = FUNC_12 (VAR_2->num, VAR_1 + 1);
  if (VAR_3) {
   FUNC_3 (VAR_2, VAR_3);
  }
  break;
 }
 case '&': {
  if (FUNC_13 (0)) {
   FUNC_0 ("This command is disabled in sandbox mode\n");
   return 0;
  }
  int VAR_4 = FUNC_12 (VAR_2->num, VAR_1 + 1);
  FUNC_9 (VAR_2, VAR_2->current_task, VAR_4 ? VAR_4 : -1);
  break;
 }
 case '=': {

  int VAR_5 = FUNC_12 (VAR_2->num, VAR_1 + 1);
  if (VAR_5) {
   RCoreTask *VAR_6 = FUNC_8 (VAR_2, VAR_5);
   if (VAR_6) {
    if (VAR_6->res) {
     FUNC_2 (VAR_6->res);
    }
    FUNC_4 (VAR_6);
   } else {
    FUNC_0 ("Cannot find task\n");
   }
  }
  break;
 }
 case '-':
  if (FUNC_13 (0)) {
   FUNC_0 ("This command is disabled in sandbox mode\n");
   return 0;
  }
  if (VAR_1[1] == '*') {
   FUNC_6 (VAR_2);
  } else {
   FUNC_5 (VAR_2, FUNC_12 (VAR_2->num, VAR_1 + 1));
  }
  break;
 case '?':
 default:
  FUNC_1 (VAR_2);
  break;
 case ' ':
 case '_':
 case 't': {
  if (FUNC_13 (0)) {
   FUNC_0 ("This command is disabled in sandbox mode\n");
   return 0;
  }
  RCoreTask *VAR_7 = FUNC_11 (VAR_2, 1, VAR_1 + 1, ((void*)0), VAR_2);
  if (!VAR_7) {
   break;
  }
  VAR_7->transient = VAR_1[0] == 't';
  FUNC_7 (VAR_2, VAR_7);
  break;
 }
 }
 return 0;
}
