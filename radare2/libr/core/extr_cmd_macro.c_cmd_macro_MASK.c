
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rcmd; } ;
struct TYPE_4__ {int macro; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(void *VAR_1, const char *VAR_2) {
 char *VAR_3 = ((void*)0);
 RCore *VAR_4 = (RCore*)VAR_1;

 switch (*VAR_2) {
 case ')':
  FUNC_4 (&VAR_4->rcmd->macro, VAR_2 + 1);
  break;
 case '-':
  FUNC_8 (&VAR_4->rcmd->macro, VAR_2 + 1);
  break;
 case '*':
  FUNC_7 (&VAR_4->rcmd->macro);
  break;
 case '\0':
  FUNC_6 (&VAR_4->rcmd->macro);
  break;
 case '(':
 case '?':
  FUNC_9 (VAR_4, VAR_0);
  break;
 default: {


  int VAR_5 = 0;
  int VAR_6, VAR_7 = 0;
  VAR_3 = FUNC_11 (VAR_2);

  for (VAR_6 = 0; VAR_3[VAR_6]; VAR_6++) {
   switch (VAR_3[VAR_6]) {
   case '(':
    VAR_7++;
    break;
   case ')':
    VAR_7--;
    if (VAR_3[VAR_6+1] =='(') {
     VAR_3[VAR_6 + 1] = 0;
     VAR_5 = VAR_6 + 2;
    }
    break;
   }
  }
  VAR_3[FUNC_12 (VAR_3) - 1]=0;
  FUNC_3 (&VAR_4->rcmd->macro, VAR_3);
  if (VAR_5) {
   char *VAR_8 = FUNC_10 (VAR_3, ' ');
   if (!VAR_8) {
    VAR_8 = FUNC_10 (VAR_3, ',');
   }
   if (VAR_8) {
    *VAR_8 = ' ';
    FUNC_2 (VAR_8 + 1, VAR_3 + VAR_5, FUNC_12 (VAR_3 + VAR_5) + 1);
    FUNC_5 (&VAR_4->rcmd->macro, VAR_3);
   } else {
    FUNC_0 ("Invalid syntax for macro\n");
   }
  }
  FUNC_1 (VAR_3);
  } break;
 }
 return 0;
}
