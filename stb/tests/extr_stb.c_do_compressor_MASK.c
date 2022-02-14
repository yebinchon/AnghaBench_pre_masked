
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,unsigned int,int *) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (char*,unsigned int,unsigned int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (char*,char*,unsigned int) ;
 char* FUNC_9 (char*,unsigned int*) ;
 char* FUNC_10 (char*,size_t*) ;
 int VAR_0 ;

void FUNC_11(int VAR_1,char**VAR_2)
{
   char *VAR_3;
   size_t VAR_4;
   unsigned int VAR_5;

   int VAR_6;
   if (VAR_1 == 2) {
      VAR_3 = FUNC_10(VAR_2[1], &VAR_4);
      VAR_5 = (unsigned int) VAR_4;
      if (VAR_3) {
         unsigned int VAR_7, VAR_8 = FUNC_8("data/dummy.bin", VAR_3, VAR_5);
         char *VAR_9 = FUNC_9("data/dummy.bin", &VAR_7);

         if (VAR_5 != VAR_7) {
            FUNC_6("FAILED %d -> %d\n", VAR_5, VAR_8);
         } else {
            int VAR_10 = FUNC_5(VAR_9,VAR_3,VAR_7);
            if (VAR_10 != 0)
               FUNC_6("FAILED %d -> %d\n", VAR_5, VAR_8);
            else
               FUNC_6("%d -> %d\n", VAR_5, VAR_8);
         }
      }
      return;
   }

   VAR_6 = FUNC_0(VAR_2[1]);
   if (VAR_6 && VAR_1 == 4) {
      VAR_3 = FUNC_10(VAR_2[3], &VAR_4);
      VAR_5 = (int) VAR_4;
      if (VAR_3) {
         FUNC_7(VAR_6);
         FUNC_8(VAR_2[2], VAR_3, VAR_5);
      }
   } else if (VAR_1 == 3) {
      VAR_3 = FUNC_9(VAR_2[2], &VAR_5);
      if (VAR_3) {
         FILE *VAR_11 = FUNC_2(VAR_2[1], "wb");
         FUNC_4(VAR_3,1,VAR_5,VAR_11);
         FUNC_1(VAR_11);
      } else {
         FUNC_3(VAR_0, "FAILED.\n");
      }
   } else {
      FUNC_3(VAR_0, "Usage: stb <hashsize> <output> <filetocompress>\n"
                      "   or  stb            <output> <filetodecompress>\n");
   }
}
