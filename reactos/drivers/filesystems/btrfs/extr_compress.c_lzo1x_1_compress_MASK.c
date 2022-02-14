
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int inlen; int outlen; int inpos; int * out; int wrkmem; int * in; } ;
typedef TYPE_1__ lzo_stream ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int *,int*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_2(lzo_stream* VAR_2) {
    uint8_t *VAR_3 = VAR_2->out;
    NTSTATUS VAR_4 = VAR_1;

    if (VAR_2->inlen <= 0)
        VAR_2->outlen = 0;
    else if (VAR_2->inlen <= 9 + 4) {
        *VAR_3++ = FUNC_0(17 + VAR_2->inlen);

        VAR_2->inpos = 0;
        do {
            *VAR_3++ = VAR_2->in[VAR_2->inpos];
            VAR_2->inpos++;
        } while (VAR_2->inlen < VAR_2->inpos);
        VAR_2->outlen = (uint32_t)(VAR_3 - VAR_2->out);
    } else
        VAR_4 = FUNC_1(VAR_2->in, VAR_2->inlen, VAR_2->out, &VAR_2->outlen, VAR_2->wrkmem);

    if (VAR_4 == VAR_1) {
        VAR_3 = VAR_2->out + VAR_2->outlen;
        *VAR_3++ = VAR_0 | 1;
        *VAR_3++ = 0;
        *VAR_3++ = 0;
        VAR_2->outlen += 3;
    }

    return VAR_4;
}
