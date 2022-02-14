
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* sentinel; } ;



int
FUNC_0(xmlListPtr VAR_0)
{
    xmlLinkPtr VAR_1;
    int VAR_2=0;

    if (VAR_0 == ((void*)0))
        return(-1);

    for(VAR_1 = VAR_0->sentinel->next; VAR_1 != VAR_0->sentinel; VAR_1 = VAR_1->next, VAR_2++);
    return VAR_2;
}
