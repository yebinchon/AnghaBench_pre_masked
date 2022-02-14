
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stringlen; int * string; } ;
typedef TYPE_1__ STB_TEXTEDIT_STRING ;
typedef int STB_TEXTEDIT_CHARTYPE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__) ;

int FUNC_3(STB_TEXTEDIT_STRING *VAR_0, int VAR_1, STB_TEXTEDIT_CHARTYPE *VAR_2, int VAR_3)
{
   VAR_0->string = FUNC_2(VAR_0->string, VAR_0->stringlen + VAR_3);
   FUNC_1(&VAR_0->string[VAR_1+VAR_3], &VAR_0->string[VAR_1], VAR_0->stringlen - VAR_1);
   FUNC_0(&VAR_0->string[VAR_1], VAR_2, VAR_3);
   VAR_0->stringlen += VAR_3;
   return 1;
}
