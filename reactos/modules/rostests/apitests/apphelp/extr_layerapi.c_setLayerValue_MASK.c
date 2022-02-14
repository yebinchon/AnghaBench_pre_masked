
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LSTATUS ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*,int ,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static BOOL FUNC_6(BOOL VAR_6, const char* VAR_7, const char* VAR_8)
{
    HKEY VAR_9 = ((void*)0);
    LSTATUS VAR_10 = FUNC_2(VAR_6 ? VAR_3 : VAR_2,
        "Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers", 0, ((void*)0), 0, FUNC_0() | VAR_4, ((void*)0), &VAR_9, ((void*)0));
    if (VAR_10 == VAR_1)
    {
        if (VAR_8)
            VAR_10 = FUNC_4(VAR_9, VAR_7, 0, VAR_5, (const BYTE*)VAR_8, (DWORD)FUNC_5(VAR_8)+1);
        else
        {
            VAR_10 = FUNC_3(VAR_9, VAR_7);
            VAR_10 = (VAR_10 == VAR_0 ? VAR_1 : VAR_10);
        }
        FUNC_1(VAR_9);
    }
    return VAR_10 == VAR_1;
}
