
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_5__ {int m_procedure_list; } ;
typedef TYPE_1__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

OPJ_BOOL FUNC_2(opj_j2k_t *VAR_2,
                              opj_stream_private_t *VAR_3,
                              opj_event_mgr_t * VAR_4)
{

    if (! FUNC_1(VAR_2, VAR_4)) {
        return VAR_0;
    }

    if (! FUNC_0(VAR_2, VAR_2->m_procedure_list, VAR_3, VAR_4)) {
        return VAR_0;
    }

    return VAR_1;
}
