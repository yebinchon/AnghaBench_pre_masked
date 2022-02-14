
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * element; } ;
typedef TYPE_1__ mxwriter ;
typedef int WCHAR ;


 int * FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(mxwriter *VAR_0, const WCHAR *VAR_1, int VAR_2)
{
    FUNC_2(VAR_0->element);
    if (VAR_1)
        VAR_0->element = VAR_2 != -1 ? FUNC_1(VAR_1, VAR_2) : FUNC_0(VAR_1);
    else
        VAR_0->element = ((void*)0);
}
