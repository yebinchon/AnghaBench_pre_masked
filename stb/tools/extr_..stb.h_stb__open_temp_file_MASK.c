
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,char const*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static FILE *FUNC_10(char *VAR_1, char *VAR_2, const char *VAR_3)
{
   size_t VAR_4;



   FILE *VAR_5;

   VAR_4 = FUNC_8(VAR_2)-1;
   while (VAR_4 > 0 && VAR_2[VAR_4] != '/' && VAR_2[VAR_4] != '\\'
                && VAR_2[VAR_4] != ':' && VAR_2[VAR_4] != '~')
      --VAR_4;
   ++VAR_4;

   FUNC_2(VAR_1, VAR_2, VAR_4);
   {
      FUNC_7(VAR_1+VAR_4, 65536, "stmpXXXXXX");



         int VAR_6 = FUNC_3(VAR_1);

      if (VAR_6 == -1) return ((void*)0);
      VAR_5 = FUNC_1(VAR_6, VAR_3);
      if (VAR_5 == ((void*)0)) {
         FUNC_9(VAR_1);
         FUNC_0(VAR_6);
         return ((void*)0);
      }
   }

   return VAR_5;
}
