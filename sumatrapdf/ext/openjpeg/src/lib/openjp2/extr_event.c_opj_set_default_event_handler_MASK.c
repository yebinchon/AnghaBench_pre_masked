
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_error_data; int m_warning_data; int m_info_data; void* warning_handler; void* info_handler; void* error_handler; } ;
typedef TYPE_1__ opj_event_mgr_t ;


 void* VAR_0 ;

void FUNC_0(opj_event_mgr_t * VAR_1)
{
    VAR_1->m_error_data = 00;
    VAR_1->m_warning_data = 00;
    VAR_1->m_info_data = 00;
    VAR_1->error_handler = VAR_0;
    VAR_1->info_handler = VAR_0;
    VAR_1->warning_handler = VAR_0;
}
