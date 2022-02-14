
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int LPSTR ;
typedef int LPCSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(MSIHANDLE VAR_2, LPCSTR VAR_3, LPSTR VAR_4)
{
    UINT VAR_5;
    DWORD VAR_6;
    MSIHANDLE VAR_7;

    VAR_7 = FUNC_1( 1 );
    FUNC_4(VAR_7, "MsiCreate record failed\n");

    VAR_5 = FUNC_3( VAR_7, 0, VAR_3 );
    FUNC_4( VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_5 );

    VAR_6 = VAR_1;
    VAR_5 = FUNC_2( VAR_2, VAR_7, VAR_4, &VAR_6 );
    FUNC_4( VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_5 );

    FUNC_0( VAR_7 );
}
