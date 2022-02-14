
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int graph; } ;
typedef TYPE_1__ RCore ;
typedef int RANode ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 char** FUNC_5 (char const*,int*) ;
 int FUNC_6 (char**) ;

__attribute__((used)) static void FUNC_7(RCore *VAR_1, const char *VAR_2) {
 switch (*VAR_2) {
 case ' ':
 case '-': {
  RANode *VAR_3, *VAR_4;
  char **VAR_5;
  int VAR_6;

  VAR_5 = FUNC_5 (VAR_2 + 1, &VAR_6);
  if (VAR_6 != 2) {
   FUNC_3 ("Wrong arguments\n");
   FUNC_6 (VAR_5);
   break;
  }

  VAR_3 = FUNC_2 (VAR_1->graph, VAR_5[0]);
  VAR_4 = FUNC_2 (VAR_1->graph, VAR_5[1]);
  if (!VAR_3 || !VAR_4) {
   if (!VAR_3) {
    FUNC_3 ("Node %s not found!\n", VAR_5[0]);
   } else {
    FUNC_3 ("Node %s not found!\n", VAR_5[1]);
   }
   FUNC_6 (VAR_5);
   break;
  }
  if (*VAR_2 == ' ') {
   FUNC_0 (VAR_1->graph, VAR_3, VAR_4);
  } else {
   FUNC_1 (VAR_1->graph, VAR_3, VAR_4);
  }
  FUNC_6 (VAR_5);
  break;
 }
 case '?':
 default:
  FUNC_4 (VAR_1, VAR_0);
  break;
 }
}
