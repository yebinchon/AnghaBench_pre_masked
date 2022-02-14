
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ sha1_context ;


 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,unsigned char const*) ;

void FUNC_2(sha1_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    size_t VAR_4;

    VAR_4 = VAR_0->count[0];
    if ((VAR_0->count[0] += VAR_2 << 3) < VAR_4)
        VAR_0->count[1]++;
    VAR_0->count[1] += (VAR_2 >> 29);

    VAR_4 = (VAR_4 >> 3) & 63;

    if ((VAR_4 + VAR_2) > 63) {
        VAR_3 = 64 - VAR_4;
        FUNC_0(&VAR_0->buffer[VAR_4], VAR_1, VAR_3);
        FUNC_1(VAR_0->state, VAR_0->buffer);

        for (; VAR_3 + 63 < VAR_2; VAR_3 += 64)
            FUNC_1(VAR_0->state, &VAR_1[VAR_3]);

        VAR_4 = 0;
    } else {
        VAR_3 = 0;
    }

    FUNC_0(&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
