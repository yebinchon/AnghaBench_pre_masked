
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stringlen; int * string; } ;
typedef TYPE_1__ STB_TEXTEDIT_STRING ;


 int FUNC_0 (int *,int *,scalar_t__) ;

int FUNC_1(STB_TEXTEDIT_STRING *VAR_0, int VAR_1, int VAR_2)
{
   FUNC_0(&VAR_0->string[VAR_1], &VAR_0->string[VAR_1+VAR_2], VAR_0->stringlen - (VAR_1+VAR_2));
   VAR_0->stringlen -= VAR_2;
   return 1;
}
