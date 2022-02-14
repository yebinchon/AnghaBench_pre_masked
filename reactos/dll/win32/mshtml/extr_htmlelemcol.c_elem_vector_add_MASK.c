
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int size; int ** buf; } ;
typedef TYPE_1__ elem_vector_t ;
typedef int HTMLElement ;


 int ** FUNC_0 (int **,int) ;

__attribute__((used)) static void FUNC_1(elem_vector_t *VAR_0, HTMLElement *VAR_1)
{
    if(VAR_0->len == VAR_0->size) {
        VAR_0->size <<= 1;
        VAR_0->buf = FUNC_0(VAR_0->buf, VAR_0->size*sizeof(HTMLElement*));
    }

    VAR_0->buf[VAR_0->len++] = VAR_1;
}
