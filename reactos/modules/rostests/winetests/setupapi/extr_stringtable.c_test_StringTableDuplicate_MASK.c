
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HSTRING_TABLE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
    HSTRING_TABLE VAR_0, VAR_1;

    VAR_0 = FUNC_3();
    FUNC_0(VAR_0 != ((void*)0),"Failed to Initialize String Table\n");

    VAR_1=FUNC_2(VAR_0);
    FUNC_0(VAR_1!=((void*)0),"Failed to duplicate String Table\n");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
}
