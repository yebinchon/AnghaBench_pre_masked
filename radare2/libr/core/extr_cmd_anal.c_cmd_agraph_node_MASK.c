
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int graph; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char* FUNC_8 (char*,char*) ;
 char** FUNC_9 (char const*,int*) ;
 int FUNC_10 (char**) ;
 char* FUNC_11 (char*,char*,char*,int) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;

__attribute__((used)) static void FUNC_15(RCore *VAR_1, const char *VAR_2) {
 switch (*VAR_2) {
 case ' ': {
  char *VAR_3 = ((void*)0);
  char **VAR_4, *VAR_5;
  int VAR_6, VAR_7 = FUNC_13 ("base64:");
  int VAR_8 = -1;
  VAR_2++;
  VAR_4 = FUNC_9 (VAR_2, &VAR_6);
  if (VAR_6 < 1 || VAR_6 > 3) {
   FUNC_6 ("Wrong arguments\n");
   FUNC_10 (VAR_4);
   break;
  }

  if (VAR_6 > 1) {
   VAR_5 = FUNC_12 (VAR_4[1]);
   if (FUNC_14 (VAR_5, "base64:", VAR_7) == 0) {
    VAR_5 = FUNC_11 (VAR_5, "\\n", "", 1);
    VAR_3 = (char *)FUNC_5 (VAR_5 + VAR_7, -1);
    FUNC_2 (VAR_5);
    if (!VAR_3) {
     FUNC_1 ("Cannot allocate buffer\n");
     FUNC_10 (VAR_4);
     break;
    }
    VAR_5 = VAR_3;
   }
   VAR_5 = FUNC_8 (VAR_5, "\n");
   if (VAR_6 > 2) {
           VAR_8 = FUNC_0(VAR_4[2]);
   }
  } else {
   VAR_5 = FUNC_12 ("");
  }
  FUNC_3 (VAR_1->graph, VAR_4[0], VAR_5, VAR_8);
  FUNC_10 (VAR_4);
  FUNC_2 (VAR_5);

  break;
 }
 case '-': {
  char **VAR_9;
  int VAR_10;

  VAR_2++;
  VAR_9 = FUNC_9 (VAR_2, &VAR_10);
  if (VAR_10 != 1) {
   FUNC_6 ("Wrong arguments\n");
   FUNC_10 (VAR_9);
   break;
  }
  FUNC_4 (VAR_1->graph, VAR_9[0]);
  FUNC_10 (VAR_9);
  break;
 }
 case '?':
 default:
  FUNC_7 (VAR_1, VAR_0);
  break;
 }
}
