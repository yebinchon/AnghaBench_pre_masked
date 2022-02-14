
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef int buf1 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_0, FILE *VAR_1)
{
   char VAR_2[1024],VAR_3[1024];
   int VAR_4,VAR_5, VAR_6=0;

   while (1) {
      VAR_4 = FUNC_1(VAR_2, 1, sizeof(VAR_2), VAR_0);
      VAR_5 = FUNC_1(VAR_3, 1, sizeof(VAR_3), VAR_1);
      VAR_6 = FUNC_2(VAR_2,VAR_3,VAR_4 < VAR_5 ? VAR_4 : VAR_5);
      if (VAR_6)
         break;
      if (VAR_4 != VAR_5) {
         VAR_6 = VAR_4 < VAR_5 ? -1 : 1;
         break;
      }
      if (VAR_4 == 0)
         break;
   }

   FUNC_0(VAR_0);
   FUNC_0(VAR_1);
   return VAR_6;
}
