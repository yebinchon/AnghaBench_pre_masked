
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT_PTR ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 void* FUNC_5 (void*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    void *VAR_0;
    int VAR_1;

    if(sizeof(void*) == 8) {
        FUNC_4(!FUNC_1(0), "_set_sbh_threshold succeeded\n");
        FUNC_4(!FUNC_1(1000), "_set_sbh_threshold succeeded\n");
        return;
    }

    VAR_0 = FUNC_3(1);
    FUNC_4(VAR_0 != ((void*)0), "malloc failed\n");

    FUNC_4(FUNC_1(1), "_set_sbh_threshold failed\n");
    VAR_1 = FUNC_0();
    FUNC_4(VAR_1 == 16, "threshold = %d\n", VAR_1);

    FUNC_4(FUNC_1(8), "_set_sbh_threshold failed\n");
    VAR_1 = FUNC_0();
    FUNC_4(VAR_1 == 16, "threshold = %d\n", VAR_1);

    FUNC_4(FUNC_1(1000), "_set_sbh_threshold failed\n");
    VAR_1 = FUNC_0();
    FUNC_4(VAR_1 == 1008, "threshold = %d\n", VAR_1);

    FUNC_2(VAR_0);

    VAR_0 = FUNC_3(1);
    FUNC_4(VAR_0 != ((void*)0), "malloc failed\n");
    FUNC_4(!((UINT_PTR)VAR_0 & 0xf), "incorrect alignment (%p)\n", VAR_0);

    VAR_0 = FUNC_5(VAR_0, 10);
    FUNC_4(VAR_0 != ((void*)0), "realloc failed\n");
    FUNC_4(!((UINT_PTR)VAR_0 & 0xf), "incorrect alignment (%p)\n", VAR_0);

    FUNC_4(FUNC_1(0), "_set_sbh_threshold failed\n");
    VAR_1 = FUNC_0();
    FUNC_4(VAR_1 == 0, "threshold = %d\n", VAR_1);

    FUNC_2(VAR_0);
}
