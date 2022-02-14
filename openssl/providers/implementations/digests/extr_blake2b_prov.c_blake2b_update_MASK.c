
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int buflen; int const* buf; } ;
typedef TYPE_1__ BLAKE2B_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;
 int FUNC_2 (int ,int const*,size_t) ;

int FUNC_3(BLAKE2B_CTX *VAR_1, const void *VAR_2, size_t VAR_3)
{
    const uint8_t *VAR_4 = VAR_2;
    size_t VAR_5;
    VAR_5 = sizeof(VAR_1->buf) - VAR_1->buflen;
    if (VAR_3 > VAR_5) {
        if (VAR_1->buflen) {
            FUNC_2(VAR_1->buf + VAR_1->buflen, VAR_4, VAR_5);
            FUNC_1(VAR_1, VAR_1->buf, VAR_0);
            VAR_1->buflen = 0;
            VAR_4 += VAR_5;
            VAR_3 -= VAR_5;
        }
        if (VAR_3 > VAR_0) {
            size_t VAR_6 = VAR_3 % VAR_0;




            VAR_6 = VAR_6 ? VAR_6 : VAR_0;
            VAR_3 -= VAR_6;
            FUNC_1(VAR_1, VAR_4, VAR_3);
            VAR_4 += VAR_3;
            VAR_3 = VAR_6;
        }
    }

    FUNC_0(VAR_3 <= VAR_0);

    FUNC_2(VAR_1->buf + VAR_1->buflen, VAR_4, VAR_3);
    VAR_1->buflen += VAR_3;

    return 1;
}
