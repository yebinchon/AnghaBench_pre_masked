
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t maxsize; size_t written; TYPE_4__* buf; int * subs; } ;
typedef TYPE_1__ WPACKET ;
struct TYPE_6__ {size_t length; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int FUNC_3(WPACKET *VAR_2, size_t VAR_3, unsigned char **VAR_4)
{

    if (!FUNC_2(VAR_2->subs != ((void*)0) && VAR_3 != 0))
        return 0;

    if (VAR_2->maxsize - VAR_2->written < VAR_3)
        return 0;

    if (VAR_2->buf != ((void*)0) && (VAR_2->buf->length - VAR_2->written < VAR_3)) {
        size_t VAR_5;
        size_t VAR_6;

        VAR_6 = (VAR_3 > VAR_2->buf->length) ? VAR_3 : VAR_2->buf->length;

        if (VAR_6 > VAR_1 / 2) {
            VAR_5 = VAR_1;
        } else {
            VAR_5 = VAR_6 * 2;
            if (VAR_5 < VAR_0)
                VAR_5 = VAR_0;
        }
        if (FUNC_0(VAR_2->buf, VAR_5) == 0)
            return 0;
    }
    if (VAR_4 != ((void*)0))
        *VAR_4 = FUNC_1(VAR_2);

    return 1;
}
