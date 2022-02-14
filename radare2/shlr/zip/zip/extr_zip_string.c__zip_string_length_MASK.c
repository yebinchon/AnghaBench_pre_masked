
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint16_t ;
struct zip_string {int length; } ;



zip_uint16_t
FUNC_0(const struct zip_string *VAR_0)
{
    if (VAR_0 == ((void*)0))
 return 0;

    return VAR_0->length;
}
