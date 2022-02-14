
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ m_bytes_in_buffer; scalar_t__ m_byte_offset; int m_status; scalar_t__ m_user_data_length; scalar_t__ (* m_skip_fn ) (scalar_t__,int ) ;int m_user_data; int m_stored_data; int m_current_data; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT64 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_OFF_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

OPJ_OFF_T FUNC_4(opj_stream_private_t * VAR_2,
                               OPJ_OFF_T VAR_3, opj_event_mgr_t * VAR_4)
{
    OPJ_OFF_T VAR_5 = 0;
    OPJ_OFF_T VAR_6 = 0;

    FUNC_0(VAR_3 >= 0);

    if (VAR_2->m_bytes_in_buffer >= (OPJ_SIZE_T)VAR_3) {
        VAR_2->m_current_data += VAR_3;


        VAR_2->m_bytes_in_buffer -= (OPJ_SIZE_T)VAR_3;
        VAR_5 += VAR_3;
        VAR_2->m_byte_offset += VAR_5;
        return VAR_5;
    }


    if (VAR_2->m_status & VAR_1) {
        VAR_5 += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
        VAR_2->m_current_data += VAR_2->m_bytes_in_buffer;
        VAR_2->m_bytes_in_buffer = 0;
        VAR_2->m_byte_offset += VAR_5;
        return VAR_5 ? VAR_5 : (OPJ_OFF_T) - 1;
    }


    if (VAR_2->m_bytes_in_buffer) {
        VAR_5 += (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
        VAR_2->m_current_data = VAR_2->m_stored_data;
        VAR_3 -= (OPJ_OFF_T)VAR_2->m_bytes_in_buffer;
        VAR_2->m_bytes_in_buffer = 0;
    }

    while (VAR_3 > 0) {




        if ((OPJ_UINT64)(VAR_2->m_byte_offset + VAR_5 + VAR_3) >
                VAR_2->m_user_data_length) {
            FUNC_1(VAR_4, VAR_0, "Stream reached its end !\n");

            VAR_2->m_byte_offset += VAR_5;
            VAR_5 = (OPJ_OFF_T)(VAR_2->m_user_data_length -
                                          (OPJ_UINT64)VAR_2->m_byte_offset);

            FUNC_2(VAR_2, (OPJ_OFF_T)VAR_2->m_user_data_length,
                                 VAR_4);
            VAR_2->m_status |= VAR_1;


            return VAR_5 ? VAR_5 : (OPJ_OFF_T) - 1;
        }


        VAR_6 = VAR_2->m_skip_fn(VAR_3, VAR_2->m_user_data);
        if (VAR_6 == (OPJ_OFF_T) - 1) {
            FUNC_1(VAR_4, VAR_0, "Stream reached its end !\n");

            VAR_2->m_status |= VAR_1;
            VAR_2->m_byte_offset += VAR_5;

            return VAR_5 ? VAR_5 : (OPJ_OFF_T) - 1;
        }
        VAR_3 -= VAR_6;
        VAR_5 += VAR_6;
    }

    VAR_2->m_byte_offset += VAR_5;

    return VAR_5;
}
