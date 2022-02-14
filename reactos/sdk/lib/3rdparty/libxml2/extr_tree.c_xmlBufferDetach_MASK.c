
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_3__ {scalar_t__ alloc; scalar_t__ use; scalar_t__ size; int * content; } ;


 scalar_t__ VAR_0 ;

xmlChar *
FUNC_0(xmlBufferPtr VAR_1) {
    xmlChar *VAR_2;

    if (VAR_1 == ((void*)0))
        return(((void*)0));
    if (VAR_1->alloc == VAR_0)
        return(((void*)0));

    VAR_2 = VAR_1->content;
    VAR_1->content = ((void*)0);
    VAR_1->size = 0;
    VAR_1->use = 0;

    return VAR_2;
}
