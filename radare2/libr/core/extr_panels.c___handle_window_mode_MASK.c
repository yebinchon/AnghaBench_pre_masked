
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* panels; } ;
struct TYPE_19__ {int curnode; int fun; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 char* FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int) ;

bool FUNC_18(RCore *VAR_8, const int VAR_9) {
 RPanels *VAR_10 = VAR_8->panels;
 RPanel *VAR_11 = FUNC_3 (VAR_10);
 FUNC_17 (0);
 switch (VAR_9) {
 case 'Q':
 case 'q':
 case 'w':
  FUNC_14 (VAR_8);
  break;
 case 0x0d:
  FUNC_15 (VAR_8);
  break;
 case 9:
  FUNC_4 (VAR_8, 0);
  break;
 case 'Z':
  FUNC_4 (VAR_8, 1);
  break;
 case 'e':
 {
  char *VAR_12 = FUNC_13 (VAR_8, "New command: ");
  if (FUNC_0 (VAR_12)) {
   FUNC_6 (VAR_8, VAR_12, VAR_12);
  }
  FUNC_16 (VAR_12);
 }
  break;
 case 'h':
  if (FUNC_5 (VAR_8, VAR_2)) {
   FUNC_12 (VAR_8, 0, 0);
  }
  if (VAR_10->fun == VAR_4 || VAR_10->fun == VAR_3) {
   FUNC_7 (VAR_10);
  }
  break;
 case 'j':
  if (FUNC_5 (VAR_8, VAR_0)) {
   FUNC_12 (VAR_8, 0, 0);
  }
  if (VAR_10->fun == VAR_4 || VAR_10->fun == VAR_3) {
   FUNC_7 (VAR_10);
  }
  break;
 case 'k':
  if (FUNC_5 (VAR_8, VAR_6)) {
   FUNC_12 (VAR_8, 0, 0);
  }
  if (VAR_10->fun == VAR_4 || VAR_10->fun == VAR_3) {
   FUNC_7 (VAR_10);
  }
  break;
 case 'l':
  if (FUNC_5 (VAR_8, VAR_5)) {
   FUNC_12 (VAR_8, 0, 0);
  }
  if (VAR_10->fun == VAR_4 || VAR_10->fun == VAR_3) {
   FUNC_7 (VAR_10);
  }
  break;
 case 'H':
  FUNC_17 (0);
  FUNC_9 (VAR_10);
  break;
 case 'L':
  FUNC_17 (0);
  FUNC_10 (VAR_10);
  break;
 case 'J':
  FUNC_17 (0);
  FUNC_8 (VAR_10);
  break;
 case 'K':
  FUNC_17 (0);
  FUNC_11 (VAR_10);
  break;
 case 'n':
  FUNC_1 (VAR_8, VAR_11, VAR_7, ((void*)0));
  break;
 case 'N':
  FUNC_1 (VAR_8, VAR_11, VAR_1, ((void*)0));
  break;
 case 'X':
  FUNC_2 (VAR_8, VAR_11, VAR_10->curnode);
  FUNC_12 (VAR_8, 0, 0);
  break;
 case '"':
 case ':':
 case ';':
 case '/':
 case 'd':
 case 'b':
 case 'p':
 case 'P':
 case 't':
 case 'T':
 case '?':
 case '|':
 case '-':
  return 0;
 }
 return 1;
}
