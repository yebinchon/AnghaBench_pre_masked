
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
struct TYPE_8__ {int data; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* sentinel; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(xmlListPtr VAR_0, const xmlListPtr VAR_1)
{

    xmlLinkPtr VAR_2;

    if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0)))
        return(1);
    for(VAR_2 = VAR_1->sentinel->next; VAR_2 != VAR_1->sentinel; VAR_2 = VAR_2->next) {
        if (0 !=FUNC_1(VAR_0, VAR_2->data)) {
            FUNC_0(VAR_0);
            return (1);
        }
    }
    return (0);
}
