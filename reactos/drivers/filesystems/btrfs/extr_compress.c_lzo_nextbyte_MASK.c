
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t inpos; size_t inlen; int error; int * in; } ;
typedef TYPE_1__ lzo_stream ;



__attribute__((used)) static uint8_t FUNC_0(lzo_stream* VAR_0) {
    uint8_t VAR_1;

    if (VAR_0->inpos >= VAR_0->inlen) {
        VAR_0->error = 1;
        return 0;
    }

    VAR_1 = VAR_0->in[VAR_0->inpos];
    VAR_0->inpos++;

    return VAR_1;
}
