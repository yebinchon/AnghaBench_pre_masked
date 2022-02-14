
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(HWND VAR_6)
{
    HANDLE VAR_7;

    (void)FUNC_2(VAR_6);

    VAR_7 = FUNC_3(VAR_1 | VAR_2, VAR_0, FUNC_1());
    if (!VAR_7) return;
    FUNC_4(VAR_6, VAR_4, VAR_0, 0);
    FUNC_5(VAR_7, VAR_5, (void*)VAR_6, VAR_3);
    FUNC_4(VAR_6, VAR_4, VAR_3, 0);
    FUNC_0(VAR_7);
}
