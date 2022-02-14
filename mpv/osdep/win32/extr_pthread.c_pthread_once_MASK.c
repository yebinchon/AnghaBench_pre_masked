
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_once_t ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,scalar_t__*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;

int FUNC_3(pthread_once_t *VAR_0, void (*VAR_1)(void))
{
    BOOL VAR_2;
    if (!FUNC_0(VAR_0, 0, &VAR_2, ((void*)0)))
        FUNC_2();
    if (VAR_2) {
        VAR_1();
        FUNC_1(VAR_0, 0, ((void*)0));
    }
    return 0;
}
