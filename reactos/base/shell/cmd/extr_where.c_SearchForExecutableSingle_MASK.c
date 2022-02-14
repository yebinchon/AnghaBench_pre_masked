
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* TCHAR ;
typedef void** LPTSTR ;
typedef void** LPCTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void**) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 void* FUNC_2 (char) ;
 void** FUNC_3 (void**,void*) ;
 int FUNC_4 (void**,void**) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (void**,void**,size_t) ;
 int FUNC_7 (void**) ;

BOOL
FUNC_8 (LPCTSTR VAR_3, LPTSTR VAR_4, LPTSTR VAR_5, LPTSTR VAR_6)
{
    TCHAR VAR_7[VAR_0], *VAR_8;
    LPTSTR VAR_9,VAR_10;

    *VAR_4 = FUNC_2('\0');

    FUNC_1 ("SearchForExecutableSingle: \'%s\' in dir: \'%s\'\n",
        FUNC_7(VAR_3), FUNC_7(VAR_6));

    VAR_8 = VAR_7;
    if (VAR_6 != ((void*)0))
    {
        FUNC_4(VAR_7, VAR_6);
        VAR_8 += FUNC_5(VAR_8);
        *VAR_8++ = FUNC_2('\\');
    }
    FUNC_4(VAR_8, VAR_3);
    VAR_8 += FUNC_5(VAR_8);

    if (FUNC_0 (VAR_7))
    {
        FUNC_1 ("Found: \'%s\'\n", FUNC_7(VAR_7));
        FUNC_4 (VAR_4, VAR_7);
        return VAR_2;
    }

    VAR_9 = VAR_5;
    while (VAR_9 && *VAR_9)
    {
        VAR_10 = FUNC_3 (VAR_9, FUNC_2(';'));

        if (VAR_10)
        {
            FUNC_6 (VAR_8, VAR_9, (size_t)(VAR_10-VAR_9));
            VAR_8[VAR_10-VAR_9] = FUNC_2('\0');
            VAR_9 = VAR_10 + 1;
        }
        else
        {
            FUNC_4 (VAR_8, VAR_9);
            VAR_9 = ((void*)0);
        }

        if (FUNC_0 (VAR_7))
        {
            FUNC_1 ("Found: \'%s\'\n", FUNC_7(VAR_7));
            FUNC_4 (VAR_4, VAR_7);
            return VAR_2;
        }
    }
    return VAR_1;
}
