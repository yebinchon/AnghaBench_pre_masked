
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef char WCHAR ;
typedef int UINT ;
typedef char* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int HWND ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *,int,int *,int,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *,int,int *,int*,scalar_t__) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9( HWND VAR_5, LPCWSTR VAR_6,
                                    LPCWSTR VAR_7, BOOL VAR_8 )
{
    WCHAR VAR_9[0x80], VAR_10[0x40];
    LPWSTR VAR_11;
    HWND VAR_12, VAR_13;
    DWORD VAR_14, VAR_15 = 19;
    UINT VAR_16, VAR_17;
    WORD VAR_18;
    static const WCHAR VAR_19[] = { ':',0 };
    static const WCHAR VAR_20[] = { '/', 0 };

    VAR_12 = FUNC_0( VAR_5, VAR_2 );
    VAR_13 = FUNC_0( VAR_5, VAR_1 );


    FUNC_6( VAR_9, VAR_6);
    FUNC_5( VAR_9, VAR_20);
    FUNC_5( VAR_9, VAR_7);







    if( VAR_8 )
    {
        VAR_10[0] = 0;
        FUNC_1( VAR_12, VAR_10,
                        (sizeof VAR_10-1)/sizeof(WCHAR) );
        FUNC_5(VAR_10, VAR_19);
        VAR_17 = FUNC_8( VAR_10 );
        FUNC_1( VAR_13, VAR_10+VAR_17,
                        (sizeof VAR_10)/sizeof(WCHAR)-VAR_17 );

        VAR_16 = (FUNC_8( VAR_9 ) + 1)*sizeof(WCHAR);
        VAR_17 = (FUNC_8( VAR_10 ) + 1)*sizeof(WCHAR);
        VAR_14 = FUNC_3( (CHAR*)VAR_9, VAR_16,
                               (CHAR*)VAR_10, VAR_17, VAR_15, 0 );

        return ( VAR_14 == VAR_4 );
    }

    VAR_18 = sizeof VAR_10;
    VAR_16 = (FUNC_8( VAR_9 ) + 1)*sizeof(WCHAR);
    VAR_14 = FUNC_4( (CHAR*)VAR_9, VAR_16,
                               (CHAR*)VAR_10, &VAR_18, VAR_15 );
    if( VAR_14 != VAR_4 )
        return VAR_0;

    VAR_11 = FUNC_7( VAR_10, ':' );
    if( VAR_11 )
    {
        *VAR_11 = 0;
        FUNC_2( VAR_12, VAR_10 );
        FUNC_2( VAR_13, VAR_11+1 );
    }

    return VAR_3;
}
