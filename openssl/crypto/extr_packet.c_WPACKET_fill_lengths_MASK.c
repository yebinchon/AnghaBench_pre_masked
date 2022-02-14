
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_7__ {TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;

int FUNC_2(WPACKET *VAR_0)
{
    WPACKET_SUB *VAR_1;

    if (!FUNC_0(VAR_0->subs != ((void*)0)))
        return 0;

    for (VAR_1 = VAR_0->subs; VAR_1 != ((void*)0); VAR_1 = VAR_1->parent) {
        if (!FUNC_1(VAR_0, VAR_1, 0))
            return 0;
    }

    return 1;
}
