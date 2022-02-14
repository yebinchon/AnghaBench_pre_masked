
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icon_theme {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int list_t ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,struct icon_theme*) ;
 int * FUNC_3 (char*) ;
 struct icon_theme* FUNC_4 (char*,char*) ;
 struct dirent* FUNC_5 (int *) ;

__attribute__((used)) static list_t *FUNC_6(char *VAR_0) {
 DIR *VAR_1;
 if (!(VAR_1 = FUNC_3(VAR_0))) {
  return ((void*)0);
 }

 list_t *VAR_2 = FUNC_1();
 struct dirent *VAR_3;
 while ((VAR_3 = FUNC_5(VAR_1))) {
  if (VAR_3->d_name[0] == '.') continue;

  struct icon_theme *VAR_4 = FUNC_4(VAR_0, VAR_3->d_name);
  if (VAR_4) {
   FUNC_2(VAR_2, VAR_4);
  }
 }
 FUNC_0(VAR_1);
 return VAR_2;
}
