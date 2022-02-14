
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hres; int heap; } ;
typedef TYPE_1__ parser_ctx_t ;


 int VAR_0 ;
 void* FUNC_0 (int *,size_t) ;

void *FUNC_1(parser_ctx_t *VAR_1, size_t VAR_2)
{
    void *VAR_3;

    VAR_3 = FUNC_0(&VAR_1->heap, VAR_2);
    if(!VAR_3)
        VAR_1->hres = VAR_0;
    return VAR_3;
}
