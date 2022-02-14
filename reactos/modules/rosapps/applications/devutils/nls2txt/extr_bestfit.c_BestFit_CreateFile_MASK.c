
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,int,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,char*,int,int *,int *) ;

__attribute__((used)) static HANDLE
FUNC_2(const WCHAR *VAR_6)
{
    DWORD VAR_7;
    HANDLE VAR_8;

    VAR_8 = FUNC_0(VAR_6,
                        VAR_4,
                        VAR_2 | VAR_3,
                        ((void*)0),
                        VAR_0,
                        VAR_1,
                        ((void*)0));
    if (VAR_8 != VAR_5)
    {

        FUNC_1(VAR_8, "\xEF\xBB\xBF", 3, &VAR_7, ((void*)0));
    }

    return VAR_8;
}
