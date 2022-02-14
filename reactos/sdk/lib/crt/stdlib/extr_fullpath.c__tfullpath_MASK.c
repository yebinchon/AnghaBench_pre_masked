
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _TCHAR ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__ const*,size_t,scalar_t__*,scalar_t__**) ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (scalar_t__*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (size_t) ;

_TCHAR* FUNC_6(_TCHAR* VAR_4, const _TCHAR* VAR_5, size_t VAR_6)
{
    _TCHAR* VAR_7;
    _TCHAR* VAR_8;
    DWORD VAR_9;


    if (!VAR_5 || VAR_5[0] == 0)
    {

        return FUNC_3(VAR_4, VAR_6);
    }


    if (!VAR_4)
    {

        VAR_6 = VAR_2;
        VAR_7 = FUNC_5(VAR_6);
        if (!VAR_7)
        {
            VAR_3 = VAR_0;
            return ((void*)0);
        }
    }
    else
    {
        VAR_7 = VAR_4;
    }


    VAR_9 = FUNC_0(VAR_5, (DWORD)VAR_6, VAR_7, &VAR_8);

    if (VAR_9 > VAR_6)
    {

        if (!VAR_4)
        {
            FUNC_4(VAR_7);
        }

        VAR_3 = VAR_1;
        return ((void*)0);
    }
    else if (!VAR_9)
    {

        if (!VAR_4)
        {
            FUNC_4(VAR_7);
        }

        FUNC_2(FUNC_1());
        return ((void*)0);
    }


    return VAR_7;
}
