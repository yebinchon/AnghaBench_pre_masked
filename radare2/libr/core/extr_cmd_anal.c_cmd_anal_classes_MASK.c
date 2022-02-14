
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int anal; } ;
typedef TYPE_1__ RCore ;
typedef int RAnalClassErr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char const) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 char* FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(RCore *VAR_3, const char *VAR_4) {
 switch (VAR_4[0]) {
 case 'l':
  FUNC_7 (VAR_3->anal, VAR_4[1]);
  break;
 case ' ':
 case '-':
 case 'n': {
  const char *VAR_5 = FUNC_10 (VAR_4 + 1);
  if (!*VAR_5) {
   break;
  }
  char *VAR_6 = FUNC_12 (VAR_5);
  if (!VAR_6) {
   break;
  }
  char *VAR_7 = FUNC_11 (VAR_6, ' ');
  if (VAR_7) {
   *VAR_7 = '\0';
  }
  if (VAR_4[0] == '-') {
   FUNC_6 (VAR_3->anal, VAR_6);
  } else if(VAR_4[0] == 'n') {
   if (!VAR_7) {
    FUNC_3 ("No new class name given.\n");
   } else {
    char *VAR_8 = VAR_7 + 1;
    VAR_7 = FUNC_11 (VAR_8, ' ');
    if (VAR_7) {
     *VAR_7 = '\0';
    }
    RAnalClassErr VAR_9 = FUNC_8 (VAR_3->anal, VAR_6, VAR_8);
    if (VAR_9 == VAR_1) {
     FUNC_3 ("Class does not exist.\n");
    } else if (VAR_9 == VAR_0) {
     FUNC_3 ("A class with this name already exists.\n");
    }
   }
  } else {
   FUNC_5 (VAR_3->anal, VAR_6);
  }
  FUNC_4 (VAR_6);
  break;
 }
 case 'v':
  FUNC_2 (VAR_3, VAR_4 + 1);
  break;
 case 'b':
  FUNC_0 (VAR_3, VAR_4 + 1);
  break;
 case 'm':
  FUNC_1 (VAR_3, VAR_4 + 1);
  break;
 default:
  FUNC_9 (VAR_3, VAR_2);
  break;
 }
}
