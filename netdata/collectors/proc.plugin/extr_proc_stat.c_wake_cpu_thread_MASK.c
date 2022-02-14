
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void* FUNC_6(void* VAR_0) {
    pthread_t VAR_1;
    cpu_set_t VAR_2;
    static size_t VAR_3 = 0;
    static int VAR_4 = 0;

    FUNC_1(&VAR_2);
    FUNC_0(*(int*)VAR_0, &VAR_2);

    VAR_1 = FUNC_3();
    if(FUNC_5(FUNC_4(VAR_1, sizeof(cpu_set_t), &VAR_2))) {
        if(FUNC_5(VAR_4 < 8)) {
            FUNC_2("Cannot set CPU affinity for core %d", *(int*)VAR_0);
            VAR_4++;
        }
        else if(FUNC_5(VAR_4 < 9)) {
            FUNC_2("CPU affinity errors are disabled");
            VAR_4++;
        }
    }


    VAR_3++;

    return 0;
}
