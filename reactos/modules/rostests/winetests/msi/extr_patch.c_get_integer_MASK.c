
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static INT FUNC_7( MSIHANDLE VAR_2, UINT VAR_3, const char *VAR_4)
{
    UINT VAR_5;
    INT VAR_6 = -1;
    MSIHANDLE VAR_7, VAR_8;

    VAR_5 = FUNC_1( VAR_2, VAR_4, &VAR_7 );
    FUNC_6( VAR_5 == VAR_1, "expected ERROR_SUCCESS, got %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_7, 0 );
    FUNC_6( VAR_5 == VAR_1, "expected ERROR_SUCCESS, got %u\n", VAR_5 );

    VAR_5 = FUNC_5( VAR_7, &VAR_8 );
    FUNC_6( VAR_5 == VAR_1, "expected ERROR_SUCCESS, got %u\n", VAR_5 );
    if (VAR_5 == VAR_1)
    {
        UINT VAR_9;
        VAR_6 = FUNC_2( VAR_8, VAR_3 );
        FUNC_0( VAR_8 );

        VAR_9 = FUNC_5( VAR_7, &VAR_8 );
        FUNC_6( VAR_9 == VAR_0, "expected ERROR_NO_MORE_ITEMS, got %u\n", VAR_5);
    }

    FUNC_3( VAR_7 );
    FUNC_0( VAR_7 );
    return VAR_6;
}
