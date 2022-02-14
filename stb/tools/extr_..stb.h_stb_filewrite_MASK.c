
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,char*,char*) ;
 size_t FUNC_1 (unsigned char*,int,size_t,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(char *VAR_2, void *VAR_3, size_t VAR_4)
{
   FILE *VAR_5 = FUNC_3(VAR_2, "wb");
   if (VAR_5) {
      unsigned char *VAR_6 = (unsigned char *) VAR_3;
      size_t VAR_7 = VAR_4;
      while (VAR_7 > 0) {
         size_t VAR_8 = VAR_7 > 65536 ? 65536 : VAR_7;
         size_t VAR_9 = FUNC_1(VAR_6, 1, VAR_8, VAR_5);
         if (VAR_8 != VAR_9) {
            FUNC_0(VAR_1, "Failed while writing %s\n", VAR_2);
            break;
         }
         VAR_7 -= VAR_8;
         VAR_6 += VAR_8;
      }
      FUNC_2(VAR_5, VAR_0);
   }
   return VAR_5 != ((void*)0);
}
