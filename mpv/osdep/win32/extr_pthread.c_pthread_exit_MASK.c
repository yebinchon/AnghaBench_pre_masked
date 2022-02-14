
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_thread_info {int handle; void* res; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_thread_info*) ;
 struct m_thread_info* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (struct m_thread_info*) ;

void FUNC_7(void *VAR_1)
{
    FUNC_3(&VAR_0);
    struct m_thread_info *VAR_2 = FUNC_2(FUNC_5());
    FUNC_1(VAR_2);
    VAR_2->res = VAR_1;
    if (!VAR_2->handle)
        FUNC_6(VAR_2);
    FUNC_4(&VAR_0);

    FUNC_0(0);
}
