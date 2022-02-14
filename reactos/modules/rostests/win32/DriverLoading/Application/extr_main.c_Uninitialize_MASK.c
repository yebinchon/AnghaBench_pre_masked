
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static BOOL
FUNC_3(LPCWSTR VAR_3)
{
    if (!FUNC_1(VAR_0))
    {
        FUNC_2(L"[%lu] Failed to unregister %s\n", FUNC_0(), VAR_0);
        return VAR_1;
    }

    return VAR_2;
}
