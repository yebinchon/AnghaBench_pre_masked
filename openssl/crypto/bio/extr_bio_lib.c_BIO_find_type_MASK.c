
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next_bio; TYPE_1__* method; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ BIO ;



BIO *FUNC_0(BIO *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_3 = VAR_1 & 0xff;
    do {
        if (VAR_0->method != ((void*)0)) {
            VAR_2 = VAR_0->method->type;

            if (!VAR_3) {
                if (VAR_2 & VAR_1)
                    return VAR_0;
            } else if (VAR_2 == VAR_1)
                return VAR_0;
        }
        VAR_0 = VAR_0->next_bio;
    } while (VAR_0 != ((void*)0));
    return ((void*)0);
}
