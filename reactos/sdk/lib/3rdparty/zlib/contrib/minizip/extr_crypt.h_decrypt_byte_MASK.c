
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_crc_t ;



__attribute__((used)) static int FUNC_0(unsigned long* VAR_0, const z_crc_t* VAR_1)
{
    unsigned VAR_2;



    VAR_2 = ((unsigned)(*(VAR_0+2)) & 0xffff) | 2;
    return (int)(((VAR_2 * (VAR_2 ^ 1)) >> 8) & 0xff);
}
