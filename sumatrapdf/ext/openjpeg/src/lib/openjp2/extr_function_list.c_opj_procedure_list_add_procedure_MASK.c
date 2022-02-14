
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_nb_max_procedures; int m_nb_procedures; int * m_procedures; } ;
typedef TYPE_1__ opj_procedure_list_t ;
typedef int opj_procedure ;
typedef int opj_event_mgr_t ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;

OPJ_BOOL FUNC_4(opj_procedure_list_t *
        VAR_4, opj_procedure VAR_5, opj_event_mgr_t* VAR_6)
{

    FUNC_0(VAR_6 != ((void*)0));

    if (VAR_4->m_nb_max_procedures ==
            VAR_4->m_nb_procedures) {
        opj_procedure * VAR_7;

        VAR_4->m_nb_max_procedures += VAR_3;
        VAR_7 = (opj_procedure*)FUNC_3(
                             VAR_4->m_procedures,
                             VAR_4->m_nb_max_procedures * sizeof(opj_procedure));
        if (! VAR_7) {
            FUNC_2(VAR_4->m_procedures);
            VAR_4->m_nb_max_procedures = 0;
            VAR_4->m_nb_procedures = 0;
            FUNC_1(VAR_6, VAR_0,
                          "Not enough memory to add a new validation procedure\n");
            return VAR_1;
        } else {
            VAR_4->m_procedures = VAR_7;
        }
    }
    VAR_4->m_procedures[VAR_4->m_nb_procedures] =
        VAR_5;
    ++VAR_4->m_nb_procedures;

    return VAR_2;
}
