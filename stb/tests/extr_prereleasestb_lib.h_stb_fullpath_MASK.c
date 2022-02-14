
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_0, int VAR_1, char *VAR_2)
{



   if (VAR_2[0] == '/' || VAR_2[0] == '~') {
      if ((int) FUNC_3(VAR_2) >= VAR_1)
         return 0;
      FUNC_2(VAR_0,VAR_2);
      return 1;
   } else {
      int VAR_3;
      FUNC_1(VAR_0, VAR_1);
      VAR_3 = FUNC_3(VAR_0);
      if (VAR_3+(int) FUNC_3(VAR_2)+2 <= VAR_1) {
         VAR_0[VAR_3] = '/';
         FUNC_2(VAR_0+VAR_3+1, VAR_2);
         return 1;
      } else {
         return 0;
      }
   }

}
