
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md4_ctx {int* hash; scalar_t__ byte_count; } ;



__attribute__((used)) static void FUNC_0(struct md4_ctx *VAR_0)
{
 VAR_0->hash[0] = 0x67452301;
 VAR_0->hash[1] = 0xefcdab89;
 VAR_0->hash[2] = 0x98badcfe;
 VAR_0->hash[3] = 0x10325476;
 VAR_0->byte_count = 0;
}
