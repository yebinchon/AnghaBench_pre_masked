
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tok; } ;
typedef TYPE_1__ TokenSym ;
typedef int TCCState ;
typedef int Sym ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (char const*,int ) ;

void FUNC_4(TCCState *VAR_0, const char *VAR_1)
{
 TokenSym *VAR_2;
 Sym *VAR_3;
 VAR_2 = FUNC_3 (VAR_1, FUNC_2 (VAR_1));
 VAR_3 = FUNC_0 (VAR_2->tok);

 if (VAR_3) {
  FUNC_1 (VAR_3);
 }
}
