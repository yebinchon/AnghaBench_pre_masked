
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* xmlListPtr ;
typedef int * xmlLinkPtr ;
struct TYPE_5__ {TYPE_1__* sentinel; } ;
struct TYPE_4__ {int * next; } ;



xmlLinkPtr
FUNC_0(xmlListPtr VAR_0)
{
    if (VAR_0 == ((void*)0))
        return(((void*)0));
    return (VAR_0->sentinel->next);
}
