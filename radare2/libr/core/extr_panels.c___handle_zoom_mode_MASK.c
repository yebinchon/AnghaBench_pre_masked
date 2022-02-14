
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* panels; } ;
struct TYPE_8__ {size_t curnode; int * panel; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;

bool FUNC_7(RCore *VAR_0, const int VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 FUNC_6 (0);
 switch (VAR_1) {
 case 'Q':
 case 'q':
 case 0x0d:
  FUNC_5 (VAR_0);
  break;
 case 'c':
 case 'C':
 case ';':
 case ' ':
 case '_':
 case '/':
 case '"':
 case 'A':
 case 'r':
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
 case 'u':
 case 'U':
 case 'b':
 case 'd':
 case 'n':
 case 'N':
 case 'g':
 case 'h':
 case 'j':
 case 'k':
 case 'J':
 case 'K':
 case 'l':
 case '.':
 case 'R':
 case 'p':
 case 'P':
 case 's':
 case 'S':
 case 't':
 case 'T':
 case 'x':
 case 'X':
 case ':':
 case '[':
 case ']':
  return 0;
 case 9:
  FUNC_2 (VAR_2->panel[VAR_2->curnode]);
  FUNC_0 (VAR_0, 0);
  FUNC_3 (VAR_2->panel[VAR_2->curnode]);
  FUNC_1 (VAR_2);
  break;
 case 'Z':
  FUNC_2 (VAR_2->panel[VAR_2->curnode]);
  FUNC_0 (VAR_0, 1);
  FUNC_3 (VAR_2->panel[VAR_2->curnode]);
  FUNC_1 (VAR_2);
  break;
 case '?':
  FUNC_5 (VAR_0);
  FUNC_4 (VAR_0);
  FUNC_5 (VAR_0);
  break;
 }
 return 1;
}
