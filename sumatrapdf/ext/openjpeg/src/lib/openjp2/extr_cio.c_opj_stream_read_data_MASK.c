
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_bytes_in_buffer; int m_status; scalar_t__ m_buffer_size; scalar_t__ (* m_read_fn ) (int *,scalar_t__,int ) ;int * m_stored_data; int * m_current_data; int m_byte_offset; int m_user_data; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;

OPJ_SIZE_T FUNC_4(opj_stream_private_t * VAR_2,
                                OPJ_BYTE * VAR_3, OPJ_SIZE_T VAR_4, opj_event_mgr_t * VAR_5)
{
    OPJ_SIZE_T VAR_6 = 0;
    if (VAR_2->m_bytes_in_buffer >= VAR_4) {
        FUNC_0(VAR_3, VAR_2->m_current_data, VAR_4);
        VAR_2->m_current_data += VAR_4;
        VAR_2->m_bytes_in_buffer -= VAR_4;
        VAR_6 += VAR_4;
        VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_4;
        return VAR_6;
    }


    if (VAR_2->m_status & VAR_1) {
        VAR_6 += VAR_2->m_bytes_in_buffer;
        FUNC_0(VAR_3, VAR_2->m_current_data, VAR_2->m_bytes_in_buffer);
        VAR_2->m_current_data += VAR_2->m_bytes_in_buffer;
        VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
        VAR_2->m_bytes_in_buffer = 0;
        return VAR_6 ? VAR_6 : (OPJ_SIZE_T) - 1;
    }


    if (VAR_2->m_bytes_in_buffer) {
        VAR_6 += VAR_2->m_bytes_in_buffer;
        FUNC_0(VAR_3, VAR_2->m_current_data, VAR_2->m_bytes_in_buffer);
        VAR_2->m_current_data = VAR_2->m_stored_data;
        VAR_3 += VAR_2->m_bytes_in_buffer;
        VAR_4 -= VAR_2->m_bytes_in_buffer;
        VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
        VAR_2->m_bytes_in_buffer = 0;
    } else {



        VAR_2->m_current_data = VAR_2->m_stored_data;
    }

    for (;;) {

        if (VAR_4 < VAR_2->m_buffer_size) {

            VAR_2->m_bytes_in_buffer = VAR_2->m_read_fn(VAR_2->m_stored_data,
                                          VAR_2->m_buffer_size, VAR_2->m_user_data);

            if (VAR_2->m_bytes_in_buffer == (OPJ_SIZE_T) - 1) {

                FUNC_1(VAR_5, VAR_0, "Stream reached its end !\n");

                VAR_2->m_bytes_in_buffer = 0;
                VAR_2->m_status |= VAR_1;

                return VAR_6 ? VAR_6 : (OPJ_SIZE_T) - 1;
            } else if (VAR_2->m_bytes_in_buffer < VAR_4) {

                VAR_6 += VAR_2->m_bytes_in_buffer;
                FUNC_0(VAR_3, VAR_2->m_current_data, VAR_2->m_bytes_in_buffer);
                VAR_2->m_current_data = VAR_2->m_stored_data;
                VAR_3 += VAR_2->m_bytes_in_buffer;
                VAR_4 -= VAR_2->m_bytes_in_buffer;
                VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
                VAR_2->m_bytes_in_buffer = 0;
            } else {
                VAR_6 += VAR_4;
                FUNC_0(VAR_3, VAR_2->m_current_data, VAR_4);
                VAR_2->m_current_data += VAR_4;
                VAR_2->m_bytes_in_buffer -= VAR_4;
                VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_4;
                return VAR_6;
            }
        } else {

            VAR_2->m_bytes_in_buffer = VAR_2->m_read_fn(VAR_3, VAR_4,
                                          VAR_2->m_user_data);

            if (VAR_2->m_bytes_in_buffer == (OPJ_SIZE_T) - 1) {

                FUNC_1(VAR_5, VAR_0, "Stream reached its end !\n");

                VAR_2->m_bytes_in_buffer = 0;
                VAR_2->m_status |= VAR_1;

                return VAR_6 ? VAR_6 : (OPJ_SIZE_T) - 1;
            } else if (VAR_2->m_bytes_in_buffer < VAR_4) {

                VAR_6 += VAR_2->m_bytes_in_buffer;
                VAR_2->m_current_data = VAR_2->m_stored_data;
                VAR_3 += VAR_2->m_bytes_in_buffer;
                VAR_4 -= VAR_2->m_bytes_in_buffer;
                VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
                VAR_2->m_bytes_in_buffer = 0;
            } else {

                VAR_6 += VAR_2->m_bytes_in_buffer;
                VAR_2->m_byte_offset += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
                VAR_2->m_current_data = VAR_2->m_stored_data;
                VAR_2->m_bytes_in_buffer = 0;
                return VAR_6;
            }
        }
    }
}
