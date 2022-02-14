
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,size_t,int,int *) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, void *VAR_1, size_t VAR_2)
{
   FILE *VAR_3;


   VAR_3 = FUNC_1(VAR_0, "wb");
   if (VAR_3 == ((void*)0))
   {
      FUNC_3("Couldn't open file %s for writing!\n", VAR_0);
      return -1;
   }


   if (FUNC_2(VAR_1, VAR_2, 1, VAR_3) != 1)
   {
      FUNC_0(VAR_3);
      FUNC_3("Couldn't write file %s!\n", VAR_0);
      return -1;
   }


   FUNC_0(VAR_3);
   return 0;
}
