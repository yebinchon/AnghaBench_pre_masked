
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_3__ IMoniker_iface; int * name; int has_class; scalar_t__ ref; } ;
typedef TYPE_1__ MediaCatMoniker ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

MediaCatMoniker * FUNC_3(void)
{
    MediaCatMoniker * VAR_2 = ((void*)0);
    VAR_2 = FUNC_0(sizeof(MediaCatMoniker));
    if (!VAR_2)
        return ((void*)0);

    VAR_2->IMoniker_iface.lpVtbl = &VAR_1;
    VAR_2->ref = 0;
    VAR_2->has_class = VAR_0;
    VAR_2->name = ((void*)0);

    FUNC_1(&VAR_2->IMoniker_iface);

    FUNC_2();

    return VAR_2;
}
