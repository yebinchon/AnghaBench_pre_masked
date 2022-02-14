
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Sdb ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(Sdb *VAR_0, const char **VAR_1, int VAR_2, int VAR_3) {
 int VAR_4 = 0;
 if (VAR_1 && VAR_2 > 0) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   switch (VAR_3) {
   case '-':
    VAR_4 |= FUNC_2 (VAR_0, VAR_1[VAR_5]);
    break;
   case '=':
    if (FUNC_3 (VAR_1[VAR_5], '=')) {
     char *VAR_6, *VAR_7 = (char *) FUNC_4 (VAR_1[VAR_5]);
     VAR_6 = FUNC_3 (VAR_7, '=');
     if (VAR_6) {
      *VAR_6++ = 0;
      FUNC_1 (VAR_0, VAR_7, VAR_6);
     }
     FUNC_0 (VAR_7);
    }
    break;
   }
  }
 }
 return VAR_4;
}
