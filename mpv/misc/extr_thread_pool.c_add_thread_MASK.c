
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_thread_pool {int num_threads; int threads; } ;
typedef int pthread_t ;


 int FUNC_0 (struct mp_thread_pool*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,struct mp_thread_pool*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct mp_thread_pool *VAR_1)
{
    pthread_t VAR_2;

    if (FUNC_1(&VAR_2, ((void*)0), VAR_0, VAR_1) != 0)
        return 0;

    FUNC_0(VAR_1, VAR_1->threads, VAR_1->num_threads, VAR_2);
    return 1;
}
