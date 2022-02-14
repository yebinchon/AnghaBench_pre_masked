
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int,int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (void*,int) ;

char *FUNC_4(FILE *VAR_0, void *VAR_1)
{
   char *VAR_2;
   int VAR_3 = FUNC_2(VAR_0);
   if (VAR_3 > 4096) return ((void*)0);
   VAR_2 = VAR_1 ? FUNC_3(VAR_1, VAR_3+1) : (char *) FUNC_1(VAR_3+1);
   FUNC_0(VAR_2, 1, VAR_3, VAR_0);
   VAR_2[VAR_3] = 0;
   return VAR_2;
}
