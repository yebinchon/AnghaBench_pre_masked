
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_thread_info {struct m_thread_info* handle; } ;
typedef int pthread_t ;


 int FUNC_0 (struct m_thread_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct m_thread_info*) ;
 struct m_thread_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_0 ;

int FUNC_8(pthread_t VAR_1)
{
    if (!FUNC_4(VAR_1, FUNC_7()))
        FUNC_1();

    FUNC_5(&VAR_0);
    struct m_thread_info *VAR_2 = FUNC_3(VAR_1);
    FUNC_2(VAR_2);
    FUNC_2(VAR_2->handle);
    FUNC_0(VAR_2->handle);
    VAR_2->handle = ((void*)0);
    FUNC_6(&VAR_0);

    return 0;
}
