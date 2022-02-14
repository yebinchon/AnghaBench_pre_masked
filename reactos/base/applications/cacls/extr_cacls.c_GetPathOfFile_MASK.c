
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int * LPCTSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int,int *,int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (char) ;
 scalar_t__* FUNC_7 (scalar_t__*,int ) ;
 int FUNC_8 (scalar_t__*,int *,int) ;

__attribute__((used)) static BOOL
FUNC_9(LPTSTR VAR_5, LPCTSTR VAR_6)
{
    TCHAR VAR_7[VAR_3];
    LPTSTR VAR_8;
    DWORD VAR_9;

    FUNC_8(VAR_5, VAR_6, VAR_3);
    VAR_8 = FUNC_7(VAR_5, FUNC_6('\\'));
    if (VAR_8 != ((void*)0))
    {
        *VAR_8 = 0;
        if (!FUNC_3(VAR_5, VAR_3, VAR_7, ((void*)0)))
        {
            FUNC_5(FUNC_4());
            return VAR_1;
        }
        FUNC_8(VAR_5, VAR_7, VAR_3);

        VAR_9 = FUNC_2(VAR_5);
        if (VAR_9 == 0xFFFFFFFF || !(VAR_9 & VAR_2))
        {
            FUNC_5(VAR_0);
            return VAR_1;
        }
    }
    else
        FUNC_1(VAR_3, VAR_5);

    FUNC_0(VAR_5);
    return VAR_4;
}
