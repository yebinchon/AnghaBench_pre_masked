
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_attr_t ;
struct TYPE_2__ {int thread_id; } ;
typedef TYPE_1__ LIBEVENT_THREAD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void* (*) (void*),void*) ;
 int VAR_0 ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *(*VAR_1)(void *), void *VAR_2) {
    pthread_attr_t VAR_3;
    int VAR_4;

    FUNC_2(&VAR_3);

    if ((VAR_4 = FUNC_3(&((LIBEVENT_THREAD*)VAR_2)->thread_id, &VAR_3, VAR_1, VAR_2)) != 0) {
        FUNC_1(VAR_0, "Can't create thread: %s\n",
                FUNC_4(VAR_4));
        FUNC_0(1);
    }
}
