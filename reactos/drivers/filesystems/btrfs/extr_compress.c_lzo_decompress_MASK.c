
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ outlen; scalar_t__ outpos; int * out; scalar_t__ inpos; scalar_t__ inlen; int * in; } ;
typedef TYPE_1__ lzo_stream ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

NTSTATUS FUNC_5(uint8_t* VAR_3, uint32_t VAR_4, uint8_t* VAR_5, uint32_t VAR_6, uint32_t VAR_7) {
    NTSTATUS VAR_8;
    uint32_t VAR_9, VAR_10, VAR_11;
    lzo_stream VAR_12;

    VAR_10 = 0;
    VAR_11 = 0;

    do {
        VAR_9 = *(uint32_t*)&VAR_3[VAR_10];

        if (VAR_9 + VAR_10 > VAR_4) {
            FUNC_0("overflow: %x + %x > %I64x\n", VAR_9, VAR_10, VAR_4);
            return VAR_1;
        }

        VAR_10 += sizeof(uint32_t);

        VAR_12.in = &VAR_3[VAR_10];
        VAR_12.inlen = VAR_9;
        VAR_12.inpos = 0;
        VAR_12.out = &VAR_5[VAR_11];
        VAR_12.outlen = FUNC_4(VAR_6, VAR_0);
        VAR_12.outpos = 0;

        VAR_8 = FUNC_3(&VAR_12);
        if (!FUNC_1(VAR_8)) {
            FUNC_0("do_lzo_decompress returned %08x\n", VAR_8);
            return VAR_8;
        }

        if (VAR_12.outpos < VAR_12.outlen)
            FUNC_2(&VAR_12.out[VAR_12.outpos], VAR_12.outlen - VAR_12.outpos);

        VAR_10 += VAR_9;
        VAR_11 += VAR_12.outlen;

        if (VAR_0 - ((VAR_7 + VAR_10) % VAR_0) < sizeof(uint32_t))
            VAR_10 = ((((VAR_7 + VAR_10) / VAR_0) + 1) * VAR_0) - VAR_7;

        VAR_6 -= VAR_12.outlen;
    } while (VAR_10 < VAR_4 && VAR_6 > 0);

    return VAR_2;
}
