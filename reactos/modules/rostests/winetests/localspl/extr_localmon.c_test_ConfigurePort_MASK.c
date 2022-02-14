
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_4;


    if (!&FUNC_2) return;

    if (0)
    {

        FUNC_2(((void*)0), 0, ((void*)0));
    }
    if (VAR_3 > 0) {

        FUNC_1(0xdeadbeef);
        VAR_4 = FUNC_2(((void*)0), 0, VAR_0);
        FUNC_3("returned %d with %u\n", VAR_4, FUNC_0());

        FUNC_1(0xdeadbeef);
        VAR_4 = FUNC_2(((void*)0), 0, VAR_2);
        FUNC_3("returned %d with %u\n", VAR_4, FUNC_0());

        FUNC_1(0xdeadbeef);
        VAR_4 = FUNC_2(((void*)0), 0, VAR_1);
        FUNC_3("returned %d with %u\n", VAR_4, FUNC_0());
    }
}
