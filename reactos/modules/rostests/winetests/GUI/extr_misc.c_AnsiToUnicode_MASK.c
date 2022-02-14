
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,scalar_t__,int) ;
 int FUNC_3 (int ) ;

DWORD
FUNC_4(LPCSTR VAR_1,
              LPWSTR *VAR_2)
{
    INT VAR_3;
    INT VAR_4 = 0;

    VAR_3 = FUNC_3(VAR_1) + 1;

    *VAR_2 = (LPWSTR)FUNC_1(FUNC_0(), 0, VAR_3 * sizeof(WCHAR));
    if (*VAR_2)
    {
        VAR_4 = FUNC_2(VAR_0,
                                  0,
                                  VAR_1,
                                  -1,
                                  *VAR_2,
                                  VAR_3);
    }

    return VAR_4;
}
