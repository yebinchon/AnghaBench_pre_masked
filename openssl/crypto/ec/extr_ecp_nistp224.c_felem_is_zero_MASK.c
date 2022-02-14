
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zero ;
typedef scalar_t__ two225m97p2 ;
typedef scalar_t__ two224m96p1 ;
typedef int limb ;
typedef int int64_t ;
typedef int* felem ;



__attribute__((used)) static limb FUNC_0(const felem VAR_0)
{
    limb VAR_1, VAR_2, VAR_3;

    VAR_1 = VAR_0[0] | VAR_0[1] | VAR_0[2] | VAR_0[3];
    VAR_1 = (((int64_t) (VAR_1) - 1) >> 63) & 1;
    VAR_2 = (VAR_0[0] ^ 1) | (VAR_0[1] ^ 0x00ffff0000000000)
        | (VAR_0[2] ^ 0x00ffffffffffffff) | (VAR_0[3] ^ 0x00ffffffffffffff);
    VAR_2 = (((int64_t) (VAR_2) - 1) >> 63) & 1;
    VAR_3 = (VAR_0[0] ^ 2) | (VAR_0[1] ^ 0x00fffe0000000000)
        | (VAR_0[2] ^ 0x00ffffffffffffff) | (VAR_0[3] ^ 0x01ffffffffffffff);
    VAR_3 = (((int64_t) (VAR_3) - 1) >> 63) & 1;
    return (VAR_1 | VAR_2 | VAR_3);
}
