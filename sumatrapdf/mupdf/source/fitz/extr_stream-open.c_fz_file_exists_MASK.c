
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (char const*,char*) ;

int
FUNC_3(fz_context *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;



 VAR_2 = FUNC_1(VAR_1, "rb");

 if (VAR_2)
  FUNC_0(VAR_2);
 return !!VAR_2;
}
