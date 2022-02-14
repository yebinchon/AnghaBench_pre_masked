
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* HANDLE ;
typedef int BOOL ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,void**,int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_2 = 0;
    BOOL VAR_3;


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0(((void*)0));
    FUNC_5(!VAR_3 && (FUNC_1() == VAR_0),
        "got %d with %d (expected FALSE with ERROR_INVALID_HANDLE)\n",
        VAR_3, FUNC_1());


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0( (void *) -1);
    if (FUNC_4(VAR_3, FUNC_1())) return;
    FUNC_5(!VAR_3 && (FUNC_1() == VAR_0),
        "got %d with %d (expected FALSE with ERROR_INVALID_HANDLE)\n",
         VAR_3, FUNC_1());



    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_2(VAR_1, &VAR_2, ((void*)0));
    if (FUNC_4(VAR_3, FUNC_1())) return;
    if (VAR_3)
    {
        FUNC_3(0xdeadbeef);
        VAR_3 = FUNC_0(VAR_2);
        FUNC_5(VAR_3, "got %d with %d (expected TRUE)\n", VAR_3, FUNC_1());



        FUNC_3(0xdeadbeef);
        VAR_3 = FUNC_0(VAR_2);
        FUNC_5(!VAR_3 && (FUNC_1() == VAR_0),
            "got %d with %d (expected FALSE with ERROR_INVALID_HANDLE)\n",
            VAR_3, FUNC_1());

    }
}
