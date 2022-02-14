
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ RSAPublicKey ;


 int FUNC_0 (TYPE_1__ const*,scalar_t__*,scalar_t__ const,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_1(const RSAPublicKey* VAR_0,
                    uint32_t* VAR_1,
                    const uint32_t* VAR_2,
                    const uint32_t* VAR_3) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0->len; ++VAR_4) {
        VAR_1[VAR_4] = 0;
    }
    for (VAR_4 = 0; VAR_4 < VAR_0->len; ++VAR_4) {
        FUNC_0(VAR_0, VAR_1, VAR_2[VAR_4], VAR_3);
    }
}
