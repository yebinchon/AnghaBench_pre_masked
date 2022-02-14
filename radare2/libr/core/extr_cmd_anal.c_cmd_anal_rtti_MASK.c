
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int anal; int offset; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char const) ;
 int FUNC_3 (int ,int ,char const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(RCore *VAR_1, const char *VAR_2) {
 switch (VAR_2[0]) {
 case '\0':
 case 'j':
  FUNC_3 (VAR_1->anal, VAR_1->offset, VAR_2[0]);
  break;
 case 'a':
  FUNC_2 (VAR_1->anal, VAR_2[1]);
  break;
 case 'r':
  FUNC_4 (VAR_1->anal);
  break;
 case 'D': {
  char *VAR_3 = FUNC_7 (VAR_2 + 1);
  char *VAR_4 = FUNC_1 (VAR_1->anal, VAR_3);
  FUNC_0 (VAR_3);
  if (VAR_4) {
   FUNC_5 (VAR_4);
   FUNC_0 (VAR_4);
  }
  break;
 }
 default :
  FUNC_6 (VAR_1, VAR_0);
  break;
 }
}
