
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * m_tp; } ;
typedef TYPE_1__ opj_j2k_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

OPJ_BOOL FUNC_3(opj_j2k_t *VAR_3, OPJ_UINT32 VAR_4)
{
    if (FUNC_0()) {
        FUNC_2(VAR_3->m_tp);
        VAR_3->m_tp = ((void*)0);
        if (VAR_4 <= (OPJ_UINT32)VAR_0) {
            VAR_3->m_tp = FUNC_1((int)VAR_4);
        }
        if (VAR_3->m_tp == ((void*)0)) {
            VAR_3->m_tp = FUNC_1(0);
            return VAR_1;
        }
        return VAR_2;
    }
    return VAR_1;
}
