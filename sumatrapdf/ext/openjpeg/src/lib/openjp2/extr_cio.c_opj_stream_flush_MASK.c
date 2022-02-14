
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_bytes_in_buffer; scalar_t__ (* m_write_fn ) (int ,scalar_t__,int ) ;int m_stored_data; int m_current_data; int m_status; int m_user_data; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

OPJ_BOOL FUNC_2(opj_stream_private_t * VAR_4,
                          opj_event_mgr_t * VAR_5)
{

    OPJ_SIZE_T VAR_6 = 0;

    VAR_4->m_current_data = VAR_4->m_stored_data;

    while (VAR_4->m_bytes_in_buffer) {

        VAR_6 = VAR_4->m_write_fn(VAR_4->m_current_data,
                                   VAR_4->m_bytes_in_buffer,
                                   VAR_4->m_user_data);

        if (VAR_6 == (OPJ_SIZE_T) - 1) {
            VAR_4->m_status |= VAR_2;
            FUNC_0(VAR_5, VAR_0, "Error on writing stream!\n");

            return VAR_1;
        }

        VAR_4->m_current_data += VAR_6;
        VAR_4->m_bytes_in_buffer -= VAR_6;
    }

    VAR_4->m_current_data = VAR_4->m_stored_data;

    return VAR_3;
}
