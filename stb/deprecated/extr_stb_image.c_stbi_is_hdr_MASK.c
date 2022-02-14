
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;

extern int FUNC_3 (char const *VAR_0)
{
   FILE *VAR_1 = FUNC_1(VAR_0, "rb");
   int VAR_2=0;
   if (VAR_1) {
      VAR_2 = FUNC_2(VAR_1);
      FUNC_0(VAR_1);
   }
   return VAR_2;
}
