
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static VOID FUNC_4(LPWSTR VAR_1)
{
    BOOL VAR_2;
    VAR_2 = FUNC_2(VAR_1, VAR_0, 0);
    FUNC_3(VAR_2, "RemoveFontResourceEx() failed, we're leaving fonts installed : %lu\n", FUNC_1());
    FUNC_0(VAR_1);
}
