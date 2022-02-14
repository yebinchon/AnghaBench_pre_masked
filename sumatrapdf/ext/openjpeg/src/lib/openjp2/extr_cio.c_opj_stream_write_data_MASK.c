
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_status; scalar_t__ m_buffer_size; scalar_t__ m_bytes_in_buffer; int m_byte_offset; int m_stored_data; int m_current_data; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;

OPJ_SIZE_T FUNC_2(opj_stream_private_t * VAR_1,
                                 const OPJ_BYTE * VAR_2,
                                 OPJ_SIZE_T VAR_3,
                                 opj_event_mgr_t * VAR_4)
{
    OPJ_SIZE_T VAR_5 = 0;
    OPJ_SIZE_T VAR_6 = 0;

    if (VAR_1->m_status & VAR_0) {
        return (OPJ_SIZE_T) - 1;
    }

    for (;;) {
        VAR_5 = VAR_1->m_buffer_size - VAR_1->m_bytes_in_buffer;


        if (VAR_5 >= VAR_3) {
            FUNC_0(VAR_1->m_current_data, VAR_2, VAR_3);

            VAR_1->m_current_data += VAR_3;
            VAR_1->m_bytes_in_buffer += VAR_3;
            VAR_6 += VAR_3;
            VAR_1->m_byte_offset += (OPJ_OFF_T)VAR_3;

            return VAR_6;
        }


        if (VAR_5) {
            VAR_6 += VAR_5;

            FUNC_0(VAR_1->m_current_data, VAR_2, VAR_5);

            VAR_1->m_current_data = VAR_1->m_stored_data;

            VAR_2 += VAR_5;
            VAR_3 -= VAR_5;
            VAR_1->m_bytes_in_buffer += VAR_5;
            VAR_1->m_byte_offset += (OPJ_OFF_T)VAR_5;
        }

        if (! FUNC_1(VAR_1, VAR_4)) {
            return (OPJ_SIZE_T) - 1;
        }
    }

}
