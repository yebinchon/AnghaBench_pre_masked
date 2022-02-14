
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_byte_offset; scalar_t__ m_user_data_length; } ;
typedef TYPE_1__ opj_stream_private_t ;
typedef scalar_t__ OPJ_UINT64 ;
typedef scalar_t__ OPJ_OFF_T ;


 int FUNC_0 (int) ;

OPJ_OFF_T FUNC_1(const opj_stream_private_t * VAR_0)
{
    FUNC_0(VAR_0->m_byte_offset >= 0);
    FUNC_0(VAR_0->m_user_data_length >= (OPJ_UINT64)VAR_0->m_byte_offset);
    return VAR_0->m_user_data_length ?
           (OPJ_OFF_T)(VAR_0->m_user_data_length) - VAR_0->m_byte_offset :
           0;
}
