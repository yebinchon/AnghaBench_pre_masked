
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTitle ;
typedef int strErrorText ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int *,int *,int) ;
 int * FUNC_7 (int,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;

void FUNC_8(void)
{
    DWORD VAR_11;
    WCHAR VAR_12[260];
    WCHAR VAR_13[256];

    VAR_11 = FUNC_3();

    if (VAR_11 == 0)
        return;

    VAR_10 = FUNC_7(VAR_6|VAR_7, VAR_1, VAR_11);
    if (!VAR_10) {
        FUNC_2(VAR_12, sizeof(VAR_12) / sizeof(WCHAR));
        FUNC_4(VAR_8, VAR_3, VAR_13, sizeof(VAR_13) / sizeof(WCHAR));
        FUNC_6(VAR_9, VAR_12, VAR_13, VAR_5|VAR_4);
        return;
    }
    FUNC_1(VAR_8, FUNC_5(VAR_2), VAR_9, VAR_0);
    if (VAR_10) {
        FUNC_0(VAR_10);
        VAR_10 = ((void*)0);
    }
}
