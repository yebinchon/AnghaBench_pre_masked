
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 size_t FUNC_2 (unsigned char*,int,size_t,int *) ;
 int * FUNC_3 (char*,char*) ;
 int VAR_0 ;

int FUNC_4(char *VAR_1, void *VAR_2, size_t VAR_3)
{
   FILE *VAR_4 = FUNC_3(VAR_1, "wb");
   if (VAR_4) {
      unsigned char *VAR_5 = (unsigned char *) VAR_2;
      size_t VAR_6 = VAR_3;
      while (VAR_6 > 0) {
         size_t VAR_7 = VAR_6 > 65536 ? 65536 : VAR_6;
         size_t VAR_8 = FUNC_2(VAR_5, 1, VAR_7, VAR_4);
         if (VAR_7 != VAR_8) {
            FUNC_1(VAR_0, "Failed while writing %s\n", VAR_1);
            break;
         }
         VAR_6 -= VAR_7;
         VAR_5 += VAR_7;
      }
      FUNC_0(VAR_4);
   }
   return VAR_4 != ((void*)0);
}
