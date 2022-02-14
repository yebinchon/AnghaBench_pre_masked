
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct opj_event_mgr {int dummy; } ;
struct TYPE_4__ {int (* m_opj_seek ) (TYPE_1__*,scalar_t__,struct opj_event_mgr*) ;} ;
typedef TYPE_1__ opj_stream_private_t ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BOOL ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,struct opj_event_mgr*) ;

OPJ_BOOL FUNC_2(opj_stream_private_t * VAR_0, OPJ_OFF_T VAR_1,
                         struct opj_event_mgr * VAR_2)
{
    FUNC_0(VAR_1 >= 0);
    return VAR_0->m_opj_seek(VAR_0, VAR_1, VAR_2);
}
