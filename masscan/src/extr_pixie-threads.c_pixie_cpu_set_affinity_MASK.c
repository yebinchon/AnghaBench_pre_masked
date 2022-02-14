
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpu_set_t ;
typedef scalar_t__ DWORD_PTR ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,int *) ;
 int VAR_1 ;

void
FUNC_9(unsigned VAR_2)
{
    int VAR_3;
    pthread_t VAR_4 = FUNC_7();
    cpu_set_t VAR_5;

    FUNC_1(&VAR_5);

    FUNC_0(VAR_2+1, &VAR_5);

    VAR_3 = FUNC_8(VAR_4, sizeof(cpu_set_t), &VAR_5);
    if (VAR_3 != 0) {
        FUNC_6(VAR_1, "set_affinity: returned error linux:%d\n", VAR_0);
    }




}
