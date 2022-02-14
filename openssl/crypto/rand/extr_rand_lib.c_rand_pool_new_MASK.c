
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t min_len; size_t max_len; size_t alloc_len; int entropy_requested; int secure; int * buffer; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (size_t) ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

RAND_POOL *FUNC_5(int VAR_3, int VAR_4,
                         size_t VAR_5, size_t VAR_6)
{
    RAND_POOL *VAR_7 = FUNC_2(sizeof(*VAR_7));
    size_t VAR_8 = FUNC_3(VAR_4);

    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_7->min_len = VAR_5;
    VAR_7->max_len = (VAR_6 > VAR_2) ?
        VAR_2 : VAR_6;
    VAR_7->alloc_len = VAR_5 < VAR_8 ? VAR_8 : VAR_5;
    if (VAR_7->alloc_len > VAR_7->max_len)
        VAR_7->alloc_len = VAR_7->max_len;

    if (VAR_4)
        VAR_7->buffer = FUNC_1(VAR_7->alloc_len);
    else
        VAR_7->buffer = FUNC_2(VAR_7->alloc_len);

    if (VAR_7->buffer == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        goto err;
    }

    VAR_7->entropy_requested = VAR_3;
    VAR_7->secure = VAR_4;

    return VAR_7;

err:
    FUNC_0(VAR_7);
    return ((void*)0);
}
