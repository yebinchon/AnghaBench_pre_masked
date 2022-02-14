
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_2;


    if (!&FUNC_3) return;

    if (0)
    {

        FUNC_3(((void*)0), 0, ((void*)0));
    }






    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(((void*)0), 0, VAR_1);
    FUNC_2(!VAR_2, "returned %d with %u (expected '0')\n", VAR_2, FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(((void*)0), 0, VAR_0);
    FUNC_2(!VAR_2, "returned %d with %u (expected '0')\n", VAR_2, FUNC_0());

}
