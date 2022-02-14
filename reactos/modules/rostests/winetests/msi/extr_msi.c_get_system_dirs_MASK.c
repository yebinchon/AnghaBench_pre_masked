
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    HKEY VAR_8;
    DWORD VAR_9, VAR_10;

    if (FUNC_2(VAR_2, "Software\\Microsoft\\Windows\\CurrentVersion", &VAR_8))
        return VAR_1;

    VAR_10 = VAR_3;
    if (FUNC_3(VAR_8, "ProgramFilesDir (x86)", 0, &VAR_9, (LPBYTE)VAR_4, &VAR_10) &&
        FUNC_3(VAR_8, "ProgramFilesDir", 0, &VAR_9, (LPBYTE)VAR_4, &VAR_10))
    {
        FUNC_1(VAR_8);
        return VAR_1;
    }
    VAR_10 = VAR_3;
    if (FUNC_3(VAR_8, "CommonFilesDir (x86)", 0, &VAR_9, (LPBYTE)VAR_0, &VAR_10) &&
        FUNC_3(VAR_8, "CommonFilesDir", 0, &VAR_9, (LPBYTE)VAR_0, &VAR_10))
    {
        FUNC_1(VAR_8);
        return VAR_1;
    }
    VAR_10 = VAR_3;
    if (FUNC_3(VAR_8, "ProgramFilesDir", 0, &VAR_9, (LPBYTE)VAR_5, &VAR_10))
    {
        FUNC_1(VAR_8);
        return VAR_1;
    }
    FUNC_1(VAR_8);
    if (!FUNC_0(VAR_7, VAR_3)) return VAR_1;
    return VAR_6;
}
