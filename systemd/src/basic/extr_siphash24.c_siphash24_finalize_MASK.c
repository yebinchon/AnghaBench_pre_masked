
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct siphash {int padding; int v0; int v1; int v2; int v3; scalar_t__ inlen; } ;


 int FUNC_0 (struct siphash*) ;
 int FUNC_1 (char*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct siphash*) ;

uint64_t FUNC_3(struct siphash *VAR_0) {
        uint64_t VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = VAR_0->padding | (((uint64_t) VAR_0->inlen) << 56);
        VAR_0->v3 ^= VAR_1;
        FUNC_2(VAR_0);
        FUNC_2(VAR_0);
        VAR_0->v0 ^= VAR_1;







        VAR_0->v2 ^= 0xff;

        FUNC_2(VAR_0);
        FUNC_2(VAR_0);
        FUNC_2(VAR_0);
        FUNC_2(VAR_0);

        return VAR_0->v0 ^ VAR_0->v1 ^ VAR_0->v2 ^ VAR_0->v3;
}
