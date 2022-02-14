
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int LPSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(void)
{
    LPVOID VAR_3;
    DWORD VAR_4;
    int VAR_5;

    VAR_4 = FUNC_1 ();
    VAR_5 = FUNC_0(VAR_0 | VAR_1,
                            ((void*)0), VAR_4, 0, (LPSTR) &VAR_3, 0, ((void*)0));
    if (!VAR_5) {
        FUNC_4(VAR_2,"%d: Cannot display message for error %d, status %d\n",
                FUNC_5(), VAR_4, FUNC_1());
        FUNC_3(1);
    }
    FUNC_6(VAR_3);
    FUNC_2(VAR_3);
    FUNC_3(1);
}
