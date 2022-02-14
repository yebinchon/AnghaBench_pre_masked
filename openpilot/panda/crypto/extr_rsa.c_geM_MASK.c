
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int len; scalar_t__ const* n; } ;
typedef TYPE_1__ RSAPublicKey ;



__attribute__((used)) static int FUNC_0(const RSAPublicKey* VAR_0,
               const uint32_t* VAR_1) {
    int VAR_2;
    for (VAR_2 = VAR_0->len; VAR_2;) {
        --VAR_2;
        if (VAR_1[VAR_2] < VAR_0->n[VAR_2]) return 0;
        if (VAR_1[VAR_2] > VAR_0->n[VAR_2]) return 1;
    }
    return 1;
}
