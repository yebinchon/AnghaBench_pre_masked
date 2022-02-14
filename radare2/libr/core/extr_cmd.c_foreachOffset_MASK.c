
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {int num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (char const*,char) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(RCore *VAR_0, const char *VAR_1, const char *VAR_2) {
 char *VAR_3 = FUNC_6 (VAR_1);
 char *VAR_4 = ((void*)0);
 ut64 VAR_5;

 while (VAR_2) {

  while (*VAR_2 == ' ') {
   VAR_2++;
  }

  if (!*VAR_2) {
   break;
  }

  char *VAR_6 = FUNC_5 (VAR_2, '\n');
  if (VAR_6) {
   *VAR_6 = 0;
   VAR_4 = VAR_6 + 1;
  } else {
   VAR_4 = ((void*)0);
  }

  VAR_6 = FUNC_5 (VAR_2, '#');
  if (VAR_6) {
   *VAR_6 = 0;
  }

  while (VAR_2 && *VAR_2) {

   while (*VAR_2 == ' ') {
    VAR_2++;
   }
   char *VAR_7 = FUNC_5 (VAR_2, ' ');
   if (VAR_7) {
    *VAR_7 = '\0';
    VAR_5 = FUNC_4 (VAR_0->num, VAR_2);
    *VAR_7 = ' ';
    VAR_2 = VAR_7 + 1;
   } else {
    if (!*VAR_2) {
     break;
    }
    VAR_5 = FUNC_4 (VAR_0->num, VAR_2);
    VAR_2 = ((void*)0);
   }
   FUNC_3 (VAR_0, VAR_5, 1);
   FUNC_2 (VAR_0, VAR_3, 0);
   FUNC_1 ();
  }
  VAR_2 = VAR_4;
 }
 FUNC_0 (VAR_3);
}
