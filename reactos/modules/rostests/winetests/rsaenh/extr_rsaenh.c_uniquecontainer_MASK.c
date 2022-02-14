
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int,int *) ;
 int FUNC_3 (int ,char const*,int *,int *,int ,int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(char *VAR_6)
{

    static const char VAR_7[] = "9d20fd8d05ed2b8455d125d0bf6d6a70";
    static const char VAR_8[] = "Software\\Microsoft\\Cryptography";
    static const char VAR_9[] = "MachineGuid";
    HKEY VAR_10;
    char VAR_11[VAR_4];
    DWORD VAR_12 = VAR_4;
    HRESULT VAR_13;


    VAR_13 = FUNC_2(VAR_1, VAR_8, 0, VAR_2 | VAR_3, &VAR_10);
    if (VAR_13 == VAR_0)
    {

        FUNC_1(VAR_1, VAR_8, &VAR_10);
        VAR_5++;
    }
    FUNC_3(VAR_10, VAR_9, ((void*)0), ((void*)0), (LPBYTE)VAR_11, &VAR_12);
    FUNC_0(VAR_10);

    if (!VAR_6) return;
    FUNC_5(VAR_6, VAR_7);
    FUNC_4(VAR_6, "_");
    FUNC_4(VAR_6, VAR_11);
}
