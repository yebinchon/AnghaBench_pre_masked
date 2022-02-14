
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef void* (* PTHREADFUNC ) (void*) ;


 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (void (*) (void*),int ,void*) ;
 int FUNC_2 (int *,int *,void* (*) (void*),void*) ;

size_t
FUNC_3(
    void (*VAR_0)(void*),
    unsigned VAR_1,
    void *VAR_2)
{




    typedef void *(*PTHREADFUNC)(void*);
    pthread_t VAR_3 = 0;
    FUNC_2(
                          &VAR_3,
                          ((void*)0),
                          (PTHREADFUNC)VAR_0,
                          VAR_2);
    return (size_t)VAR_3;

}
