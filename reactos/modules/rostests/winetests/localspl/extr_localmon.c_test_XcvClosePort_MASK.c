
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,char*,scalar_t__,int ,...) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_3;
    HANDLE VAR_4;


    if (0)
    {

        FUNC_3(((void*)0));
        FUNC_3(VAR_0);
    }


    FUNC_1(0xdeadbeef);
    VAR_4 = (HANDLE) 0xdeadbeef;
    VAR_3 = FUNC_4(VAR_2, VAR_1, &VAR_4);
    FUNC_2(VAR_3, "returned %d with %u and %p (expected '!= 0')\n", VAR_3, FUNC_0(), VAR_4);

    if (VAR_3) {
        FUNC_1(0xdeadbeef);
        VAR_3 = FUNC_3(VAR_4);
        FUNC_2(VAR_3, "returned %d with %u (expected '!= 0')\n", VAR_3, FUNC_0());

        if (0)
        {

            FUNC_3(VAR_4);
        }
    }
}
