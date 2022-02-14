
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int*,void*,int*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(HKEY VAR_4, const char *VAR_5, const char *VAR_6, DWORD *VAR_7)
{
    HKEY VAR_8;
    DWORD VAR_9, VAR_10, VAR_11 = sizeof(VAR_10);
    BOOL VAR_12 = VAR_1;

    if (FUNC_1(VAR_4, VAR_5, &VAR_8) == VAR_0)
    {
        if (FUNC_2(VAR_8, VAR_6, ((void*)0), &VAR_9, (void *)&VAR_10, &VAR_11) == VAR_0 &&
            VAR_9 == VAR_2)
        {
            *VAR_7 = VAR_10;
            VAR_12 = VAR_3;
        }
        FUNC_0(VAR_8);
    }
    return VAR_12;
}
