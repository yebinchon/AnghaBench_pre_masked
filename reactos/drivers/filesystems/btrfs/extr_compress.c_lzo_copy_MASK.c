
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inpos; int inlen; int error; int outpos; int outlen; int * in; int * out; } ;
typedef TYPE_1__ lzo_stream ;



__attribute__((used)) static void FUNC_0(lzo_stream* VAR_0, int VAR_1) {
    if (VAR_0->inpos + VAR_1 > VAR_0->inlen) {
        VAR_0->error = 1;
        return;
    }

    if (VAR_0->outpos + VAR_1 > VAR_0->outlen) {
        VAR_0->error = 1;
        return;
    }

    do {
        VAR_0->out[VAR_0->outpos] = VAR_0->in[VAR_0->inpos];
        VAR_0->inpos++;
        VAR_0->outpos++;
        VAR_1--;
    } while (VAR_1 > 0);
}
