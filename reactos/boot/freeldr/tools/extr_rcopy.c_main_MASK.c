
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int VAR_1 ;

int FUNC_11(int VAR_2, char* VAR_3[])
{
   char* VAR_4;
   char* VAR_5;
   FILE* VAR_6;
   FILE* VAR_7;
   char* VAR_8;
   int VAR_9;
   int VAR_10;

   if (VAR_2 != 3)
     {
    FUNC_5(VAR_1, "Too many arguments\n");
    FUNC_1(1);
     }

   VAR_4 = FUNC_0(VAR_3[1]);
   VAR_5 = FUNC_0(VAR_3[2]);

   VAR_6 = FUNC_4(VAR_4, "rb");
   if (VAR_6 == ((void*)0))
     {
    FUNC_10("Cannot open input file");
    FUNC_1(1);
     }



   VAR_7 = FUNC_4(VAR_5, "wb");
   if (VAR_7 == ((void*)0))
     {
    FUNC_10("Cannot open output file");
    FUNC_2(VAR_6);
    FUNC_1(1);
     }

   VAR_8 = FUNC_9(VAR_0);

   while (!FUNC_3(VAR_6))
     {
    VAR_9 = FUNC_6(VAR_8, 1, VAR_0, VAR_6);
    VAR_10 = FUNC_8(VAR_8, 1, VAR_9, VAR_7);
    if (VAR_9 != VAR_10)
      {
         FUNC_10("Failed to write to output file\n");
         FUNC_7(VAR_8);
         FUNC_2(VAR_6);
         FUNC_2(VAR_7);
         FUNC_1(1);
      }
     }
   FUNC_1(0);
}
