
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_byte_offset; int m_status; int m_user_data; int (* m_seek_fn ) (int ,int ) ;scalar_t__ m_bytes_in_buffer; int m_stored_data; int m_current_data; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef int OPJ_OFF_T ;
typedef int OPJ_BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

OPJ_BOOL FUNC_2(opj_stream_private_t * VAR_3, OPJ_OFF_T VAR_4,
                              opj_event_mgr_t * VAR_5)
{
    FUNC_0(VAR_5);
    VAR_3->m_current_data = VAR_3->m_stored_data;
    VAR_3->m_bytes_in_buffer = 0;

    if (!(VAR_3->m_seek_fn(VAR_4, VAR_3->m_user_data))) {
        VAR_3->m_status |= VAR_1;
        return VAR_0;
    } else {

        VAR_3->m_status &= (~VAR_1);
        VAR_3->m_byte_offset = VAR_4;

    }

    return VAR_2;
}
