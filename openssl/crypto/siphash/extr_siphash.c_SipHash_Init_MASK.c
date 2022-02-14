
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ hash_size; int crounds; int drounds; int v0; int v1; int v2; int v3; scalar_t__ total_inlen; scalar_t__ len; } ;
typedef TYPE_1__ SIPHASH ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(SIPHASH *VAR_3, const unsigned char *VAR_4, int VAR_5, int VAR_6)
{
    uint64_t VAR_7 = FUNC_0(VAR_4);
    uint64_t VAR_8 = FUNC_0(VAR_4 + 8);


    VAR_3->hash_size = FUNC_1(VAR_3->hash_size);

    if (VAR_6 == 0)
        VAR_6 = VAR_1;
    if (VAR_5 == 0)
        VAR_5 = VAR_0;

    VAR_3->crounds = VAR_5;
    VAR_3->drounds = VAR_6;

    VAR_3->len = 0;
    VAR_3->total_inlen = 0;

    VAR_3->v0 = 0x736f6d6570736575ULL ^ VAR_7;
    VAR_3->v1 = 0x646f72616e646f6dULL ^ VAR_8;
    VAR_3->v2 = 0x6c7967656e657261ULL ^ VAR_7;
    VAR_3->v3 = 0x7465646279746573ULL ^ VAR_8;

    if (VAR_3->hash_size == VAR_2)
        VAR_3->v1 ^= 0xee;

    return 1;
}
