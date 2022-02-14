
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t lenbytes; struct TYPE_4__* parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_5__ {size_t written; size_t maxsize; TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;

int FUNC_2(WPACKET *VAR_0, size_t VAR_1)
{
    WPACKET_SUB *VAR_2;
    size_t VAR_3;


    if (!FUNC_1(VAR_0->subs != ((void*)0)))
        return 0;


    for (VAR_2 = VAR_0->subs; VAR_2->parent != ((void*)0); VAR_2 = VAR_2->parent)
        continue;

    VAR_3 = VAR_2->lenbytes;
    if (VAR_3 == 0)
        VAR_3 = sizeof(VAR_0->maxsize);

    if (FUNC_0(VAR_3) < VAR_1 || VAR_1 < VAR_0->written)
        return 0;

    VAR_0->maxsize = VAR_1;

    return 1;
}
