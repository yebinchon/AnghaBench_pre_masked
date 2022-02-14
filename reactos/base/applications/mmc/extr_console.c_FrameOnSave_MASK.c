
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCONSOLE_CHILDFRM_WND ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 () ;

__attribute__((used)) static BOOL
FUNC_2(
    HWND VAR_1)
{
    PCONSOLE_CHILDFRM_WND VAR_2;

    VAR_2 = FUNC_1();
    if (VAR_2 == ((void*)0))
        return VAR_0;

    return FUNC_0(VAR_1, VAR_2);
}
