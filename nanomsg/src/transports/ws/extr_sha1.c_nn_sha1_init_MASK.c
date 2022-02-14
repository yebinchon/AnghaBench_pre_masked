
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nn_sha1 {char is_little_endian; int* state; scalar_t__ buffer_offset; scalar_t__ bytes_hashed; } ;



void FUNC_0 (struct nn_sha1 *VAR_0)
{

    union {
        uint32_t i;
        char c[4];
    } VAR_1 = { 0x00000001 };

    VAR_0->is_little_endian = VAR_1.c[0];


    VAR_0->state [0] = 0x67452301;
    VAR_0->state [1] = 0xefcdab89;
    VAR_0->state [2] = 0x98badcfe;
    VAR_0->state [3] = 0x10325476;
    VAR_0->state [4] = 0xc3d2e1f0;
    VAR_0->bytes_hashed = 0;
    VAR_0->buffer_offset = 0;
}
