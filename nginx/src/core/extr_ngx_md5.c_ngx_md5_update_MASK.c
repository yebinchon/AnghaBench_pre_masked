
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int bytes; void const* buffer; } ;
typedef TYPE_1__ ngx_md5_t ;


 void* FUNC_0 (TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (void const*,void const*,size_t) ;

void
FUNC_2(ngx_md5_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    size_t VAR_3, VAR_4;

    VAR_3 = (size_t) (VAR_0->bytes & 0x3f);
    VAR_0->bytes += VAR_2;

    if (VAR_3) {
        VAR_4 = 64 - VAR_3;

        if (VAR_2 < VAR_4) {
            FUNC_1(&VAR_0->buffer[VAR_3], VAR_1, VAR_2);
            return;
        }

        FUNC_1(&VAR_0->buffer[VAR_3], VAR_1, VAR_4);
        VAR_1 = (u_char *) VAR_1 + VAR_4;
        VAR_2 -= VAR_4;
        (void) FUNC_0(VAR_0, VAR_0->buffer, 64);
    }

    if (VAR_2 >= 64) {
        VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2 & ~(size_t) 0x3f);
        VAR_2 &= 0x3f;
    }

    FUNC_1(VAR_0->buffer, VAR_1, VAR_2);
}
