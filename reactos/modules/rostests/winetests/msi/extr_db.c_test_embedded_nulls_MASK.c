
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int control_table ;
typedef int buffer ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int,char*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (char*,char*,int) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,char*,char*) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const char VAR_6[] =
        "Dialog\tText\n"
        "s72\tL0\n"
        "Control\tDialog\n"
        "LicenseAgreementDlg\ttext\x11\x19text\0text";
    UINT VAR_7, VAR_8;
    MSIHANDLE VAR_9, VAR_10;
    char VAR_11[32];

    VAR_7 = FUNC_4( VAR_5, VAR_3, &VAR_9 );
    FUNC_8( VAR_7 == VAR_1, "failed to open database %u\n", VAR_7 );

    FUNC_1( VAR_2, VAR_0 );
    FUNC_9( "temp_file", VAR_6, sizeof(VAR_6) );
    VAR_7 = FUNC_3( VAR_9, VAR_0, "temp_file" );
    FUNC_8( VAR_7 == VAR_1, "failed to import table %u\n", VAR_7 );
    FUNC_0( "temp_file" );

    VAR_7 = FUNC_6( VAR_9, "SELECT `Text` FROM `Control` WHERE `Dialog` = 'LicenseAgreementDlg'", &VAR_10 );
    FUNC_8( VAR_7 == VAR_1, "query failed %u\n", VAR_7 );

    VAR_11[0] = 0;
    VAR_8 = sizeof(VAR_11);
    VAR_7 = FUNC_5( VAR_10, 1, VAR_11, &VAR_8 );
    FUNC_8( VAR_7 == VAR_1, "failed to get string %u\n", VAR_7 );
    FUNC_8( !FUNC_7( "text\r\ntext\ntext", VAR_11, sizeof("text\r\ntext\ntext") - 1 ), "wrong buffer contents \"%s\"\n", VAR_11 );

    FUNC_2( VAR_10 );
    FUNC_2( VAR_9 );
    FUNC_0( VAR_4 );
}
