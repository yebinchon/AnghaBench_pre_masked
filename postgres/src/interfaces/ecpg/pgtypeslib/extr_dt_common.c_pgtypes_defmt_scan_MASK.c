
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union un_fmt_comb {unsigned int uint_val; unsigned long luint_val; int * str_val; } ;





 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(union un_fmt_comb *VAR_1, int VAR_2, char **VAR_3, char *VAR_4)
{





 char VAR_5;
 int VAR_6 = 0;
 char *VAR_7;
 char *VAR_8 = ((void*)0);

 while (**VAR_3 == ' ')
  VAR_3++;
 VAR_7 = FUNC_0(*VAR_3, VAR_4);
 if (!VAR_7)
 {

  return 1;
 }
 VAR_5 = *VAR_7;
 *VAR_7 = '\0';

 switch (VAR_2)
 {
  case 129:





   while (**VAR_3 == ' ')
    (*VAR_3)++;
   VAR_0 = 0;
   VAR_1->uint_val = (unsigned int) FUNC_2(*VAR_3, &VAR_8, 10);
   if (VAR_0)
    VAR_6 = 1;
   break;
  case 128:
   while (**VAR_3 == ' ')
    (*VAR_3)++;
   VAR_0 = 0;
   VAR_1->luint_val = (unsigned long int) FUNC_2(*VAR_3, &VAR_8, 10);
   if (VAR_0)
    VAR_6 = 1;
   break;
  case 130:
   VAR_1->str_val = FUNC_1(*VAR_3);
   if (VAR_1->str_val == ((void*)0))
    VAR_6 = 1;
   break;
 }
 if (VAR_8 && *VAR_8)
  *VAR_3 = VAR_8;
 else
  *VAR_3 = VAR_7;
 *VAR_7 = VAR_5;
 return VAR_6;
}
