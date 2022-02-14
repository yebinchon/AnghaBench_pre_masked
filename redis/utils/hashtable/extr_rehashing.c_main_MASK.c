
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dict ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,void*,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int*,int*) ;
 int FUNC_10 (int *) ;

int FUNC_11(void) {
    dict *VAR_3 = FUNC_1(&VAR_2,((void*)0));
    unsigned long VAR_4;
    FUNC_8(FUNC_10(((void*)0)));

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_0(VAR_3,(void*)VAR_4,((void*)0));
        FUNC_7(VAR_3);
    }
    FUNC_6("Size: %d\n", (int)FUNC_5(VAR_3));

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_2(VAR_3,(void*)VAR_4);
        FUNC_4(VAR_3);
        FUNC_7(VAR_3);
    }
    FUNC_3(VAR_3);

    VAR_3 = FUNC_1(&VAR_2,((void*)0));

    FUNC_6("Stress testing dictGetSomeKeys\n");
    int VAR_5 = 0, VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_0(VAR_3,(void*)VAR_4,((void*)0));
        FUNC_9(VAR_3,100,&VAR_5,&VAR_6);
    }

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_2(VAR_3,(void*)VAR_4);
        FUNC_4(VAR_3);
        FUNC_9(VAR_3,100,&VAR_5,&VAR_6);
    }

    FUNC_6("dictGetSomeKey, %d perfect runs, %d approximated runs\n",
        VAR_5, VAR_6);

    FUNC_3(VAR_3);

    FUNC_6("TEST PASSED!\n");
    return 0;
}
