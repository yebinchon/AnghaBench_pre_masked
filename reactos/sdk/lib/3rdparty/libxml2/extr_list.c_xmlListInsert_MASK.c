
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xmlListPtr ;
typedef TYPE_1__* xmlLinkPtr ;
typedef int xmlLink ;
struct TYPE_3__ {struct TYPE_3__* prev; struct TYPE_3__* next; void* data; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(xmlListPtr VAR_1, void *VAR_2)
{
    xmlLinkPtr VAR_3, VAR_4;

    if (VAR_1 == ((void*)0))
        return(1);
    VAR_3 = FUNC_1(VAR_1, VAR_2);

    VAR_4 = (xmlLinkPtr) FUNC_2(sizeof(xmlLink));
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0,
          "Cannot initialize memory for new link");
        return (1);
    }
    VAR_4->data = VAR_2;
    VAR_3 = VAR_3->prev;
    VAR_4->next = VAR_3->next;
    (VAR_3->next)->prev = VAR_4;
    VAR_3->next = VAR_4;
    VAR_4->prev = VAR_3;
    return 0;
}
