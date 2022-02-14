
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 unsigned char* FUNC_3 (int *,int*,int*,int*,int) ;

unsigned char *FUNC_4(char const *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   FILE *VAR_5 = FUNC_2(VAR_0, "rb");
   unsigned char *VAR_6;
   if (!VAR_5) return FUNC_0("can't fopen", "Unable to open file");
   VAR_6 = FUNC_3(VAR_5,VAR_1,VAR_2,VAR_3,VAR_4);
   FUNC_1(VAR_5);
   return VAR_6;
}
