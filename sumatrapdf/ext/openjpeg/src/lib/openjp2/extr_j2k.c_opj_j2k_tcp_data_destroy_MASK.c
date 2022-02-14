
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_data_size; int * m_data; } ;
typedef TYPE_1__ opj_tcp_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(opj_tcp_t *VAR_0)
{
    if (VAR_0->m_data) {
        FUNC_0(VAR_0->m_data);
        VAR_0->m_data = ((void*)0);
        VAR_0->m_data_size = 0;
    }
}
