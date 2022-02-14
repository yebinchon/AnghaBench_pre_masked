
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

void **FUNC_1(int VAR_0, int VAR_1)
{
   int VAR_2;
   char *VAR_3 = (char *) FUNC_0(sizeof(void *) * VAR_0 + VAR_0 * VAR_1);
   void **VAR_4;
   if (VAR_3 == ((void*)0)) return ((void*)0);
   VAR_4 = (void **) VAR_3;
   VAR_3 += sizeof(void *) * VAR_0;
   for (VAR_2=0; VAR_2 < VAR_0; ++VAR_2)
      VAR_4[VAR_2] = VAR_3 + VAR_2 * VAR_1;
   return VAR_4;
}
