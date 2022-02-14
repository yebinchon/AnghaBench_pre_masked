
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int source_len; int source; } ;
typedef TYPE_1__ regexp_t ;
typedef int heap_pool_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (void*,int *,int ,int ,int,int ) ;

HRESULT FUNC_2(regexp_t **VAR_4, void *VAR_5, heap_pool_t *VAR_6, WORD VAR_7)
{
    if(((*VAR_4)->flags & VAR_2) != (VAR_7 & VAR_2)) {
        regexp_t *VAR_8 = FUNC_1(VAR_5, VAR_6, (*VAR_4)->source,
                (*VAR_4)->source_len, VAR_7, VAR_1);

        if(!VAR_8)
            return VAR_0;

        FUNC_0(*VAR_4);
        *VAR_4 = VAR_8;
    }else {
        (*VAR_4)->flags = VAR_7;
    }

    return VAR_3;
}
