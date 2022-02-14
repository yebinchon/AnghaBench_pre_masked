
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*) ;

void FUNC_9(void) {
    pthread_attr_t VAR_10;
    pthread_t VAR_11;
    size_t VAR_12;
    int VAR_13;


    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        FUNC_7(&VAR_5[VAR_13],((void*)0));
        FUNC_5(&VAR_6[VAR_13],((void*)0));
        FUNC_5(&VAR_8[VAR_13],((void*)0));
        VAR_4[VAR_13] = FUNC_1();
        VAR_7[VAR_13] = 0;
    }


    FUNC_3(&VAR_10);
    FUNC_2(&VAR_10,&VAR_12);
    if (!VAR_12) VAR_12 = 1;
    while (VAR_12 < VAR_2) VAR_12 *= 2;
    FUNC_4(&VAR_10, VAR_12);




    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        void *VAR_14 = (void*)(unsigned long) VAR_13;
        if (FUNC_6(&VAR_11,&VAR_10,VAR_3,VAR_14) != 0) {
            FUNC_8(VAR_1,"Fatal: Can't initialize Background Jobs.");
            FUNC_0(1);
        }
        VAR_9[VAR_13] = VAR_11;
    }
}
