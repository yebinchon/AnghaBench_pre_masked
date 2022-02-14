
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* subs; } ;
typedef TYPE_1__ WPACKET ;
struct TYPE_7__ {int * parent; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int) ;

int FUNC_2(WPACKET *VAR_0)
{
    int VAR_1;





    if (VAR_0->subs == ((void*)0) || VAR_0->subs->parent != ((void*)0))
        return 0;

    VAR_1 = FUNC_1(VAR_0, VAR_0->subs, 1);
    if (VAR_1) {
        FUNC_0(VAR_0->subs);
        VAR_0->subs = ((void*)0);
    }

    return VAR_1;
}
