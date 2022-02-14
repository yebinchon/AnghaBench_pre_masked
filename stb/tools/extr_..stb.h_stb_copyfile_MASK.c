
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raw_buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_2, char *VAR_3)
{
   char VAR_4[1024];
   char *VAR_5;
   int VAR_6 = 65536;

   FILE *VAR_7, *VAR_8;


   if (FUNC_7(VAR_2, VAR_3)) return VAR_1;


   VAR_7 = FUNC_6(VAR_2, "rb");
   if (VAR_7 == ((void*)0)) return VAR_0;


   VAR_8 = FUNC_6(VAR_3, "wb");
   if (VAR_8 == ((void*)0)) {
      FUNC_0(VAR_7);
      return VAR_0;
   }

   VAR_5 = (char *) FUNC_5(VAR_6);
   if (VAR_5 == ((void*)0)) {
      VAR_5 = VAR_4;
      VAR_6 = sizeof(VAR_4);
   }

   while (!FUNC_1(VAR_7)) {
      size_t VAR_9 = FUNC_2(VAR_5, 1, VAR_6, VAR_7);
      if (VAR_9 != 0)
         FUNC_4(VAR_5, 1, VAR_9, VAR_8);
   }

   FUNC_0(VAR_7);
   if (VAR_5 != VAR_4)
      FUNC_3(VAR_5);

   FUNC_0(VAR_8);
   return VAR_1;
}
