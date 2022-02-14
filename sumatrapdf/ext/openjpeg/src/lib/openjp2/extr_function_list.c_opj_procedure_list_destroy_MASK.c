
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* m_procedures; } ;
typedef TYPE_1__ opj_procedure_list_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(opj_procedure_list_t * VAR_0)
{
    if (! VAR_0) {
        return;
    }

    if (VAR_0->m_procedures) {
        FUNC_0(VAR_0->m_procedures);
    }
    FUNC_0(VAR_0);
}
