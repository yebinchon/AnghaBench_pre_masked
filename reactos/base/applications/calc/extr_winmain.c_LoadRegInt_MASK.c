
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCTSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int ,int*) ;

__attribute__((used)) static int FUNC_3(LPCTSTR VAR_3, LPCTSTR VAR_4, int VAR_5)
{
    HKEY VAR_6;
    int VAR_7;
    DWORD VAR_8;

    if (FUNC_1(VAR_1, VAR_3, 0, VAR_2, &VAR_6) == VAR_0)
    {

        VAR_8 = sizeof(int);

        if (FUNC_2(VAR_6, VAR_4, ((void*)0), ((void*)0), (LPBYTE)&VAR_7, &VAR_8) == VAR_0)
            VAR_5 = VAR_7;


        FUNC_0(VAR_6);
    }

    return VAR_5;
}
