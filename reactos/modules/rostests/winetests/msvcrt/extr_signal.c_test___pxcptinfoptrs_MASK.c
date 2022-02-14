
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 () ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    void **VAR_4 = FUNC_0();
    int VAR_5;

    FUNC_1(VAR_4 != ((void*)0), "ret == NULL\n");
    FUNC_1(*VAR_4 == ((void*)0), "*ret != NULL\n");

    VAR_3 = 0;

    *VAR_4 = (void*)0xdeadbeef;
    FUNC_3(VAR_1, VAR_2);
    VAR_5 = FUNC_2(VAR_1);
    FUNC_1(VAR_5 == 0, "failed to raise SIGSEGV\n");
    FUNC_1(*VAR_4 == (void*)0xdeadbeef, "*ret = %p\n", *VAR_4);

    FUNC_3(VAR_0, VAR_2);
    VAR_5 = FUNC_2(VAR_0);
    FUNC_1(VAR_5 == 0, "failed to raise SIGBREAK\n");
    FUNC_1(*VAR_4 == (void*)0xdeadbeef, "*ret = %p\n", *VAR_4);

    FUNC_1(VAR_3 == 2, "test_value = %d\n", VAR_3);
}
