
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,char const*,int) ;
 int FUNC_8 (int,char const*) ;
 int FUNC_9 (int) ;

UINT FUNC_10( LPWSTR VAR_9, LPCWSTR VAR_10 )
{
    static const WCHAR VAR_11[] = {
        '\\','I','n','s','t','a','l','l','e','r','\\',0};
    static const WCHAR VAR_12[] = {'%','x',0};
    DWORD VAR_13, VAR_14, VAR_15, VAR_16;
    HANDLE VAR_17;

    VAR_13 = FUNC_4();
    FUNC_5( VAR_9, VAR_8 );
    FUNC_8( VAR_9, VAR_11 );
    FUNC_1( VAR_9, ((void*)0) );

    VAR_14 = FUNC_9(VAR_9);
    for (VAR_15 = 0; VAR_15 < 0x10000; VAR_15++)
    {
        VAR_16 = FUNC_7( VAR_9 + VAR_14, VAR_8 - VAR_14, VAR_12, (VAR_13 + VAR_15) & 0xffff );
        FUNC_6( VAR_9 + VAR_14 + VAR_16, VAR_10, (FUNC_9( VAR_10 ) + 1) * sizeof(WCHAR) );
        VAR_17 = FUNC_2( VAR_9, VAR_6, 0, ((void*)0),
                              VAR_0, VAR_5, 0 );
        if (VAR_17 != VAR_7)
        {
            FUNC_0(VAR_17);
            break;
        }
        if (FUNC_3() != VAR_1 &&
            FUNC_3() != VAR_3)
            return VAR_2;
    }

    return VAR_4;
}
