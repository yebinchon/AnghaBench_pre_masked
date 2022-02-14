
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int FUNC_2 (scalar_t__,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_5;
    HANDLE VAR_6;


    if (0)
    {

        FUNC_4(((void*)0), VAR_0, &VAR_6);
        FUNC_4(VAR_2, VAR_0, ((void*)0));
    }



    FUNC_1(0xdeadbeef);
    VAR_6 = (HANDLE) 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_2, VAR_0, &VAR_6);
    FUNC_2(VAR_5, "returned %d with %u and %p (expected '!= 0')\n", VAR_5, FUNC_0(), VAR_6);
    if (VAR_5) FUNC_3(VAR_6);



    FUNC_1(0xdeadbeef);
    VAR_6 = (HANDLE) 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_2, 0, &VAR_6);
    FUNC_2(VAR_5, "returned %d with %u and %p (expected '!= 0')\n", VAR_5, FUNC_0(), VAR_6);
    if (VAR_5) FUNC_3(VAR_6);



    FUNC_1(0xdeadbeef);
    VAR_6 = (HANDLE) 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_4, VAR_1, &VAR_6);
    FUNC_2(VAR_5, "returned %d with %u and %p (expected '!= 0')\n", VAR_5, FUNC_0(), VAR_6);
    if (VAR_5) FUNC_3(VAR_6);

    FUNC_1(0xdeadbeef);
    VAR_6 = (HANDLE) 0xdeadbeef;
    VAR_5 = FUNC_4(VAR_3, VAR_1, &VAR_6);
    FUNC_2(VAR_5, "returned %d with %u and %p (expected '!= 0')\n", VAR_5, FUNC_0(), VAR_6);
    if (VAR_5) FUNC_3(VAR_6);

}
