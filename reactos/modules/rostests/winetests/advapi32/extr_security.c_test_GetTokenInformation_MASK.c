
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int is_app_container ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int*,int,int*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_4, VAR_5;
    HANDLE VAR_6;
    BOOL VAR_7;

    VAR_7 = FUNC_4(FUNC_1(), VAR_2, &VAR_6);
    FUNC_6(VAR_7, "OpenProcessToken failed: %u\n", FUNC_2());

    VAR_5 = 0;
    VAR_4 = 0xdeadbeef;
    VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_4,
                              sizeof(VAR_4), &VAR_5);
    FUNC_6(VAR_7 || FUNC_5(FUNC_2() == VAR_1 ||
                     FUNC_2() == VAR_0),
       "GetTokenInformation failed: %u\n", FUNC_2());
    if(VAR_7) {
        FUNC_6(VAR_5 == sizeof(VAR_4), "size = %u\n", VAR_5);
        FUNC_6(!VAR_4, "is_app_container = %x\n", VAR_4);
    }

    FUNC_0(VAR_6);
}
