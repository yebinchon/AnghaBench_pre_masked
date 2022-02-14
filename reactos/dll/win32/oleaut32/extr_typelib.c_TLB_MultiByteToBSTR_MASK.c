
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,int,int *,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static BSTR FUNC_2(const char *VAR_1)
{
    DWORD VAR_2;
    BSTR VAR_3;

    VAR_2 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
    VAR_3 = FUNC_1(((void*)0), VAR_2 - 1);
    if (!VAR_3) return VAR_3;
    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_3, VAR_2);
    return VAR_3;
}
