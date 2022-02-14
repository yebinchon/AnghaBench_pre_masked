
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pFileName; } ;
typedef TYPE_1__* PCONSOLE_CHILDFRM_WND ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static BOOL
FUNC_2(
    HWND VAR_1,
    PCONSOLE_CHILDFRM_WND VAR_2)
{
    FUNC_0("pChildInfo %p\n", VAR_2);

    FUNC_0("FileName %S\n", VAR_2->pFileName);

    if (VAR_2->pFileName == ((void*)0))
        return FUNC_1(VAR_1, VAR_2);



    return VAR_0;
}
