
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {int len; scalar_t__* n; } ;
typedef TYPE_1__ RSAPublicKey ;



__attribute__((used)) static void FUNC_0(const RSAPublicKey* VAR_0,
                 uint32_t* VAR_1) {
    int64_t VAR_2 = 0;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->len; ++VAR_3) {
        VAR_2 += (uint64_t)VAR_1[VAR_3] - VAR_0->n[VAR_3];
        VAR_1[VAR_3] = (uint32_t)VAR_2;
        VAR_2 >>= 32;
    }
}
