
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int R_PDB ;
typedef int EStates ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(R_PDB *VAR_0, char *VAR_1, int VAR_2, char *VAR_3, char **VAR_4) {
 EStates VAR_5;
 char *VAR_6 = 0;
 char *VAR_7 = 0;

 VAR_6 = FUNC_8 (VAR_1, " ");
 while (VAR_6 != ((void*)0)) {
  VAR_5 = FUNC_0 (VAR_6);
  switch (VAR_5) {
  case 136:
   break;
  case 133:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'p';
   break;
  case 130:
  case 131:
   VAR_3[VAR_2] = '?';
   VAR_6 = FUNC_8 (((void*)0), " ");
   VAR_7 = (char *) FUNC_2 (FUNC_7 (VAR_6) + FUNC_7 (*VAR_4) + 1 + 2);
   if (!VAR_7) {
    return 0;
   }
   FUNC_3 (VAR_6, -1);
   FUNC_3 (*VAR_4, -1);
   FUNC_6 (VAR_7, VAR_6);

   FUNC_4 (VAR_7, "(%s)%s", VAR_6, *VAR_4);
   FUNC_1 (*VAR_4);
   *VAR_4 = VAR_7;

   return 1;
  case 129:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'u';
   break;
  case 132:



   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'w';
   return 1;
  case 139:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   if (VAR_3[VAR_2] == 'u') {
    VAR_3[VAR_2] = 'b';
   } else {
    VAR_3[VAR_2] = 'c';
   }
   return 1;
  case 137:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'i';
   return 1;
  case 135:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'w';
   break;
  case 138:
   if (VAR_3[VAR_2] == 'p') {
    return 1;
   }
   VAR_3[VAR_2] = 'E';
   VAR_6 = FUNC_8 (((void*)0), " ");
   VAR_7 = (char *) FUNC_2 (FUNC_7 (VAR_6) + FUNC_7 (*VAR_4) + 1 + 2);
   if (!VAR_7) {
    return 0;
   }
   FUNC_6 (VAR_7, VAR_6);
   FUNC_4 (VAR_7, "(%s)%s", VAR_6, *VAR_4);
   FUNC_1 (*VAR_4);
   *VAR_4 = VAR_7;
   return 1;




  case 140:
   VAR_3[VAR_2] = 'B';
   VAR_6 = FUNC_8 (((void*)0), " ");
   VAR_7 = (char *) FUNC_2 (FUNC_7 (VAR_6) + FUNC_7 (*VAR_4) + 1 + 2);
   if (!VAR_7) {
    return 0;
   }
   FUNC_6 (VAR_7, VAR_6);
   FUNC_4 (VAR_7, "(%s)%s", VAR_6, *VAR_4);
   FUNC_1 (*VAR_4);
   *VAR_4 = VAR_7;
   return 1;
  case 128:
  case 141:
  case 134:
   VAR_3[VAR_2] = 'p';
   return 1;
  default:
   if (((!FUNC_5 (VAR_6, "to"))) ||
       (!FUNC_5 (VAR_6, "nesttype")) ||
       (!FUNC_5 (VAR_6, "mfunction")) ||
       (!FUNC_5 (VAR_6, "proc")) ||
       (!FUNC_5 (VAR_6, "arglist"))) {
    break;
   } else {

    VAR_3[VAR_2] = 'A';
    return 0;
   }
  }

  VAR_6 = FUNC_8 (((void*)0), " ");
 }

 return 1;
}
