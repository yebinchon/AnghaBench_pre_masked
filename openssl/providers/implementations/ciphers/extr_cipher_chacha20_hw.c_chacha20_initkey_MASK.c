
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * d; } ;
struct TYPE_4__ {scalar_t__ partial_len; TYPE_1__ key; } ;
typedef int PROV_CIPHER_CTX ;
typedef TYPE_2__ PROV_CHACHA20_CTX ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1, const uint8_t *VAR_2,
                            size_t VAR_3)
{
    PROV_CHACHA20_CTX *VAR_4 = (PROV_CHACHA20_CTX *)VAR_1;
    unsigned int VAR_5;

    if (VAR_2 != ((void*)0)) {
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 4)
            VAR_4->key.d[VAR_5 / 4] = FUNC_0(VAR_2 + VAR_5);
    }
    VAR_4->partial_len = 0;
    return 1;
}
