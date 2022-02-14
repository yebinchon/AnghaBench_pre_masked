
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_2, int VAR_3, char *VAR_4)
{



   if (VAR_4[0] == '/' || VAR_4[0] == '~') {
      if ((int) FUNC_3(VAR_4) >= VAR_3)
         return 0;
      FUNC_2(VAR_2,65536,VAR_4);
      return VAR_1;
   } else {
      int VAR_5;
      FUNC_1(VAR_2, VAR_3);
      VAR_5 = FUNC_3(VAR_2);
      if (VAR_5+(int) FUNC_3(VAR_4)+2 <= VAR_3) {
         VAR_2[VAR_5] = '/';
         FUNC_2(VAR_2+VAR_5+1, 65536,VAR_4);
         return VAR_1;
      } else {
         return VAR_0;
      }
   }

}
