
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef int DWORD ;
typedef int Buffer ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int*,int *,int*) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    HKEY VAR_7;
    DWORD VAR_8, VAR_9;
    BYTE VAR_10[64];
    BOOL VAR_11;







    if (FUNC_1(VAR_3, "SOFTWARE\\Clients\\Mail", 0, VAR_5, &VAR_7) == VAR_1)
    {
        VAR_9 = sizeof(VAR_10);


        if (FUNC_2(VAR_7, ((void*)0), ((void*)0), &VAR_8, VAR_10, &VAR_9) != VAR_0)
        {
            FUNC_0(VAR_7);
            return VAR_6;
        }
        FUNC_0(VAR_7);
        VAR_11 = VAR_6;
    }
    else
        VAR_11 = VAR_2;

    if (FUNC_1(VAR_4, "SOFTWARE\\Clients\\Mail", 0, VAR_5, &VAR_7) == VAR_1)
    {
        VAR_9 = sizeof(VAR_10);
        if (FUNC_2(VAR_7, ((void*)0), ((void*)0), &VAR_8, VAR_10, &VAR_9) != VAR_0)
        {
            FUNC_0(VAR_7);
            return VAR_6;
        }
        FUNC_0(VAR_7);
        return VAR_2;
    }

    return ! VAR_11;
}
