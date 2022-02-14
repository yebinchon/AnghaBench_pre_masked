
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int * pFileName; } ;
typedef int TCHAR ;
typedef int * PWSTR ;
typedef TYPE_1__* PCONSOLE_CHILDFRM_WND ;


 int FUNC_0 (char*,TYPE_1__*,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static VOID
FUNC_6(
    PCONSOLE_CHILDFRM_WND VAR_0,
    PWSTR VAR_1)
{
    FUNC_0("SetFileName(&p \'%S\')\n", VAR_0, VAR_1);

    if (VAR_0->pFileName != ((void*)0))
    {
        FUNC_3(FUNC_1(), 0, VAR_0->pFileName);
        VAR_0->pFileName = ((void*)0);
    }

    if (VAR_1 != ((void*)0))
    {
        VAR_0->pFileName = FUNC_2(FUNC_1(),
                                    0,
                                    (FUNC_5(VAR_1) + 1) * sizeof(TCHAR));
        if (VAR_0->pFileName != ((void*)0))
            FUNC_4(VAR_0->pFileName, VAR_1);
    }
}
