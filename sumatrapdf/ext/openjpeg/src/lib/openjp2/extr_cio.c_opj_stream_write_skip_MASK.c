
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_status; scalar_t__ (* m_skip_fn ) (scalar_t__,int ) ;int m_byte_offset; int m_user_data; scalar_t__ m_bytes_in_buffer; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_OFF_T ;
typedef scalar_t__ OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

OPJ_OFF_T FUNC_3(opj_stream_private_t * VAR_2,
                                OPJ_OFF_T VAR_3, opj_event_mgr_t * VAR_4)
{
    OPJ_BOOL VAR_5 = 0;
    OPJ_OFF_T VAR_6 = 0;
    OPJ_OFF_T VAR_7 = 0;

    if (VAR_2->m_status & VAR_1) {
        return (OPJ_OFF_T) - 1;
    }


    VAR_5 = FUNC_1(VAR_2, VAR_4);
    if (! VAR_5) {
        VAR_2->m_status |= VAR_1;
        VAR_2->m_bytes_in_buffer = 0;
        return (OPJ_OFF_T) - 1;
    }


    while (VAR_3 > 0) {

        VAR_6 = VAR_2->m_skip_fn(VAR_3, VAR_2->m_user_data);

        if (VAR_6 == (OPJ_OFF_T) - 1) {
            FUNC_0(VAR_4, VAR_0, "Stream error!\n");

            VAR_2->m_status |= VAR_1;
            VAR_2->m_byte_offset += VAR_7;

            return VAR_7 ? VAR_7 : (OPJ_OFF_T) - 1;
        }
        VAR_3 -= VAR_6;
        VAR_7 += VAR_6;
    }

    VAR_2->m_byte_offset += VAR_7;

    return VAR_7;
}
