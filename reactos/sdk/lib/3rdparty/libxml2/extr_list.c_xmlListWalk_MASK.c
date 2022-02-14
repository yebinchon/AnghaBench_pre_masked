
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ (* xmlListWalker ) (int ,void*) ;
typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
struct TYPE_5__ {int data; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* sentinel; } ;



void
FUNC_0(xmlListPtr VAR_0, xmlListWalker VAR_1, void *VAR_2) {
    xmlLinkPtr VAR_3;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return;
    for(VAR_3 = VAR_0->sentinel->next; VAR_3 != VAR_0->sentinel; VAR_3 = VAR_3->next) {
        if((VAR_1(VAR_3->data, VAR_2)) == 0)
                break;
    }
}
