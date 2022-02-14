
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xmlListPtr ;
typedef TYPE_1__* xmlLinkPtr ;
struct TYPE_3__ {void* data; } ;


 TYPE_1__* FUNC_0 (int *,void*) ;

void *
FUNC_1(xmlListPtr VAR_0, void *VAR_1)
{
    xmlLinkPtr VAR_2;
    if (VAR_0 == ((void*)0))
        return(((void*)0));
    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2)
        return (VAR_2->data);
    return ((void*)0);
}
