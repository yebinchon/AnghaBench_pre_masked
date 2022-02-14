
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int member_0; int * lpSource; } ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef TYPE_1__ ACTCTXW ;
typedef int ACTCTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int) ;

HANDLE FUNC_5(LPCWSTR VAR_1)
{
    ACTCTXW VAR_2 = {sizeof(ACTCTX)};
    WCHAR VAR_3[VAR_0] , *VAR_4;

    FUNC_2 (FUNC_1(((void*)0), VAR_3, VAR_0), "GetModuleFileName failed\n");
    VAR_4 = FUNC_4(VAR_3, L'\\');
    if (VAR_4)
        FUNC_3(VAR_4 + 1, VAR_1);

    VAR_2.lpSource = VAR_3;

    return FUNC_0(&VAR_2);
}
