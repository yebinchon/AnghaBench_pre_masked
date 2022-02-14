
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCTSTR ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,char**,int) ;

int FUNC_2(int VAR_0, LPCTSTR VAR_1[])
{
    LPCTSTR VAR_2 = ((void*)0);
    LPCTSTR VAR_3 = ((void*)0);
    LPCTSTR *VAR_4 = ((void*)0);

    if (VAR_0 < 2)
    {
        FUNC_0();
        return -1;
    }


    if ((VAR_1[1][0] == '\\') && (VAR_1[1][1] == '\\'))
    {
        if (VAR_0 < 3)
        {
            FUNC_0();
            return -1;
        }

        VAR_2 = VAR_1[1];
        VAR_3 = VAR_1[2];
        if (VAR_0 > 3)
            VAR_4 = &VAR_1[3];

        return FUNC_1(VAR_2,
                         VAR_3,
                         VAR_4,
                         VAR_0-3);
    }
    else
    {
        VAR_3 = VAR_1[1];
        if (VAR_0 > 2)
            VAR_4 = &VAR_1[2];

        return FUNC_1(VAR_2,
                         VAR_3,
                         VAR_4,
                         VAR_0-2);
    }
}
