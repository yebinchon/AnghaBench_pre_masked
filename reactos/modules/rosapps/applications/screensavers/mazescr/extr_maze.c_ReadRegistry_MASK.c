
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef void* DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,void**,int ,void**) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_5()
{
    LONG VAR_8;
    HKEY VAR_9;
    DWORD VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    FUNC_3();

    VAR_8 = FUNC_1(VAR_1, VAR_5, 0, VAR_2, &VAR_9);
    if(VAR_8 != VAR_0)
        return;

    VAR_11 = sizeof(DWORD);

    VAR_8 = FUNC_2(VAR_9, FUNC_4("size"), ((void*)0), &VAR_10, (LPBYTE)&VAR_12, &VAR_11);
    if(VAR_8 == VAR_0)
        VAR_6 = VAR_12;
    VAR_8 = FUNC_2(VAR_9, FUNC_4("pre_solve_delay"), ((void*)0), &VAR_10, (LPBYTE)&VAR_13, &VAR_11);
    if(VAR_8 == VAR_0)
        VAR_4 = VAR_13;
    VAR_8 = FUNC_2(VAR_9, FUNC_4("post_solve_delay"), ((void*)0), &VAR_10, (LPBYTE)&VAR_14, &VAR_11);
    if(VAR_8 == VAR_0)
        VAR_3 = VAR_14;
    VAR_8 = FUNC_2(VAR_9, FUNC_4("solve_delay"), ((void*)0), &VAR_10, (LPBYTE)&VAR_15, &VAR_11);
    if(VAR_8 == VAR_0)
        VAR_7 = VAR_15;

    FUNC_0(VAR_9);
}
