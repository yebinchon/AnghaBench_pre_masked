
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* m_opj_skip ) (TYPE_1__*,scalar_t__,int *) ;} ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_OFF_T ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int *) ;

OPJ_OFF_T FUNC_2(opj_stream_private_t * VAR_0, OPJ_OFF_T VAR_1,
                          opj_event_mgr_t * VAR_2)
{
    FUNC_0(VAR_1 >= 0);
    return VAR_0->m_opj_skip(VAR_0, VAR_1, VAR_2);
}
