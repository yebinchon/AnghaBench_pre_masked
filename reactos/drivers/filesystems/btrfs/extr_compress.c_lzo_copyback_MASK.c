
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t outpos; int error; int outlen; int * out; } ;
typedef TYPE_1__ lzo_stream ;



__attribute__((used)) static void FUNC_0(lzo_stream* VAR_0, uint32_t VAR_1, int VAR_2) {
    if (VAR_0->outpos < VAR_1) {
        VAR_0->error = 1;
        return;
    }

    if (VAR_0->outpos + VAR_2 > VAR_0->outlen) {
        VAR_0->error = 1;
        return;
    }

    do {
        VAR_0->out[VAR_0->outpos] = VAR_0->out[VAR_0->outpos - VAR_1];
        VAR_0->outpos++;
        VAR_2--;
    } while (VAR_2 > 0);
}
