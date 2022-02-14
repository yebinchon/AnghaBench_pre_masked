
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint32_t ;



__attribute__((used)) static zip_uint32_t
FUNC_0(zip_uint32_t VAR_0)
{
    if (VAR_0 < 0x0080)
 return 1;
    if (VAR_0 < 0x0800)
 return 2;
    if (VAR_0 < 0x10000)
 return 3;
    return 4;
}
