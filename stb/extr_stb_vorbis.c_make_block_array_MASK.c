
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void *FUNC_0(void *VAR_0, int VAR_1, int VAR_2)
{
   int VAR_3;
   void ** VAR_4 = (void **) VAR_0;
   char *VAR_5 = (char *) (VAR_4 + VAR_1);
   for (VAR_3=0; VAR_3 < VAR_1; ++VAR_3) {
      VAR_4[VAR_3] = VAR_5;
      VAR_5 += VAR_2;
   }
   return VAR_4;
}
