
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
typedef int xmlLink ;
struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; void* data; } ;
struct TYPE_4__ {TYPE_2__* sentinel; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(xmlListPtr VAR_1, void *VAR_2)
{
    xmlLinkPtr VAR_3, VAR_4;

    if (VAR_1 == ((void*)0))
        return(0);
    VAR_3 = VAR_1->sentinel;

    VAR_4 = (xmlLinkPtr) FUNC_1(sizeof(xmlLink));
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0,
          "Cannot initialize memory for new link");
        return (0);
    }
    VAR_4->data = VAR_2;
    VAR_4->next = VAR_3->next;
    (VAR_3->next)->prev = VAR_4;
    VAR_3->next = VAR_4;
    VAR_4->prev = VAR_3;
    return 1;
}
