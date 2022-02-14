
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint32_t ;



void
FUNC_0(zip_uint32_t VAR_0, zip_uint8_t **VAR_1)
{
    *((*VAR_1)++) = VAR_0&0xff;
    *((*VAR_1)++) = (VAR_0>>8)&0xff;
    *((*VAR_1)++) = (VAR_0>>16)&0xff;
    *((*VAR_1)++) = (VAR_0>>24)&0xff;
}
