
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef int LPCSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static LPSTR FUNC_4(LPCSTR VAR_0)
{
    LPSTR VAR_1;
    DWORD VAR_2 = (FUNC_3(VAR_0) + 1);
    VAR_1 = FUNC_1(FUNC_0(), 0, VAR_2);
    FUNC_2(VAR_1, VAR_0, VAR_2);
    return VAR_1;
}
