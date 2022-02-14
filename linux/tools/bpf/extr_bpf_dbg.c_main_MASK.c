
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(int VAR_2, char **VAR_3)
{
 FILE *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 if (VAR_2 >= 2)
  VAR_4 = FUNC_0(VAR_3[1], "r");
 if (VAR_2 >= 3)
  VAR_5 = FUNC_0(VAR_3[2], "w");

 return FUNC_1(*(VAR_4 ? : VAR_0), *(VAR_5 ? : VAR_1));
}
