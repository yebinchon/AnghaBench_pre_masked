
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint64_t ;



void
FUNC_0(zip_uint64_t VAR_0, zip_uint8_t **VAR_1)
{
    *((*VAR_1)++) = VAR_0&0xff;
    *((*VAR_1)++) = (VAR_0>>8)&0xff;
    *((*VAR_1)++) = (VAR_0>>16)&0xff;
    *((*VAR_1)++) = (VAR_0>>24)&0xff;
    *((*VAR_1)++) = (VAR_0>>32)&0xff;
    *((*VAR_1)++) = (VAR_0>>40)&0xff;
    *((*VAR_1)++) = (VAR_0>>48)&0xff;
    *((*VAR_1)++) = (VAR_0>>56)&0xff;
}
