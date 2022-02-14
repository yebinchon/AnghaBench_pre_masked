
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LSTATUS ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6(LSTATUS VAR_3)
{
    WCHAR* VAR_4;
    DWORD VAR_5;

    FUNC_3(VAR_2);
    VAR_5 = FUNC_0(VAR_1 | VAR_0, ((void*)0), VAR_3, 0, (WCHAR*)&VAR_4, 0, ((void*)0));
    if (VAR_5 == 0 && FUNC_1() != VAR_2)
    {
        FUNC_4("Could not format error code: le=%u, error=%u", FUNC_1(), VAR_3);
        return;
    }

    FUNC_5(VAR_4, VAR_5);
    FUNC_2(VAR_4);
}
