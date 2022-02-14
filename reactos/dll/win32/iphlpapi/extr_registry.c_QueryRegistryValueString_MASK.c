
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PWCHAR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int *,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 (int *,scalar_t__) ;

PWCHAR FUNC_5( HANDLE VAR_1, PWCHAR VAR_2 )
{
    PWCHAR VAR_3, VAR_4;
    DWORD VAR_5, VAR_6;

    VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_5, &VAR_6);
    if (!VAR_3) return ((void*)0);
    if (VAR_5 != VAR_0)
    {
        FUNC_0("Type mismatch for %S (%d != %d)\n", VAR_2, VAR_5, VAR_0);


    }

    VAR_4 = FUNC_4(VAR_3, VAR_6);
    FUNC_2(FUNC_1(), 0, VAR_3);
    if (!VAR_4) return ((void*)0);

    return VAR_4;
}
