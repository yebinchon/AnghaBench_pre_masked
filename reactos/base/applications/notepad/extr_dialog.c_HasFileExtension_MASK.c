
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCTSTR ;
typedef int BOOL ;


 int FUNC_0 (char) ;
 int * FUNC_1 (int *,int ) ;

BOOL FUNC_2(LPCTSTR VAR_0)
{
    LPCTSTR VAR_1;

    VAR_1 = FUNC_1(VAR_0, FUNC_0('\\'));
    if (VAR_1)
        VAR_0 = VAR_1;
    return FUNC_1(VAR_0, FUNC_0('.')) != ((void*)0);
}
