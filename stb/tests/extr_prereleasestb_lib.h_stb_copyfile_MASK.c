
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raw_buffer ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_0, char *VAR_1)
{
   char VAR_2[1024];
   char *VAR_3;
   int VAR_4 = 65536;

   FILE *VAR_5, *VAR_6;


   if (FUNC_7(VAR_0, VAR_1)) return 1;


   VAR_5 = FUNC_6(VAR_0, "rb");
   if (VAR_5 == ((void*)0)) return 0;


   VAR_6 = FUNC_6(VAR_1, "wb");
   if (VAR_6 == ((void*)0)) {
      FUNC_0(VAR_5);
      return 0;
   }

   VAR_3 = (char *) FUNC_5(VAR_4);
   if (VAR_3 == ((void*)0)) {
      VAR_3 = VAR_2;
      VAR_4 = sizeof(VAR_2);
   }

   while (!FUNC_1(VAR_5)) {
      int VAR_7 = FUNC_2(VAR_3, 1, VAR_4, VAR_5);
      if (VAR_7 != 0)
         FUNC_4(VAR_3, 1, VAR_7, VAR_6);
   }

   FUNC_0(VAR_5);
   if (VAR_3 != VAR_2)
      FUNC_3(VAR_3);

   FUNC_0(VAR_6);
   return 1;
}
