
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_3__ {int* pos; int* last; int err; int offs; } ;
typedef TYPE_1__ ngx_rtmp_bit_reader_t ;



uint64_t
FUNC_0(ngx_rtmp_bit_reader_t *VAR_0, ngx_uint_t VAR_1)
{
    uint64_t VAR_2;
    ngx_uint_t VAR_3;

    VAR_2 = 0;

    while (VAR_1) {

        if (VAR_0->pos >= VAR_0->last) {
            VAR_0->err = 1;
            return 0;
        }

        VAR_3 = (VAR_0->offs + VAR_1 > 8 ? (ngx_uint_t) (8 - VAR_0->offs) : VAR_1);

        VAR_2 <<= VAR_3;
        VAR_2 += (*VAR_0->pos >> (8 - VAR_0->offs - VAR_3)) & ((u_char) 0xff >> (8 - VAR_3));

        VAR_0->offs += VAR_3;
        VAR_1 -= VAR_3;

        if (VAR_0->offs == 8) {
            VAR_0->pos++;
            VAR_0->offs = 0;
        }
    }

    return VAR_2;
}
