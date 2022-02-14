
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static UINT FUNC_7( MSIHANDLE VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3 )
{
    static const WCHAR VAR_4[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','`','%','s','`',' ',
         'W','H','E','R','E',' ','`','N','a','m','e','`',' ','=',' ','\'','%','s','\'',0};
    WCHAR VAR_5[0x100];
    MSIHANDLE VAR_6, VAR_7;
    UINT VAR_8;

    FUNC_6( VAR_5, VAR_4, VAR_2, VAR_3 );
    VAR_8 = FUNC_1( VAR_1, VAR_5, &VAR_6 );
    FUNC_5( VAR_8 == VAR_0, "expected ERROR_SUCCESS, got %u\n", VAR_8 );

    VAR_8 = FUNC_3( VAR_6, 0 );
    FUNC_5( VAR_8 == VAR_0, "expected ERROR_SUCCESS, got %u\n", VAR_8 );

    VAR_8 = FUNC_4( VAR_6, &VAR_7 );
    FUNC_2( VAR_6 );
    FUNC_0( VAR_6 );
    FUNC_0( VAR_7 );
    return VAR_8;
}
