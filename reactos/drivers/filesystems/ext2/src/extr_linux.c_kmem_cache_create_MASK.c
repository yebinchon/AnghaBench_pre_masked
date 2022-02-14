
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; int constructor; int name; int la; } ;
typedef TYPE_1__ kmem_cache_t ;
typedef int kmem_cache_cb_t ;


 int FUNC_0 (int *,int *,int *,int ,size_t,char,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

kmem_cache_t *
FUNC_4(
    const char * VAR_1,
    size_t VAR_2,
    size_t VAR_3,
    unsigned long VAR_4,
    kmem_cache_cb_t VAR_5
)
{
    kmem_cache_t *VAR_6 = ((void*)0);

    VAR_6 = FUNC_1(sizeof(kmem_cache_t), VAR_0);
    if (VAR_6 == ((void*)0)) {
        goto errorout;
    }

    FUNC_2(VAR_6, 0, sizeof(kmem_cache_t));
    FUNC_0(
        &VAR_6->la,
        ((void*)0),
        ((void*)0),
        0,
        VAR_2,
        'JBKC',
        0);

    VAR_6->size = VAR_2;
    FUNC_3(VAR_6->name, VAR_1, 31);
    VAR_6->constructor = VAR_5;

errorout:

    return VAR_6;
}
