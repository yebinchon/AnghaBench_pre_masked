
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint32_t ;



zip_uint32_t
FUNC_0(const zip_uint8_t **VAR_0)
{
    zip_uint32_t VAR_1;

    VAR_1 = ((((((zip_uint32_t)(*VAR_0)[3]<<8)+(*VAR_0)[2])<<8)+(*VAR_0)[1])<<8)+(*VAR_0)[0];
    *VAR_0 += 4;

    return VAR_1;
}
