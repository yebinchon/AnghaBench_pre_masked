
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3( char *VAR_4, char *VAR_5 )
{
    HKEY VAR_6;
    DWORD VAR_7, VAR_8;

    if (FUNC_1( VAR_1, "Software\\Microsoft\\Windows\\CurrentVersion", &VAR_6 ))
        return VAR_0;

    VAR_8 = VAR_2;
    if (FUNC_2( VAR_6, "ProgramFilesDir (x86)", 0, &VAR_7, (LPBYTE)VAR_4, &VAR_8 ) &&
        FUNC_2( VAR_6, "ProgramFilesDir", 0, &VAR_7, (LPBYTE)VAR_4, &VAR_8 ))
    {
        FUNC_0( VAR_6 );
        return VAR_0;
    }
    VAR_8 = VAR_2;
    if (FUNC_2( VAR_6, "CommonFilesDir", 0, &VAR_7, (LPBYTE)VAR_5, &VAR_8 ))
    {
        FUNC_0( VAR_6 );
        return VAR_0;
    }
    FUNC_0( VAR_6 );
    return VAR_3;
}
