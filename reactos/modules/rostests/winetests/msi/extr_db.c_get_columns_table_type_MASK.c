
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,char*,char const*) ;

__attribute__((used)) static UINT FUNC_7(MSIHANDLE VAR_1, const char *VAR_2, UINT VAR_3)
{
    MSIHANDLE VAR_4 = 0, VAR_5 = 0;
    UINT VAR_6, VAR_7 = 0;
    char VAR_8[0x100];

    FUNC_6(VAR_8, "select * from `_Columns` where  `Table` = '%s'", VAR_2 );

    VAR_6 = FUNC_1(VAR_1, VAR_8, &VAR_4);
    if( VAR_6 != VAR_0 )
        return VAR_6;

    VAR_6 = FUNC_4(VAR_4, 0);
    if( VAR_6 == VAR_0 )
    {
        while (1)
        {
            VAR_6 = FUNC_5( VAR_4, &VAR_5 );
            if( VAR_6 != VAR_0)
                break;
            VAR_6 = FUNC_2( VAR_5, 2 );
            if (VAR_6 == VAR_3)
                VAR_7 = FUNC_2( VAR_5, 4 );
            FUNC_0( VAR_5 );
        }
    }
    FUNC_3(VAR_4);
    FUNC_0(VAR_4);
    return VAR_7;
}
