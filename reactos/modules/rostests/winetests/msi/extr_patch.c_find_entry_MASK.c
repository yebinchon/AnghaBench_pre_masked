
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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

__attribute__((used)) static UINT FUNC_7( MSIHANDLE VAR_1, const char *VAR_2, const char *VAR_3 )
{
    static const char VAR_4[] = "SELECT * FROM `%s` WHERE `Name` = '%s'";
    char VAR_5[0x100];
    UINT VAR_6;
    MSIHANDLE VAR_7, VAR_8;

    FUNC_6( VAR_5, VAR_4, VAR_2, VAR_3 );
    VAR_6 = FUNC_1( VAR_1, VAR_5, &VAR_7 );
    FUNC_5( VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %u\n", VAR_6 );

    VAR_6 = FUNC_3( VAR_7, 0 );
    FUNC_5( VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %u\n", VAR_6 );

    VAR_6 = FUNC_4( VAR_7, &VAR_8 );
    FUNC_2( VAR_7 );
    FUNC_0( VAR_7 );
    FUNC_0( VAR_8 );
    return VAR_6;
}
