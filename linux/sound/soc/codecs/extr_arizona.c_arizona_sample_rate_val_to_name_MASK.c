
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 char const** VAR_0 ;
 unsigned int* VAR_1 ;

const char *FUNC_1(unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  if (VAR_1[VAR_3] == VAR_2)
   return VAR_0[VAR_3];
 }

 return "Illegal";
}
