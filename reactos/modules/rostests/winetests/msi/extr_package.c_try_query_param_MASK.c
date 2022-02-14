
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int LPCSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static UINT FUNC_5( MSIHANDLE VAR_2, LPCSTR VAR_3, MSIHANDLE VAR_4 )
{
    MSIHANDLE VAR_5 = 0;
    UINT VAR_6;

    VAR_6 = FUNC_1( VAR_2, VAR_3, &VAR_5 );
    if( VAR_6 == VAR_0 )
    {
        UINT VAR_7;

        VAR_7 = FUNC_3( VAR_5, VAR_4 );
        if( VAR_7 != VAR_0 )
        {
            VAR_6 = VAR_7;
            FUNC_4(VAR_1,"MsiViewExecute failed %08lx\n", VAR_6);
        }

        VAR_7 = FUNC_2( VAR_5 );
        if( VAR_7 != VAR_0 )
            VAR_6 = VAR_7;

        VAR_7 = FUNC_0( VAR_5 );
        if( VAR_7 != VAR_0 )
            VAR_6 = VAR_7;
    }
    return VAR_6;
}
