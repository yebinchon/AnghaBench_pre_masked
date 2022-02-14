
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HINTERNET ;
typedef int BOOL ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(HINTERNET VAR_4, int VAR_5)
{
    BOOL VAR_6;

    VAR_2 = VAR_5;

    FUNC_3(VAR_1, VAR_5);
    VAR_6 = FUNC_2(VAR_4);
    FUNC_5(VAR_6, "InternetCloseHandle failed: %u\n", FUNC_1());
    FUNC_4(VAR_3, VAR_0);
    FUNC_0(VAR_1, VAR_5);
}
