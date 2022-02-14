
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nl; scalar_t__ ptr; scalar_t__ begin; } ;
typedef TYPE_1__ parser_ctx_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,void*) ;

int FUNC_2(void *VAR_0, parser_ctx_t *VAR_1)
{
    int VAR_2;

    VAR_1->nl = VAR_1->ptr == VAR_1->begin;

    do {
        VAR_2 = FUNC_1(VAR_1, VAR_0);
    } while(VAR_2 == '@' && !(VAR_2 = FUNC_0(VAR_1, VAR_0)));

    return VAR_2;
}
