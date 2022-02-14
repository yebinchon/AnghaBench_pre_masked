
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* lo; void* hi; } ;
typedef TYPE_1__ char_range ;


 char* FUNC_0 (char*) ;
 void* FUNC_1 (char*,char**,int) ;

char_range FUNC_2(char *VAR_0)
{
   char_range VAR_1;
   char *VAR_2;
   VAR_1.lo = FUNC_1(VAR_0, &VAR_2, 16);
   VAR_2 = FUNC_0(VAR_2);
   if (*VAR_2 == '.')
      VAR_1.hi = FUNC_1(VAR_2+2, ((void*)0), 16);
   else
      VAR_1.hi = VAR_1.lo;
   return VAR_1;
}
