
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __ms_va_list ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int const*,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static void FUNC_7(const WCHAR *VAR_3, __ms_va_list VAR_4)
{
    WCHAR *VAR_5;
    DWORD VAR_6;

    FUNC_3(VAR_2);
    VAR_6 = FUNC_0(VAR_1|VAR_0,
                         VAR_3, 0, 0, (WCHAR *)&VAR_5, 0, &VAR_4);
    if (VAR_6 == 0 && FUNC_1() != VAR_2)
    {
        FUNC_4("Could not format string: le=%u, fmt=%s\n", FUNC_1(), FUNC_6(VAR_3));
        return;
    }
    FUNC_5(VAR_5, VAR_6);
    FUNC_2(VAR_5);
}
