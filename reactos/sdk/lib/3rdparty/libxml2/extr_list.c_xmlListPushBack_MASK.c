
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlListPtr ;
typedef TYPE_3__* xmlLinkPtr ;
typedef int xmlLink ;
struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; void* data; } ;
struct TYPE_6__ {TYPE_1__* sentinel; } ;
struct TYPE_5__ {TYPE_3__* prev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(xmlListPtr VAR_1, void *VAR_2)
{
    xmlLinkPtr VAR_3, VAR_4;

    if (VAR_1 == ((void*)0))
        return(0);
    VAR_3 = VAR_1->sentinel->prev;

    if (((void*)0) ==(VAR_4 = (xmlLinkPtr )FUNC_1(sizeof(xmlLink)))) {
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
