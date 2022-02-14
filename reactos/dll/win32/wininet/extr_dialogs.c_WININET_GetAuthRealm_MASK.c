
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int HINTERNET ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,char*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static BOOL FUNC_8( HINTERNET VAR_4, LPWSTR VAR_5, DWORD VAR_6, BOOL VAR_7 )
{
    LPWSTR VAR_8, VAR_9;
    DWORD VAR_10, VAR_11;
    static const WCHAR VAR_12[] = { 'r','e','a','l','m','=',0 };

    if (VAR_7)
        VAR_11 = VAR_1;
    else
        VAR_11 = VAR_2;


    VAR_10 = 0;
    if( !FUNC_1( VAR_4, VAR_11, VAR_5, &VAR_6, &VAR_10) )
        return VAR_0;





    VAR_8 = FUNC_3( VAR_5, ' ' );
    if( !VAR_8 || FUNC_6( VAR_8+1, VAR_12, FUNC_5(VAR_12) ) )
    {
        FUNC_0("response wrong? (%s)\n", FUNC_2(VAR_5));
        return VAR_0;
    }


    VAR_8 += 7;
    if( *VAR_8 == '"' )
    {
        VAR_8++;
        VAR_9 = FUNC_7( VAR_8, '"' );
        if( VAR_9 )
            *VAR_9 = 0;
    }
    FUNC_4( VAR_5, VAR_8 );

    return VAR_3;
}
