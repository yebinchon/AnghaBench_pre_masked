
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int count; int * buf; } ;
typedef TYPE_1__ SHA_CTX ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(SHA_CTX* VAR_0, const void* VAR_1, int VAR_2) {
    int VAR_3 = (int) (VAR_0->count & 63);
    const uint8_t* VAR_4 = (const uint8_t*)VAR_1;

    VAR_0->count += VAR_2;

    while (VAR_2--) {
        VAR_0->buf[VAR_3++] = *VAR_4++;
        if (VAR_3 == 64) {
            FUNC_0(VAR_0);
            VAR_3 = 0;
        }
    }
}
