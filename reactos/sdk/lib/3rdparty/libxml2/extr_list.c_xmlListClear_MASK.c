
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* sentinel; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void
FUNC_1(xmlListPtr VAR_0)
{
    xmlLinkPtr VAR_1;

    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = VAR_0->sentinel->next;
    while(VAR_1 != VAR_0->sentinel) {
        xmlLinkPtr VAR_2 = VAR_1->next;

        FUNC_0(VAR_0, VAR_1);
        VAR_1 = VAR_2;
    }
}
