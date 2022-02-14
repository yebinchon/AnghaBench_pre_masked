
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4, LPCWSTR VAR_5, DWORD VAR_6[], DWORD VAR_7[])
{
    HKEY VAR_8;
    DWORD VAR_9 = 0;

    if(FUNC_2(&VAR_8, &VAR_9, VAR_5) == VAR_0)
    {
        FUNC_1(VAR_8, VAR_2, 0, VAR_1, (LPBYTE)&VAR_6[VAR_4],
                       sizeof(DWORD));
        FUNC_1(VAR_8, VAR_3, 0, VAR_1, (LPBYTE)&VAR_7[VAR_4],
                       sizeof(DWORD));
        FUNC_0(VAR_8);
    }
}
